<?php
/**
 * @file
 * Home of the FeedsHTTPFetcherTimestamp and related classes. Minimaly overriding of FeedsHTTPFetcher
 */


/**
 * Fetches data via HTTP and appending custom headers.
 */
class FeedsHTTPFetcherTimestamp extends FeedsHTTPFetcher {

  /**
   * Implements FeedsFetcher::fetch().
   */
  public function fetch(FeedsSource $source) {
    //this line is a direct copy from FeedsHTTPFetcher::fetch()
    $source_config = $source->getConfigFor($this);

    //BEGIN custom code
    //if the submit page "skip" checkbox was set
    if (isset($source_config['skip_timestamp']) && $source_config['skip_timestamp'] == TRUE) {
      //set it back to false for the future requests
      $source_config['skip_timestamp'] = FALSE;
      //save that to the object
      $source->setConfigFor($this,$source_config);
      //set a message
      watchdog('feeds_httpfetcher_timestamp',t('One-time timestamp skip for @url', array('@url' => $source_config['source'])));
      //and then skip the custom timestamp section
    }
    //(when the skip flag is not set)
    else {
      //if the label and format are both set
      if (!empty($this->config['timestamp_query']) && !empty($this->config['timestamp_format'])) {
        //get the timestamp of last import
        $last_import = $source->imported;
        //if the adjustment value is set
        if (!empty($this->config['timestamp_adjustment'])) {
          //adjust the timestamp accordingly
          $last_import = strtotime($this->config['timestamp_adjustment'],$last_import);
        }
        //if the URL doesn't have a query string
        if(strpos($source_config['source'],'?') === FALSE) {
          //use a question mark
          $qchar = '?';
        }
        //(or there is already a query string)
        else {
          //use the ampersand
          $qchar = '&';
        }
        //construct the query string and append to url
        $source_config['source'] .= $qchar . $this->config['timestamp_query'] . '=' . date($this->config['timestamp_format'],$last_import);
        //set a message
        watchdog('feeds_httpfetcher_timestamp',t('Dynamic timestamp appended to feeds request @url', array('@url' => $source_config['source'])));
      }
      //END custom timestamp section
    }
    //END Custom code for this method.

    //following code is a direct copy of FeedsHTTPFetcher::fetch() -- to process request
    if ($this->config['use_pubsubhubbub'] && ($raw = $this->subscriber($source->feed_nid)->receive())) {
      return new FeedsFetcherResult($raw);
    }
    $fetcher_result = new FeedsHTTPFetcherResult($source_config['source']);
    // When request_timeout is empty, the global value is used.
    $fetcher_result->setTimeout($this->config['request_timeout']);
    return $fetcher_result;
    }

    /**
     * Override parent::configDefaults().
     */
    public function configDefaults() {
      //pull in the parent version of this method
      $defaults = parent::configDefaults();
      //add the defaults for this plugin
      $defaults['timestamp_query'] = 'changed';
      $defaults['timestamp_format'] = 'Y-m-d+H:i:s';
      $defaults['timestamp_adjustment'] = '';
      return $defaults;
    }
  
  /**
   * Override parent::configForm().
   */
    public function configForm(&$form_state) {
      //pull in the FeedsHTTPFetcher version of this form
      $form = parent::configForm($form_state);
        //add the query string label field
        $form['timestamp_query'] = array(
        '#type' => 'textfield',
        '#title' => t('Timestamp query string'),
        '#description' => t('The label for the timestamp to be used in the URL query string.'),
        '#default_value' => $this->config['timestamp_query'],
      );
        //add the timestamp format field
        $form['timestamp_format'] = array(
        '#type' => 'textfield',
        '#title' => t('Format for time'),
        '#description' => t('The for the timestamp query string in PHP date() format.'),
        '#default_value' => $this->config['timestamp_format'],
      );
        //add the time adjustment field
       $form['timestamp_adjustment'] = array(
        '#type' => 'textfield',
        '#title' => t('Adjust timestamp'),
        '#description' => t('An optional relative value to adjust the timestamp by like \'-1 day\'. Use to adjust for timezones or other discrepancies.'),
        '#default_value' => $this->config['timestamp_adjustment'],
      );

    return $form;
  }
   /**
   * Expose source form.
   */
  public function sourceForm($source_config) {
    //pull in the FeedsHTTPFetcher version of this form
    $form = parent::sourceForm($source_config);
    //add the skip timestamp checkbox -- always off by default
    $form['skip_timestamp'] = array(
      '#type' => 'checkbox',
      '#title' => t('Skip timestamp'),
      '#description' => t('Skips appending a timestamp to the url, this time only. -- Warning: unfiltered feeds may be larger than expected.'),
      '#default_value' => FALSE,
    );
    return $form;
  }

}
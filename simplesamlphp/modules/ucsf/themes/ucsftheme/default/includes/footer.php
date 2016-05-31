<?php



if(!empty($this->data['htmlinject']['htmlContentPost'])) {
  foreach($this->data['htmlinject']['htmlContentPost'] AS $c) {
    echo $c;
  }
}


?>
</div><!-- #content -->

</div><!-- #wrap -->
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.js"></script>
<script type="text/javascript" src="/<?php echo $this->data['baseurlpath']; ?>resources/ucsftheme/chosen.jquery.min.js"></script>
<script type="text/javascript" src="/<?php echo $this->data['baseurlpath']; ?>resources/ucsftheme/ucsf.js"></script>
</body>
</html>

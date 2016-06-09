(function ($) { 
/* Pull in photos from UCSF Flickr feed and display a random subset */	
		$.getJSON("https://api.flickr.com/services/rest/?method=flickr.groups.pools.getPhotos&api_key=9b4b2f136a6d8a73a2d8609cf8d7bd35&group_id=1203449@N23&extras=url_sq&format=json&jsoncallback=?", function(data){
			
			var temp;
			var nums = new Array;		
			
			for (var i=0; i<9; i++) {		
			
				while((temp = unique(Math.floor(Math.random()*(data.photos.photo.length)), nums)) == false);		
				nums[i] = temp;
				
				var curritem = data.photos.photo[temp];
				var url = curritem.url_sq;
				var bigpic = 'http://www.flickr.com/photos/' + curritem.owner + '/' + curritem.id + '/in/pool-ucsf_som';
				
				$('#flickr-badge').append('<a href="' + bigpic +'"><img src="' + url + '"/></a>');			
			}
			
			//Check if random number already exists in temporary array
			function unique (random_number, number_array) {
				for (var i=0; i<number_array.length; i++) {
					if (random_number == number_array[i]) {											
						return (false);
					}
				}
				return (random_number);
			}			  
		  });
	
})(jQuery)
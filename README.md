#The Official Website of the Swarm Robotics Research Group, IIT Kharagpur.

###Change parallax background images.
* The images can be found at `img/parallax`. Do note that the images cannot be renamed.  

###Add a person to the Team section:
* Save a 200*200 profile image at `/img/team/`.  
* Add the following snippet of HTML under `<section id="section-works" class="section appear clearfix">`.
```html
    <article class="col-md-2 isotopeItem <Team>">
	<div class="team-member" align="center">
		<figure class="member-photo"><img src="img/team/<File name>.jpg" alt="" /></figure>
		<div class="team-detail">
			<h4><Name of the member></h4>
			<span><Job Profile></span>					
		</div>
	</div>
    </article>
```
   Replace `<Team>` with software/embedded.

 * Save a 200*200 profile image at `/img/team/`.  
 * Add the following snippet of HTML under `<section id="section-works" class="section appear clearfix">`.
 ```html
-    <article class="col-md-2 isotopeItem software">
+    <article class="col-md-2 isotopeItem <team>">
 	<div class="team-member" align="center">
-		<figure class="member-photo"><img src="img/team/Srishti.jpg" alt="" /></figure>
+		<figure class="member-photo"><img src="img/team/<Filename>" alt="" /></figure>
 		<div class="team-detail">
-			<h4>Srishti Samadder</h4>
-			<span>Member,Software Team</span>					
+			<h4><Name></h4>
+			<span><Job Profile>Team</span>					
 		</div>
 	</div>
     </article>

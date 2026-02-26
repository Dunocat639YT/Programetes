size(800, 800);
background(255, 255, 255);
noStroke();

// Cap superior
fill(0, 255, 0);
arc(400, 250, 200, 200, -PI, 0);

// Cap inferior
fill(255, 255, 0);
arc(400, 250, 200, 200, 0, PI);

// Ull esquerra
fill(255, 255, 255);
arc(360, 210, 75, 75, 0, TWO_PI);
fill(0, 0, 0);
arc(360, 210, 50, 50, 0, TWO_PI);

// Ull dreta
fill(255, 255, 255);
arc(440, 210, 75, 75, 0, TWO_PI);
fill(0, 0, 0);
arc(440, 210, 50, 50, 0, TWO_PI);

// Somriure
fill(0, 0, 255);
stroke(0, 0, 255);
strokeWeight(10);
arc(400, 275, 150, 50, 0, PI, PIE);

// Cos
noStroke();
arc(400, 450, 200, 200, -PI, 0);
fill(255, 255, 0);
arc(400, 450, 100, 100, -PI, 0);

// Braç esquerra (no ha sortit gaire bé)
fill(0, 0, 255);
arc(300, 450, 200, 200, -PI, -HALF_PI, PIE);

// Braç dret (no ha sortit gaire bé)
fill(0, 0, 255);
arc(500, 450, 200, 200, -HALF_PI, 0, PIE);

// Mà esquerra
fill(0, 0, 0);
arc(250, 450, 50, 50, 0, TWO_PI, PIE);

// Mà dreta
fill(0, 0, 0);
arc(550, 450, 50, 50, 0, TWO_PI, PIE);

// Cama esquerra
fill(0, 255, 0);
arc(340, 510, 120, 120, -PI - QUARTER_PI, - QUARTER_PI);

// Cama dreta
fill(0, 255, 0);
arc(470, 510, 120, 120, -HALF_PI - QUARTER_PI, QUARTER_PI);
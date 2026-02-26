size(500, 500);
background(255, 255, 255);
noStroke();

// Pic
fill(0, 0, 255);
triangle(33, 60,  33, 160,  90, 105);

// Cap
fill(0, 255, 100);
quad(33, 60,  90, 10,  132, 60,  90, 105);

// Coll
fill(255, 0, 0);
quad(90, 105,  132, 60,  132, 155,  90, 215);

// Cos
fill(0, 255, 0);
triangle(90, 215,  150, 130,  270, 215);

// Ala esquerra
fill(0, 0, 255);
triangle(150, 130,  300, 45,  300, 245);

// Ala dreta
fill(255, 100, 0);
triangle(440, 130,  300, 45,  300, 245);

// Cua
fill(255, 255, 0);
triangle(440, 130,  375, 90,  490, 90);
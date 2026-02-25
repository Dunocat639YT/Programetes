size(400, 380);
background(255, 255, 255);
noStroke();

// Cua
fill(255, 153, 255);
triangle(30, 60, 120, 150, 30, 240);

// Cos
fill(0, 204, 102);
triangle(120, 150, 240, 30, 240, 270);
fill(0, 255, 0);
triangle(360, 150, 240, 30, 240, 270);

// Ala superior
fill(255, 0, 0);
quad(140, 30, 240, 30, 195, 75, 105, 75);

// Ala inferior
fill(255, 255, 0);
triangle(180, 210, 240, 270, 180, 330);
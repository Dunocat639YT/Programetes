size(400, 400);
background(255);
noStroke();

color[] colors = {
  color(255, 0, 0),    // vermell
  color(255, 165, 0),  // taronja
  color(0, 200, 0),    // verd
  color(0, 180, 200),  // blau clar
  color(0, 0, 200),    // blau
  color(140, 0, 200),  // lila
  color(255, 255, 0),  // groc
  color(0),            // negre
  color(255),          // blanc
  color(255, 0, 0)     // centre vermell
};

for (int i = colors.length - 1; i >= 0; i--) {
  fill(colors[i]);
  circle(width/2, height/2, (i + 1) * 30);
}
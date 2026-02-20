size(700, 550);

// Marge base
int m = 20;

// Figura A
line(m+0,   m+80,  m+80,  m+80);
line(m+80,  m+80,  m+80,  m+40);
line(m+80,  m+40,  m+40,  m+40);
line(m+40,  m+40,  m+40,  m+0);
line(m+40,  m+0,   m+0,   m+0);
line(m+0,   m+0,   m+0,   m+80);

// Figura B
int x = 200;
line(x+m,     m+0,   x+m+100, m+0);
line(x+m+100, m+0,   x+m+150, m+50);
line(x+m+150, m+50,  x+m+150, m+100);
line(x+m+150, m+100, x+m,     m+100);
line(x+m,     m+100, x+m,     m+0);

// Figura C
x = 420;
line(x+m,     m+120, x+m+100, m+120);
line(x+m+100, m+120, x+m+100, m+50);
line(x+m+100, m+50,  x+m+50,  m+0);
line(x+m+50,  m+0,   x+m,     m+50);
line(x+m,     m+50,  x+m,     m+120);

// Figura D
int y = 220;
line(m+0,   y+60,  m+180, y+60);
line(m+180, y+60,  m+120, y+0);
line(m+120, y+0,   m+60,  y+0);
line(m+60,  y+0,   m+0,   y+60);

// Figura E
x = 260;
line(x+m+0,   y+80, x+m+80,  y+80);
line(x+m+80,  y+80, x+m+160, y+0);
line(x+m+160, y+0,  x+m+80,  y+0);
line(x+m+80,  y+0,  x+m+0,   y+80);

// Figura F
x = 520;
line(x+m+60,  y+0,   x+m+120, y+60);
line(x+m+120, y+60,  x+m+60,  y+120);
line(x+m+60,  y+120, x+m+0,   y+60);
line(x+m+0,   y+60,  x+m+60,  y+0);

// Figura G
x = 340;
y = 420;
line(x+30, y+0,   x+60, y+0);
line(x+60, y+0,   x+60, y+30);
line(x+60, y+30,  x+90, y+30);
line(x+90, y+30,  x+90, y+60);
line(x+90, y+60,  x+60, y+60);
line(x+60, y+60,  x+60, y+90);
line(x+60, y+90,  x+30, y+90);
line(x+30, y+90,  x+30, y+60);
line(x+30, y+60,  x+0,  y+60);
line(x+0,  y+60,  x+0,  y+30);
line(x+0,  y+30,  x+30, y+30);
line(x+30, y+30,  x+30, y+0);
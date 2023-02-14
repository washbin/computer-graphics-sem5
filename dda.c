/*
 * Digital Differential Analyzer
 * DDA line drawing algorithm
 */
#include <graphics.h>
#include <math.h>
#include <stdio.h>

void drawline(int x1, int y1, int x2, int y2) {
  int dx, dy, step, x_inc, y_inc;
  float x, y;

  dx = x2 - x1;
  dy = y2 - y1;

  if (abs(dx) > abs(dy)) {
    step = abs(dx);
  } else {
    step = abs(dy);
  }

  x_inc = dx / step;
  y_inc = dy / step;
  x = x1;
  y = y1;

  for (int i = 1; i <= step; i++) {
    putpixel(round(x), round(y), RED);
    x = x + x_inc;
    y = y + y_inc;
  }
}

int main() {
  int graph_driver = DETECT, graph_mode;
  int x1, y1, x2, y2;

  printf("Enter the 2 line co-ordinates x1, y1 and x2, y2: ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  initgraph(&graph_driver, &graph_mode, "C:\\TC\\BGI");
  drawline(x1, y1, x2, y2);

  getch();
  closegraph();

  return 0;
}

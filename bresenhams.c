/*
 * BSA
 * Bresenham's line drawing algorithm
 */
#include <graphics.h>
#include <stdio.h>

void drawline(int x1, int y1, int x2, int y2) {
  // p - Decision parameter
  int dx, dy, p, x, y;

  dx = x2 - x1;
  dy = y2 - y1;
  x = x1;
  y = y1;

  p = (2 * dy) - dx;

  // case of slope < 1 i.e m = dy/dx < 1

  while (x < x2) {
    putpixel(x, y, BLUE);
    x = x + 1;
    if (p >= 0) {
      y = y + 1;
      p = p + (2 * dy) - (2 * dx);
    } else {
      p = p + (2 * dy);
    }
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

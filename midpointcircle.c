/*
 * Mid point circle drawing algorithm
 */
#include <graphics.h>
#include <stdio.h>

void draw_circle(int radius) {
  int x, y, p;

  x = 0;
  y = radius;
  p = 1 - radius;

  do {
    putpixel(360 + x, 360 + y, RED);
    putpixel(360 - x, 360 + y, GREEN);
    putpixel(360 + x, 360 - y, BLUE);
    putpixel(360 - x, 360 - y, WHITE);

    putpixel(360 + y, 360 + x, RED);
    putpixel(360 - y, 360 + x, GREEN);
    putpixel(360 + y, 360 - x, BLUE);
    putpixel(360 - y, 360 - x, WHITE);

    x = x + 1;
    if (p < 0) {
      p = p + (2 * x) + 2;
    } else {
      y = y - 1;
      p = p + 2 * (x - y) + 1;
    }
  } while (x < y);
}

int main() {
  int graph_driver = DETECT, graph_mode;
  int r;

  printf("Enter the radius of the circle: ");
  scanf("%d", &r);

  initgraph(&graph_driver, &graph_mode, "C:\\TC\\BGI");
  draw_circle(r);

  getch();
  closegraph();

  return 0;
}

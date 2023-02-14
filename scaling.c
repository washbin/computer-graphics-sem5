/*
 * Scaling of a 2D line
 */
#include <graphics.h>
#include <stdio.h>

int main() {
  int graph_driver = DETECT, graph_mode;
  int x1, y1, x2, y2, sx, sy;

  printf("Enter the 2 line co-ordinates x1, y1 and x2, y2: ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  initgraph(&graph_driver, &graph_mode, "C:\\TC\\BGI");
  line(x1, y1, x2, y2);

  printf("Enter the scaling factors tx, ty: ");
  scanf("%d %d", &sx, &sy);

  x1 = x1 * sx;
  x2 = x2 * sx;

  y1 = y1 * sy;
  y2 = y2 * sy;

  printf("Line after scaling: ");
  line(x1, y1, x2, y2);

  getch();
  closegraph();

  return 0;
}

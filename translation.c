/*
 * Translation of a 2D line
 */
#include <graphics.h>
#include <stdio.h>

int main() {
  int graph_driver = DETECT, graph_mode;
  int x1, y1, x2, y2, tx, ty;

  printf("Enter the 2 line co-ordinates x1, y1 and x2, y2: ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  initgraph(&graph_driver, &graph_mode, "C:\\TC\\BGI");
  line(x1, y1, x2, y2);

  printf("Enter the translation factors tx, ty: ");
  scanf("%d %d", &tx, &ty);

  x1 = x1 + tx;
  x2 = x2 + tx;

  y1 = y1 + ty;
  y2 = y2 + ty;

  printf("Line after translation: ");
  line(x1, y1, x2, y2);

  getch();
  closegraph();

  return 0;
}

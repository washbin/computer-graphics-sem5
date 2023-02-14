/*
 * Basic graphics functions
 */
#include <graphics.h>
#include <stdio.h>

int main() {
  int graph_driver = DETECT, graph_mode;

  initgraph(&graph_driver, &graph_mode, "C:\\TC\\BGI");

  outtext("Displaying Graphics");
  putpixel(30, 40, GREEN);
  setcolor(RED);
  line(50, 50, 100, 100);

  getch();
  closegraph();

  return 0;
}


#include <iostream>
#include "point.hh"

int
main(int argc, char *argv[]) {
  std::cout << "Hello, world!" << std::endl;

  // some example code
  Point p1(2, 3);
  Point p2(5, 7);
  Point p3 = p1.add(p2);

  std::cout << "Here's a point: " << p3.show() << std::endl;
  return 0;
}

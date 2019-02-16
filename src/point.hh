#pragma once
#include <string>

class Point {
 private:
  int m_x;
  int m_y;

 public:
  Point(int x, int y);

  void x(int);
  int x() const;

  void y(int);
  int y() const;

  Point add(Point &) const;

  // create a new point with components negated.
  Point negate() const;

  std::string show() const;
};

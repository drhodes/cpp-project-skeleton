#include "point.hh"
#include <exception>
#include <iomanip>
#include <string>

Point::Point(int x, int y) {
  m_x = x;
  m_y = y;
}

void
Point::x(int x) {
  m_x = x;
}

int
Point::x() const {
  return m_x;
}

void
Point::y(int y) {
  m_y = y;
}

int
Point::y() const {
  return m_y;
}

Point
Point::add(Point &p) const {
  return Point{x() + p.x(), y() + p.y()};
}

std::string
Point::show() const {
  std::stringstream ss;
  ss << "<Point " << m_x << ", " << m_y << ">";
  return ss.str();
}

// TODO
// This method is declared const, so it can't mutate its data members,
// returns a point with its components negated.

Point
Point::negate() const {
  // stub
  throw std::runtime_error("negate unimplemented");
}

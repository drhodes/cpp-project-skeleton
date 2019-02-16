#include "../src/point.hh"
#include "gtest/gtest.h"

TEST(Point, AdditionPositive) {
  Point p1(2, 3);
  Point p2(5, 7);
  Point p3 = p1.add(p2);

  EXPECT_EQ(7, p3.x()) << "x component of point not correct";
  EXPECT_EQ(10, p3.y()) << "y component of point not correct";
}

TEST(Point, AdditionZero) {
  Point p1(2, 3);
  Point p2(-2, -3);
  Point p3 = p1.add(p2);

  EXPECT_EQ(0, p3.x()) << "x component of point should cancel";
  EXPECT_EQ(0, p3.y()) << "y component of point should cancel";
}

TEST(Point, Negation) {
  // for all points p: p.add(p.negate())
  // p.x == 0 and p.y == 0 should hold.
  EXPECT_EQ(0, 1) << "this test is unimplemented";
}

int
main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

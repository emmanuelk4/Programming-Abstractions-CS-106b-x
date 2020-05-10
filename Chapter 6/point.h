//Interface file for point class
#ifndef _point_h
#define _point_h

#include <iostream>
#include <string>

class Point {
private:
   int x;
   int y;
   
public:
   Point();
   Point(int xc, int yc);
   
   int getX();
   int getY();
   
   std::string toString();
  //friend declaration
  friend bool operator == (Point p1, Point p2);
  //friend declaration 
  };
  std::ostream & operator << (std::ostream & os, Point pt);
  //is a free function so appears outside class
  //Although it is free, firend declaration makes it able to access
  // overloads operators == and !=
  bool operator == (Point p1, Point p2);
  
  bool operator != (Point p1, Point p2);
  

#endif
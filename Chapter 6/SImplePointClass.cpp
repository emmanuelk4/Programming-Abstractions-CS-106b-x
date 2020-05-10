//simple point class
#include <string>
#include <iostream>
using namespace std;

class Point {
//Instance variable
private :
   int x;
   int y;
//Instance variable

//Constructors
public: 
   Point() {
   x = 0;
   y = 0;
   }
   Point(int xc, int yc) {
      x = xc;
      y = yc;
   }
   //Constructors
   
   //Getter method
   int getX() {
      return x;
   }
   int getY() {
      return y;
   }
   //Getter method
   string toString() {
   return "x + y";
   }
 
};
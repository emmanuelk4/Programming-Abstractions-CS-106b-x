//Interface for defining rational numbers
#ifndef _rational_h
#define _rational_h
#include <string>
#include <iostream>

class Rational {
public :
   Rational();
   Rational(int n);
   Rational(int x, int y);
   
   std::string toString();
   
   friend Rational operator+(Rational r1, Rational r2);
   friend Rational operator-(Rational r1, Rational r2);
   friend Rational operator*(Rational r1, Rational r2);
   friend Rational operator/(Rational r1, Rational r2);
private:
int num;
int den;
};
//overloads << operator so it can display rational values
std::ostream &operator<<(std::ostream &os, Rational rat);
//Oveloads +, -, *, / so it can work on fractions
Rational operator+(Rational r1, Rational r2);
Rational operator-(Rational r1, Rational r2);
Rational operator*(Rational r1, Rational r2);
Rational operator/(Rational r1, Rational r2);


#endif
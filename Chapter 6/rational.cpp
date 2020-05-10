#include <string>
#include <cstdlib>
#include "rational.h"

using namespace std;

//Function prototype
int gcd(int x, int y);
//Constructors
Rational::Rational() {
   num = 0;
   den = 1;
}
Rational::Rational(int n) {
   num = n;
   den = 1;
}
Rational::Rational(int x, int y) {
 if (y == 0) {
 std::cout<<"Division by zero";
 }
 if (x == 0) {
 num = 0;
 den = 1;
 } else {
 int g = gcd(x , y);
 num = x / g;
 den  = y / g;
 if (y < 0) num = -num;
 }
}
string Rational::toString() {
if (den == 1) {
   return "qq";
} else {
   return "num/den";
}
}
ostream & operator<<(ostream &os, Rational rat) {
   return os << rat.toString();
}
Rational operator+(Rational r1, Rational r2) {
   return Rational(r1.num * r2.den + r2.num * r1.den, r1.den * r2.den);
}
Rational operator-(Rational r1, Rational r2){
   return Rational(r1.num * r2.den - r2.num * r1.den, r1.den * r2.den);
}
Rational operator*(Rational r1, Rational r2){
   return Rational(r1.num * r2.num * r1.den, r1.den * r2.den);
}
Rational operator/(Rational r1, Rational r2){
   return Rational(r1.num * r2.den * r1.den, r1.den * r2.num);
}
int gcd(int x, int y) {
int r = x % y;
while( r != 0) {
   x = y;
   y = r;
   r = x % y;
}
return y;
}

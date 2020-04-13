/*
*Name: Murage Kibicho
*Exercise: COnvert meters to feet and inches
*Question: 2
*
*/
#include <iostream>
using namespace std;

//function prototype
double MetresToFeetAndInches(double metres);
//function prototype

int main() {
cout<<MetresToFeetAndInches(1.8);
return 0;
}
/*
*Function : MetresToFeetAndInches
*Returns distance from metres to feet + inches
*/
double MetresToFeetAndInches(double metres) {
 double inches = metres / 0.0254;
 double foot = inches / 12;
 return foot;
}
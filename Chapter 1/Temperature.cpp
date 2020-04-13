/*
* Name: Murage Kibicho
*Reads temperature in Celsius and displays in Fahrenheit
*/
#include <iostream>
using namespace std;

//function prototype
double CelsiusToFahrenheit(double tempCelsius);
//function prototype

int main() {
   cout << CelsiusToFahrenheit(38);

   return 0;
}
/*
*Function: CelsiusTOFahrenheit
*/
double CelsiusToFahrenheit(double tempCelsius) {
   double tempFahrenheit = 0;
   tempFahrenheit = tempCelsius * 1.8 + 32;

   return tempFahrenheit;
}
/*
*Name: Murage Kibicho
*Exercise: Find sum of consecutive digits
*Question: 3
*
*/
#include <iostream>
using namespace std;

//function prototype
int sumOfNumbers(int number);
//function prototype
int main() {
cout << sumOfNumbers(100);

return 0;
}

int sumOfNumbers(int number){
 int sum = number * (number + 1) /2;
 return sum;
}

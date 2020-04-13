/*
*Name: Murage Kibicho
*Exercise: sum of N odd integers
*Question: 3
*
*/
#include <iostream>
using namespace std;

int sumOfOdd(int N);

int main() {
cout << sumOfOdd(4);
return 0;
}

int sumOfOdd(int N) {
 int sum = 0;
 int odd = 1;
 for (int i = 0; i < N; i++ ) {
   sum +=odd;
      odd +=2;  
 }

return sum;
}
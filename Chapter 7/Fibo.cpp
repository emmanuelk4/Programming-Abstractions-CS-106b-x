//Recursive implementation of fibonacci series
#include <iostream>
using namespace std;

const int MIN_INDEX = 0; //1st term
const int MAX_INDEX = 20; //last term

int fib(int n);//Function prototype

int main() {
   cout << "THis is the fibonacci sequence\n";
   for (int i = MIN_INDEX; i <= MAX_INDEX; i++) {
      cout << "fibonacci(" << i << ")";
      cout << " = " << fib(i) << endl;
   }
   return 0;
   }
   
//Function recursively calls fibonacci sequence
int fib(int n) {
//base case
 if(n < 2) {
   return 1;
 } else {
   return fib(n-1) + fib (n-2);
    }

}
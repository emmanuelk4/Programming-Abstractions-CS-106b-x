//Recursive implementation of fibonacci series
#include <iostream>
using namespace std;

const int MIN_INDEX = 0; //1st term
const int MAX_INDEX = 20; //last term

int fib(int n);//Function prototype
int additiveSequence(int n, int t0, int t1);

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
return additiveSequence(n , 0, 1);
}

//wrapper function to eliminate redundant recursive calls
int additiveSequence(int n, int t0, int t1) {
 if ( n == 0 ) return t0;
 if ( n == 1 ) return t1;
 
 return additiveSequence( n - 1, t1, t0 + t1);
}

#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;


long fibonacciEvenSum_N(long limit) {
  long n_0 = 0,n_1 = 1;
  long f_n = 0;
  long sum = 0; 
  for (unsigned i = 0; i < limit; i++) {
    f_n = n_0 + n_1;
    n_0 = n_1; 
    n_1 = f_n;
    if (f_n % 2 == 0) {
      sum += f_n; 
    } 
  }
  return sum;
}

int main(int argv, char** argc) {
  cout << fibonacciEvenSum_N << endl; 
  return 0;
}

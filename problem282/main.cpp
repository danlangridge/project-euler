#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


// Naive ackermanFunction
int ackermanFunction(int m, int n) {
  if (m == 0) return n + 1; 
  else if (n == 0) return ackermanFunction(m-1,n);
  else return ackermanFunction(m - 1, ackermanFunction(m, n - 1));  
}

int ackermanSum(int limit) {
  int sum = 0;
  for (unsigned i = 0; i < limit; i++) {
    sum += ackermanFunction(i,i);
  }
  return sum;
}

int main(int argv, char** argc) { 
  
  cout << ackermanSum(6) % 14^6;

  return 0;
}

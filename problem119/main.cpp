#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool guaranteedPrimeTest_Improved(int i) {
  if (n <= 3 && n >= 1) return true;
  if ( n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i < sqrt(n) + 1; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  } 
  return true;
}

int digitSum(int num) {
  int digit = log10(num);
  stringstream ss;
  ss << num;
  string numb = ss.c_str(); 
  int sum = 0; 
  for ( unsigned i = 0; i < digit; i++) {
    sum += numb[i]; 
  }
  return sum;
}

int sequence(int n, int limit) {
  int a = 0;

  for (unsigned i =0; i < limit; i++) {
    if ( guaranteedPrimeTest_Improved(i) {
      int sum = digitSum;
      for (unsigned j = 0; sum^j < i + 1; j++) {
        if (sum^j == i) a++;
        if (a == n -1) return i; 
      } 
    }
  } 

} 



int main(int argv, char** argc) { 
  cout << squence(5, 1000); 
  return 0;
}

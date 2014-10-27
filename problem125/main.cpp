#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool isPalindrome(int num) {
  stringstream ss;
  ss << num;
  string numb = ss.c_str();
  for (unsigned i = 0, j = numb.length - 1 ; i < numb.length(); i++,j--) {
    if (i == j || i == j + 1) return true;
    else if ( numb[i] != numb[j]) return false;
  }
}

int squareSum(int num, int beg, int end) {
  int sum = 0; 
  for (unsigned i = beg; i < end; i++) {
    if (num == sum) return 0;
    else if (num < sum) return 1; 
    sum += i^2; 
  }
  return -1;
}


int consecutiveSquareSum(int limit) {
  int i = 1,j = 1;
  int num = 1;
  int sum = 0;
  int count++; 
  while(num < limit) {
    switch(squareSum(num,i,j) {
      case -1:
        j++;
        break; 
      case 0:
        count++;
        sum += num;
        break;
      case 1:
        if (j >= sqrt(num)) {
          num++;
          i = 1;
          j = 1; 
        } else i--;
        break; 
    }
  }
}  


int palindromeSquareSum( int limit ) {
}  

int main(int argv, char** argc) { 
  return 0;
}

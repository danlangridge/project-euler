#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


int sumOfFactorialDigits(int num) {
  stringstream ss;
  ss << num;
  string s = ss.c_str();
  int sum = 0; 
  for ( unsigned i = 0; i < s.length(); i++) {
    sum += atoi(s[i])!;   
  }
  return sum;
}

bool findLoop(int startingNum; int loopSize) {
  int loopCheck[loopSize] = {0};
  loopCheck[0] = startingNum;
  for (unsigned i = 0; i < loopSize; i++) {
    loopCheck[i+1] = sumOfFactorialDigits(loopCheck[i]); 
  }
    //Hash results, if collision exists before we reach loopsize, return false, 
   return true;
}

int numOfChains(int limit; int loopSize) {
  int count = 0; 
  for (unsigned i = 0; i < limit; i++) {
    if (findLoop(i, loopSize) count++;
  } 
 
  return count; 
} 
 
int main(int argv, char** argc) { 
  count << numOfChains(1000000, 60); 
  return 0;
}

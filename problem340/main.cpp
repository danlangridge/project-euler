#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int crazyFunction(int a, int b, int c, int n) {
  if (n > b) return n - c;
  else if (n <= b) return crazyFunction(a,b,c,crazyFunction(a,b,c,crazyFunction(a,b,c,crazyFunction(a,b,c,n+a))));
}


int main(int argv, char** argc) {
  crazyFunction(50,2000,40,10);
  return 0;
}

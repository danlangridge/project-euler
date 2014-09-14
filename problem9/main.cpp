#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


int[] pythagoreanTriplet(int limit) {
  unsigned a,b,c = 0;
  for ( ; ;a++ ) {
    for ( ;c ; b++) { 
      c = sqrt(a^2+b^2);
      if (a+b+c == limit) {
        int triplet[3] = {0};
        triplet[0] = a;
        triplet[1] = b;
        triplet[2] = c;
      } else if (a+b+c > limit) break; 
  }
  return NULL; 
}


int main(int argv, char** argc) { 
  pythagoreanTriplet(1000); 
  return 0;
}

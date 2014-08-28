#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;


void nextIteration(unsigned valueArray[], unsigned initialValue) {
  valueArray[0]--;
  valueArray[1] = initialValue - valueArray[0];
  for (unsigned i = 2; i < initialValue; i++) {
    valueArray[i] = 0; 
  }
  return; 
}

unsigned numberOfSummationsRec_Naive(unsigned index, unsigned valueArray[], unsigned initialValue) {
  unsigned curValue = valueArray[index];
  unsigned nextValue = valueArray[index+1];
  unsigned counter = 1;
  if (curValue == 1) {
    nextIteration(valueArray, initialValue); 
  }
  if ( curValue == nextValue + 1) {
    if (index == 0) return counter;
    return numberOfSummationsRec_Native(index + 1, valueArray,initialValue);
  }
}

unsigned numberOfSummations_Naive(unsigned value) {
  if (value == 1) return 1;
  
  if (value > 1) 
  unsigned sum_array = new unsigned[value - 1];
  unsigned  sum_array[0] = value;
  unsigned counter = 0;
  for (unsigned* initial_value = sum_array[0]; initial_value == 1; ) {
    //for (unsigned 
  }

  
}

int main(int argv, char** argc) {
  
  return 0;
}

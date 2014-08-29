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

unsigned currentIterationRec_Naive(unsigned index, unsigned valueArray[], unsigned initialValue) {
  unsigned counter = 0;
  if (valueArray[index] == 1) { 
    nextIteration(valueArray, initialValue); 
    return ++counter;
  }
  else if (valueArray[index] == valueArray[index + 1] + 1) return currentIterationRec_Naive(index + 1, valueArray, initialValue);  
  else {
    valueArray[index] -= 1;
    valueArray[index + 1] += 1;
  }
  return currentIterationRec_Naive(index, valueArray, initialValue);  
}

unsigned numberOfSummationsRec_Naive(unsigned index, unsigned valueArray[], unsigned initialValue) {
  unsigned counter = 0; 
  while (valueArray[0] > valueArray[1])
    counter += currentIterationRec_Native(0,valueArray,intiialValue); 
  }
  return counter;
}

unsigned numberOfSummations_Naive(unsigned value) {
  if (value == 1) return 1;
  
  if (value > 1) 
  unsigned sum_array = new unsigned[value - 1];
  unsigned  sum_array[0] = value;
  unsigned counter = 0;
  for (unsigned* initial_value = sum_array[0]; initial_value == 1; ) {
  } 
}

int main(int argv, char** argc) {
  
  return 0;
}

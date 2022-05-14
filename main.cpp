#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string.h>

#include "Sort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {
  QuickSort quicksort;
  BubbleSort bubblesort;
  RecursiveBinarySearch recursivebinarysearch; 

  int input;
  vector<int> inputVector;

  for (int i = 0; i < 8; i++) {
    cin >> input;
    inputVector.push_back(input);
  }

  inputVector = quicksort.sort(inputVector);
  bool inList = recursivebinarysearch.search(inputVector, 1);

  cout << (inList ? "true" : "false") << " ";

  for (int i = 0; i < inputVector.size(); i++) {
    cout << inputVector.at(i) << " ";
  }
}
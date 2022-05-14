#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include <sstream>

#include "Sort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {
  QuickSort quicksort;
  RecursiveBinarySearch recursivebinarysearch; 

  string input;
  vector<int> inputVector;
  int x = 0;

  // for (int i = 0; i < 0; i++) {
  //   cin >> input;
  //   inputVector.push_back(input);
  // }

  // Input code from Shadow on https://stackoverflow.com/questions/26270724/input-unknown-number-of-variables-in-one-linein-c
  getline(cin, input);
  stringstream ss(input);
  while (ss >> x) {
    inputVector.push_back(x);
  }

  inputVector = quicksort.sort(inputVector);
  bool inList = recursivebinarysearch.search(inputVector, 1);

  cout << (inList ? "true" : "false") << " ";

  for (int i = 0; i < inputVector.size(); i++) {
    cout << inputVector.at(i) << " ";
  }
}
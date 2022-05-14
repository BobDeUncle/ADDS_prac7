#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Sort.h"
#include "QuickSort.h"
#include "BubbleSort.h"

using namespace std;

int main() {
  QuickSort quicksort;
  BubbleSort bubblesort;
  static const int arr[] = { 3, 2, 5, 6, 8, 7, 1 };
  vector<int> values (arr, arr + sizeof(arr) / sizeof(arr[0]));

  vector<int> testQuick = quicksort.sort(values);

  for (int i = 0; i < testQuick.size(); i++) {
    cout << testQuick.at(i) << ' '; 
  }
  cout << endl;

  vector<int> testBubble = bubblesort.sort(values);

  for (int i = 0; i < testBubble.size(); i++) {
    cout << testBubble.at(i) << ' '; 
  }
  cout << endl;
}
#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
  std::vector<int> left;
  std::vector<int> right;
  std::vector<int> output;

  if (list.size() <= 1) {
    return list;
  } else {
    int pivotIndex = 0;
    if (list.size() >= 3) {
      pivotIndex = 2;
    }

    int pivot = list.at(pivotIndex);
    list.erase(list.begin() + pivotIndex);

    for (int i = 0; i < list.size(); i++) {
      if (list.at(i) <= pivot) {
        left.push_back(list.at(i));
      } else {
        right.push_back(list.at(i));
      }
    }
    left = sort(left);
    right = sort(right);
      
    for (int i = 0; i < left.size(); i++) {
      output.push_back(left.at(i));
    }
    output.push_back(pivot);
    for (int i = 0; i < right.size(); i++) {
      output.push_back(right.at(i));
    }
    return output;
  }
}
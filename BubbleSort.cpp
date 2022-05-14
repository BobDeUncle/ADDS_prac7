#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
  bool isSorted = false;
  for (int i = 0; i < list.size() - 1; i++) {
    isSorted = true;
    for (int j = 0; j < list.size() - i - 1; j++) {
      if (list.at(j) > list.at(j+1)) {
        std::swap(list.at(j), list.at(j+1));
        isSorted = false;
      }
    }
    if (isSorted) break;
  }
  return list;
}
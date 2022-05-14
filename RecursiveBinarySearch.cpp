#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> vector, int target) {
  if (recursiveBinarySearch(vector, target, 0, vector.size() - 1) == -1) {
    return false;
  } else {
    return true;
  }
};

int RecursiveBinarySearch::recursiveBinarySearch(std::vector<int> vector, int target, int startPoint, int endPoint) {
  int midPoint = (startPoint + endPoint) / 2; 
  if (vector.at(midPoint) == target) {
    return midPoint;
  } else if (startPoint == endPoint) {
    return -1;
  } else if (vector.at(midPoint) < target) {
    return recursiveBinarySearch(vector, target, midPoint + 1, endPoint);
  } else {
    return recursiveBinarySearch(vector, target, startPoint, midPoint - 1);
  }
};
#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
  public: 
    bool search(std::vector<int> vector, int target);
  private: 
    int recursiveBinarySearch(std::vector<int> vector, int target, int startPoint, int endPoint);
};

#endif
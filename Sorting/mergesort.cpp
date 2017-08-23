#include <iostream>
#include <list>


void merge(std::list<int> &l1, std::list<int> &l2) 
{
  auto iter = l1.begin();

  while(iter != l1.end() and !l2.empty()) 
  {
    if (*iter < *l2.begin()) ++iter;
    else l1.splice(iter, l2, l2.begin(), ++l2.begin());
  }

  l1.splice(l1.end(), l2);
}

void mergeSort(std::list<int> &l1) 
{
  auto middle = l1.begin();
  std::advance(middle, std::distance(l1.begin(), l1.end())/2);
  std::list<int> l2;
  l2.splice(l2.begin(), l1, middle, l1.end());
  if (l1.size() > 1) mergeSort(l1);
  if (l2.size() > 1) mergeSort(l2);

  merge(l1, l2);
}

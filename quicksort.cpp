#include <iostream>
#include <list>

using namespace std;

void quickSort(std::list<int> &list) 
{
  // pick the pivot element
  const auto pivot = list.begin();
  // iterate through the rest of the list
  for (auto i = next(pivot); i != list.end(); ++i) 
  {
    // if the element is < of pivot, shift it before pivot
  	if(*i < *pivot) list.splice(pivot, list, i, next(i));
  }
  
  // we have now 3 lists, the left one,
  // the one with just pivot inside and the right one
  
  std::list<int> rightList;
  std::list<int> pivotList;
  
  rightList.splice(rightList.begin(), list, next(pivot), list.end());
  
  pivotList.splice(pivotList.begin(), list, pivot, next(pivot));

  // if left or right are > 1, apply quicksort
  if (list.size() > 1) quickSort(list);
  if (rightList.size() > 1) quickSort(rightList);

  // merge the 2 lists back
  list.splice(list.end(), pivotList);
  list.splice(list.end(), rightList);
}

/*
int main(int argc, char const *argv[]) 
{
  std::list<int> list = {4, 5, 2, 3, 0, 1, 7};
  quickSort(list);
  for(auto a: list) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
  return 0;
}*/

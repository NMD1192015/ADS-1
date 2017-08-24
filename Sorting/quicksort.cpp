#include <list>
#include "sorting.hh"

using namespace std;

void ads::quicksort(std::list<int> &list) {
    // pick the pivot element
    const auto pivot = list.begin();
    // iterate through the rest of the list
    for (auto i = next(pivot); i != list.end(); ++i) {
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
    if (list.size() > 1) quicksort(list);
    if (rightList.size() > 1) quicksort(rightList);

    // merge the 2 lists back
    list.splice(list.end(), pivotList);
    list.splice(list.end(), rightList);
}

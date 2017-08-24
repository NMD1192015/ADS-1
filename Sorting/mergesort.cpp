#include <list>
#include "sorting.hh"

void merge(std::list<int> &l1, std::list<int> &l2) {
    auto iter = l1.begin();

    // Put in l1 the elements of l2 in order until
    // one of the two lists is empty
    while(iter != l1.end() and !l2.empty()) {
        if (*iter < *l2.begin()) ++iter;
        else l1.splice(iter, l2, l2.begin(), ++l2.begin());
    }

    // Append the remaning elements of l2 if any
    l1.splice(l1.end(), l2);
}

void mergesort(std::list<int> &l1) {
    // Let's pick the middle element
    auto middle = l1.begin();
    std::advance(middle, std::distance(l1.begin(), l1.end())/2);

    // Split the list in half
    std::list<int> l2;
    l2.splice(l2.begin(), l1, middle, l1.end());

    // Repeat until base case if found
    if (l1.size() > 1) mergesort(l1);
    if (l2.size() > 1) mergesort(l2);

    merge(l1, l2);
}

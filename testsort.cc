#include <iostream>
#include <list>
#include <tuple>
#include <string>

#include "sorting.hh"

using namespace std;
using namespace ads;

bool test(list<int> list, tuple<string, void (*)(std::list<int>&)> pair) {
    auto title = get<0>(pair);
    auto sort = get<1>(pair);

    cout << "- Testing: " << title << " --- ";

    auto verifiedList = list;
    verifiedList.sort();
    sort(list);

    if (verifiedList != list) {
        cout << "FAIL" << endl;
        return false;
    }

    cout << "OK" << endl;

    return true;
}

void fakeSort(list<int>& list) {}

int main(int argc, char const *argv[]) {
    list<int> numberList = {4, 5, 2, 3, 0, 1, 7};
    list<tuple<string, void (*)(std::list<int>&)>> sortList;

    sortList.emplace_back("bubblesort", bubblesort);
    sortList.emplace_back("quicksort", quicksort);
    sortList.emplace_back("insertsort", insertsort);
    sortList.emplace_back("mergesort", mergesort);
    sortList.emplace_back("fakesort", fakeSort);

    for(auto& val: sortList) {
        if (!test(numberList, val)) break;
    }

    return 0;
}

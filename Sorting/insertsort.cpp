#include <list>

// NOTE: using swap for this algorithm is unefficent
// but more clean for mental clarity

void insertSort(std::list<int> &list)  {
	// Iterate from the second element onward
	for(auto i = next(list.begin()); i != list.end(); ++i) {
		// From i, iterate backward
		for(auto j = i; j != list.begin() and *prev(j) > *j; --j) {
			// Pull down the lowest entry
			std::swap(*prev(j), *j);
		}
	}
}

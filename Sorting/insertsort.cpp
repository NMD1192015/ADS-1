#include <list>

void insertSort(std::list<int> &list)  {
	for(auto i = next(list.begin()); i != list.end(); ++i) {
		for(auto j = i; j != list.begin() and *prev(j) > *j; --j) {
			std::swap(*prev(j), *j);
		}
	}
}

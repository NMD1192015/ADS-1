#include <list>

void bubble_sort(std::list<int>& list) {
	bool flag_swap = true;

	while (flag_swap) {
		flag_swap = false;

		for(auto i = list.begin(); i != list.end(); ++i) {
			if (*i > *next(i)) { //FIXME: possible out of bound check!
				flag_swap = true;
				std::swap(*i, *next(i));
			}
		}
	}
}

#include <iostream>
#include <numeric>
#include <list>

#include "sorting.hh"

using namespace std;
using namespace ads;

void bigspace() {
	cout << endl << endl << endl;
}

void print_list(list<int>& List) {
	for(auto& val: List) {
		cout << val << " ";
	}
	cout << endl;
}

int main() {

	int choice;

	std::list<int> List(10);
	std::iota(List.begin(), List.end(), 0);
	List.reverse();

	std::cout<<"-- Unsorted vector --" << std::endl << std::endl;
	print_list(List);

	bigspace();

	std::cout<<" 1. Insertion_Sort		2. Bubble_Sort		3. Merge_Sort" << std::endl;
	std::cout<<" 4. Quick_Sort" << std::endl;
	std::cout<<">>> "; std::cin>>choice;

	switch (choice) {
		case 1 : {insertsort(List); print_list(List); break;}
		case 2 : {bubblesort(List); print_list(List); break;}
		case 3 : {mergesort (List); print_list(List); break;}
		case 4 : {quicksort (List); print_list(List); break;}
	}

	return 0;
}

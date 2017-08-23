#include <iostream>
#include <list>

void insertSort(std::list<int> &list) 
{
	for(auto i = next(list.begin()); i != list.end(); ++i) 
	{
		for(auto j = i; j != list.begin() and *prev(j) > *j; --j) 
		{
     	 		
     	 		std::swap(*prev(j), *j);
    	
    		}
  	}
}
/*
int main(int argc, char const *argv[]) 
{
  std::list<int> array = {4, 5, 2, 3, 0, 1};
  insertSort(array);
  for(auto a: array) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
  return 0;
}*/

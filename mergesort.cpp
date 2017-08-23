#include <iostream>
#include <list>

/*
void divide(
  std::vector<int> &array,
  const std::vector<int>::iterator begin,
  const std::vector<int>::iterator end
) {
  auto temp = begin;
  std::advance(temp, std::distance(begin, end)/2);
  const auto middle = temp;
  //std::cout << std::distance(middle, end) << std::endl;
  //std::cout << *middle << std::endl;

  std::cout << "dividing: ";
  for (auto i = begin; i != middle; i++) {
    std::cout << *i << " ";
  }
  std::cout << "from ";
  for (auto i = middle; i != end; i++) {
    std::cout << *i << " ";
  }
  std::cout << std::endl;

  if(std::distance(begin, middle) > 1) divide(array, begin, middle);
  if(std::distance(middle, end) > 1) divide(array, middle, end);

  std::cout << "merging: ";
  for (auto i = begin; i != middle; i++) {
    std::cout << *i << " ";
  }
  std::cout << "and ";
  for (auto i = middle; i != end; i++) {
    std::cout << *i << " ";
  }
  std::cout << std::endl;

  std::vector<int> buffer;

  auto b1 = begin;
  auto b2 = middle;
  while (b1 != middle and b2 != end) {
    auto& val = (*b1 < *b2) ? b1 : b2;
    //std::cout << "chosen " << *val << std::endl;
    buffer.push_back(*val);
    ++val;
  }

  while (b1 != middle) {
    buffer.push_back(*b1);
    ++b1;
  }

  while (b2 != end) {
    buffer.push_back(*b2);
    ++b2;
  }

  std::cout << "merged: ";
  for (auto i : buffer) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  for(auto i = begin, j = buffer.begin(); i != end; ++i, ++j) {
    *i = *j;
  }
}

void mergeSort(std::vector<int> &array) {
  divide(array, array.begin(), array.end());

  //std::cout << *middle << std::endl;
}*/

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
/*
int main(int argc, char const *argv[]) {
  std::list<int> list = {4, 5, 2, 3, 0, 1, 7};
  mergeSort(list);
  for(auto a: list) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
  return 0;
}*/

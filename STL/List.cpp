#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
int main() {
  std::list<int> l = {1, 2, 2, 3, 4, 5};
  l.push_back(6);
  l.push_front(0);
  // First way of printing
  std::copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // adding new line
  // Second way of printing
  std::list<int>::iterator it{l.begin()};
  for (; it != l.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl; // adding new line
  // Third way of printing
  for (auto it : l) {
    std::cout << it << " ";
  }
  std::cout << std::endl; // adding new line
  std::cout << "Front : " << l.front() << std::endl;
  std::cout << "Back : " << l.back() << std::endl;
  l.remove(2); // remove all occurences of 2 in the list
  l.erase(l.begin());
  std::copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // adding new line
  it = l.begin();
  it++;
  l.erase(it, l.end());
  std::copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // adding new line
  l.assign(10, 2);
  std::copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // adding new line
  l.clear();
  std::list<int> l1{1, 2, 2, 2, 3};
  std::list<int> l2{0, 4, 5, 6};
  l1.unique();
  // l1.reverse();
  // l1.sort(std::greater<int>());
  l1.merge(l2); // l2 is cleared after merging
  std::copy(l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  return 0;
}
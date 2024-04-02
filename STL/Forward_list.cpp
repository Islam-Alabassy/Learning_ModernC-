#include <forward_list>
#include <iostream>
#include <iterator>

bool func(int n) { return n > 5; }
int main() {
  std::forward_list<int> fl;
  fl.assign(5, 7);
  fl.push_front(6);
  for (int &i : fl) {
    std::cout << i << " ";
  }
  std::cout << std::endl; // Adding new line
  fl.pop_front();         // pop the first element
  std::copy(fl.begin(), fl.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // Adding new line
  fl.emplace_front(5);
  fl.insert_after(fl.begin(), 6);
  fl.insert_after(fl.before_begin(), {1, 2, 3, 4});
  std::copy(fl.begin(), fl.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // Adding new line
  auto f = next(fl.begin(), 5);
  std::cout << *f << std::endl;
  // fl.remove_if(func); // remove all numbers which are greater than 5
  fl.remove_if([](int n) {
    return n > 5;
  }); // remove all numbers which are greater than 5
  std::copy(fl.begin(), fl.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // Adding new line

  std::forward_list<int> f1{10, 20, 30, 40, 50};
  std::forward_list<int> f2{60, 70, 80, 90, 100};
  // f1.splice_after(f1.before_begin(), f2);
  f1.merge(f2);
  f1.sort(std::greater<int>()); // sort list in descending order
  std::copy(f1.begin(), f1.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl; // Adding new line

  f1.clear();
  f2.clear();
  fl.clear();
  return 0;
}
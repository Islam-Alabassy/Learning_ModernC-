#include <algorithm>
#include <iostream>
#include <set>
/*
    set :
    1) Is associative container
    2) Is ordered container
    3) No duplicate element
    4) It is implemented as a tree structure
    5) No Random Acceess
    6) Can not modify elements of the set
*/
int main() {
  std::set<int> s{1, 4, 3, 5, 8, 2};
  std::set<int, std::greater<int>> s1{1, 4, 3, 5, 8, 2};
  if (!s.empty()) {
    s.insert(6);
    s.emplace(10); // the same as insert
                   /* To remove range of vslues */
    // auto rit = s.find(8);
    auto lower_it = s.lower_bound(8);
    auto upper_it = s.upper_bound(10);
    s.erase(lower_it, upper_it);
    // s.erase(3);
    for (int i : s) {
      std::cout << i << std::endl;
    }
  }
  /*
    C++ set key_comp() function is used to return a copy of the comparison
    object which is used by the set container to compare keys. The comparison
    object can be used to compare key values of two elements in a container
  */
  //  std::set<int>::key_compare com = s.key_comp();
  auto com = s.key_comp();
  int c{4};
  auto it1 = s.begin();
  for (; com(*it1, c); ++it1) {
    std::cout << *it1 << " ";
  }
  std::cout << std::endl;
  auto i = s.find(2);
  if (i != s.end()) {
    std::cout << "Found  " << std::endl;
  } else {
    std::cout << "Not Found" << std::endl;
  }
  s.clear();
  std::set<std::string> names;
  std::set<std::string>::iterator it{names.begin()};
  names.emplace_hint(it, "Islam");      // O(1)
  it = names.emplace_hint(it, "Ahmed"); // O(1)
  auto pti = names.emplace("Abassy");   // pti -> pair iterator
  std::cout << "First : " << *pti.first << "  Second : " << std::boolalpha
            << pti.second << std::endl;
  names.emplace_hint(it, "Eman"); // O(1)

  for (auto i : names) {
    std::cout << i << std::endl;
  }

  return 0;
}
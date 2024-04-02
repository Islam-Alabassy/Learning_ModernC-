#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
//----------------------------------------------------------------
// Functions Prototypes
void print_vector(std::vector<int> &vector);
void print_reverse_vector(std::vector<int> &vector);
//----------------------------------------------------------------

int main() {
  std::vector<int> v(10); // (size) or (size, default_value)
  v.resize(4);
  v.shrink_to_fit();
  v[0] = 1;
  v.push_back(50); // you can use emplace_back() instead of push_back()
  std::cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4]
            << " " << v[5] << std::endl; // v.at(0) == v[0]
  v.insert(v.begin() + 1, 12); // you can use emplase() instead of insert()
  v.insert(v.end(), 4);        // you can use emplase() instead of insert()
  v.erase(v.begin() + 2, v.begin() + 5);
  print_vector(v);
  std::sort(v.begin(), v.end());
  print_vector(v);
  std::reverse(v.begin(), v.end());
  print_vector(v);
  print_reverse_vector(v);
  std::cout << "The minimum value is : "
            << *std::min_element(v.begin(), v.end()) << std::endl;
  std::cout << "The maximum value is : "
            << *std::max_element(v.begin(), v.end()) << std::endl;
  auto pair = std::minmax_element(v.begin(), v.end());
  std::cout << "The minimum value is : " << *pair.first << std::endl;
  std::cout << "The maximum value is : " << *pair.second << std::endl;
  // find_if(v.begin(), v.end(),condition)
  std::copy(v.begin(), v.end(),
            std::ostream_iterator<int>(std::cout,
                                       " ")); // another way to print the vector
  std::cout << std::endl;

  /*
  To print the first and last elements of the vector
  */
  std::cout << v.front() << " " << v.back() << std::endl;
  std::vector<int> v1(v); // Calling the copy constructor
  v1.erase(v1.begin(), v1.end());
  // Another way to read data from the user direct to the vector.
  std::copy(std::istream_iterator<int>(std::cin), std::istream_iterator<int>(),
            std::back_inserter(v1));
  print_vector(v1);
  std::cout << "Size of vector " << v.size() << "  Capacity " << v.capacity()
            << std::endl;
  std::cout << "Max_size " << v.max_size() << std::endl;
  std::cout << "Is Empty : " << std::boolalpha << v.empty() << std::endl;

  std::vector<int>::iterator it = v.begin();
  std::cout << *it << std::endl;
  it = v.end() - 1; //-1 because the end of the vector refers to the address
                    // after the last element
  std::cout << *it << std::endl;
  v.clear();
  v1.clear();
  return 0;
}
void print_vector(std::vector<int> &vector) {
  //   std::vector<int>::const_iterator it =
  //       vector.begin(); // = auto it = vector.begin();
  //   for (; it != vector.end(); ++it) {
  //     std::cout << *it << " ";
  //   }
  for (auto it : vector) {
    std::cout << it << " ";
  }
  std::cout << std::endl;
}
void print_reverse_vector(std::vector<int> &vector) {
  std::vector<int>::reverse_iterator it = vector.rbegin();
  for (; it != vector.rend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}
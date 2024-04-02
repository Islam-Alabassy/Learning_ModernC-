#include <deque>
#include <iostream>
/*
    Deque is very similar to vectors, except that it allows inserting elements
   into front and back at O(1)
*/
int main() {
  std::deque<char> d = {'r', 'o', 'g', 'r', 'a', 'm', 'm', 'e'};
  d.push_back('r');
  d.push_front('P');
  // First way to print deque elments
  std::deque<char>::iterator it = d.begin();
  for (; it != d.end(); ++it) {
    std::cout << *it;
  }
  std::cout << std::endl;
  // Second way to print deque elments
  for (auto i : d) {
    std::cout << i;
  }
  std::cout << std::endl;

  d.clear();
  return 0;
}
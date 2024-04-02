/* Looping over vector */
// Vector example
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> myVector{1, 2, 3, 4, 5};
void printVector() {
  for (int i = 0; i < myVector.size(); i++) {
    std::cout << myVector[i];
  }
  std::cout << std::endl;
}
int main() {
  printVector();
  myVector.pop_back(); // pop the last element from the vector
  printVector();
  myVector.push_back(6); // push the last element
  printVector();
  myVector.erase(myVector.begin() + 1); // erase the element at the index 1
  printVector();
  myVector.insert(myVector.begin() + 3,
                  8); // insert the element at the fourth position
  printVector();
  return 0;
}
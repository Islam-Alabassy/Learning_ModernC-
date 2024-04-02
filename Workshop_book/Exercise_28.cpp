/* Pointer to array */
#include <iostream>
#include <string>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *ptr = &arr[2];
  std::cout << *ptr << std::endl;
  std::cout << ptr[1] << std::endl;
  std::cout << ptr[2] << std::endl;
  std::cout << "( ptr == arr[2] ) = " << std::boolalpha << (ptr == &arr[2])
            << std::endl;
  return 0;
}
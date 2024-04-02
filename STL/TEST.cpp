#include <iostream>

int add(int a, int b) {
  std::cout << "Int version \n";
  return a + b;
}
double add(double a, double b) {
  std::cout << "Double version \n";
  return a + b;
}

// entry point
int main() {
  char arr[10] = "hello";
  arr[0] = 'I';
  for (auto i : arr) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::string str = "hello";
  str[0] = 'I';
  std::cout << str << std::endl;
  std::cout << add(1, 1);
  std::cout << add(1.0, 1.0);
  // std::cout << add(1 , 1.0);
  return 0;
}
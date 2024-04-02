/* Prime number checker */
#include <iostream>
#include <string>

bool is_prime(int number);
int main() {
  int numberToCheck{0};
  std::cout << "Prime number checker" << std::endl;
  std::cout << "Enter number to check : ";
  std::cin >> numberToCheck;
  if (is_prime(numberToCheck)) {
    std::cout << numberToCheck << " is prime" << std::endl;
  } else {
    std::cout << numberToCheck << " is not prime" << std::endl;
  }
  return 0;
}
bool is_prime(int number) {
  if (number <= 1)
    return false;
  for (int i = 2; i <= number / 2; ++i)
    if (number % i == 0)
      return false;
  return true;
}
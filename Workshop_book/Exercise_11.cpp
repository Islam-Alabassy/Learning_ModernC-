/*This app is to generate random numbers*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
  bool bIsRunning = true;
  std::string input{};
  int number{};
  std::cout << "*** Random number generator ***" << std::endl;
  while (bIsRunning) {
    std::cout << "Enter amount of numbers to generate,or 0 to exit .. "
              << std::endl;
    getline(std::cin, input);
    number = std::stoi(input);
    if (number == 0) {
      break;
    }
    // Generate and output random numbers
    srand((unsigned)time(0));
    for (int i = 0; i < number; i++) {
      std::cout << rand() % 10;
      if (i == number - 1) {
        continue;
      }
      std::cout << ", ";
    }
    std::cout << std::endl;
  }
  return 0;
}
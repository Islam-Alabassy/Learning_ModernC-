/* the user will input a number and the app  will check  if the number is 10,
greater than 10 or less than 10
*/
#include <cstdint>
#include <iostream>
#include <string>

int main() {
  int number;
  std::string input;
  std::cout << "Please enter a number : " << std::endl;
  getline(std::cin, input);
  number = std::stoi(input);
  if (number < 10) {
    std::cout << "The number you have entered is less than 10." << std::endl;
  } else if (number > 10) {
    std::cout << "The number you have entered is greater than 10." << std::endl;
  } else {
    std::cout << "The number you have entered is 10 !! " << std::endl;
  }
  return 0;
}
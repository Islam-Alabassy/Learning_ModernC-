/* The Time Of Day Calculator */
#include <iostream>
#include <string>

int main() {
  std::cout << "***Time of Day Calculator***\n";
  std::cout << "Enter time in military format."
               "eg.(1800, 1430)\n\n ";
  std::cout << "Enter time: ";
  std::string input;
  getline(std::cin, input);
  int time = std::stoi(input);
  if (time < 0000 || time > 2400) {
    std::cout << "Invalid time.";
    return 0;
  }
  if (time == 0) {
    std::cout << "It's currently midnight." << std::endl;
  } else if (time == 1200) {
    std::cout << "It's currently noon." << std::endl;
  } else if (time >= 600 && time < 1200) {
    std::cout << "It's currently morning." << std::endl;
  } else if (time > 1200 && time <= 1700) {
    std::cout << "It's currently afternoon." << std::endl;
  } else if (time > 1700 && time <= 2000) {
    std::cout << "It's currently evening." << std::endl;
  } else if (time > 2000 || time < 600) {
    std::cout << "It's currently night." << std::endl;
  }
  return 0;
}
/* Activity 3 : Sign-Up Application */
#include <iostream>
#include <string>
#include <vector>

int main() {
  bool bIsRunning = true;
  int option;
  struct record {
    std::string name;
    int age;
  };
  std::vector<record> records;
  std::cout << "User Sign-Up Application " << std::endl;
  while (bIsRunning) {

    std::cout
        << "Please select an option : \n 1. Add Recoed.\n 2. Fetch record. "
           "\n 3. Quit\n";
    std::cout << "Enter option : ";
    std::cin >> option;
    switch (option) {
    case 1: {
      record newRecord;
      std::cout << "Please enter your name and age : " << std::endl;
      std::cout << "Enter name : ";
      std::cin >> newRecord.name;
      std::cout << "Enter age : ";
      std::cin >> newRecord.age;
      records.push_back(newRecord);
      break;
    }
    case 2: {
      std::cout << "Please enter User ID : " << std::endl;
      std::cout << "User ID : ";
      int id{};
      std::cin >> id;
      if (id < records.size()) {
        std::cout << "Name : " << records[id].name << std::endl;
        std::cout << "Age : " << records[id].age << std::endl;
      }
      break;
    }
    case 3: {
      bIsRunning = false;
      break;
    }
    default: {
      std::cout << "Invalid option" << std::endl;
      break;
    }
    }
  }
  return 0;
}
#include <array>
#include <iostream>
enum class options { FRIES = 1, BURGER = 2, EXIT = 3 };
// CONSTANT EXPRESSIONS
constexpr options DEFAULT_OPTION = options::FRIES;
constexpr int FRIES_PRICE = 1;
constexpr int BURGER_PRICE = 2;
// OPERATOR OVERLOADING
std::istream &operator>>(std::istream &in, options &op) {
  int int_op{};
  in >> int_op;
  // int --> options conversion
  op = static_cast<options>(int_op);
  return in;
}
std::string to_string(const options &op) {

  switch (op) {
  case options::FRIES:
    return "1. FRIES";
    break;
  case options::BURGER:
    return "2. BURGER";
  case options::EXIT:
    return "3. EXIT";
  default:
    return "unknown";
    break;
  }
  return "";
}
class Menu {
  std::array<options, 3> option{options::FRIES, options::BURGER, options::EXIT};

public:
  void print() {
    std::cout << "Menue option: " << std::endl;
    // std::cout << "1. Fries" << std::endl;
    // std::cout << "2. Burger" << std::endl;
    // std::cout << "3. Exit" << std::endl;
    for (auto op : option) {
      std::cout << to_string(op) << std::endl;
    }
    std::cout << "Enter your option: ";
  }
};

options user_select() {
  options op = DEFAULT_OPTION;
  std::cin >> op;
  return op;
}
// MAIN FUNCTION
int main() {
  std::cout << "****Welcome to the Menu Manager****" << std::endl;
  bool isRunning = true;
  Menu new_menu;
  int total_salary_in_dollar{};
  while (isRunning) {
    new_menu.print();
    options op = user_select();
    switch (op) {
    case options::FRIES:
      std::cout << "Fries Salary " << std::to_string(FRIES_PRICE) << " $"
                << std::endl;
      total_salary_in_dollar += FRIES_PRICE;
      break;
    case options::BURGER:
      std::cout << "Burger Salary " << std::to_string(BURGER_PRICE) << " $"
                << std::endl;
      total_salary_in_dollar += BURGER_PRICE;
      break;
    case options::EXIT:
      isRunning = false;
      break;
    default:
      std::cout << "Invalid option" << std::endl;
      break;
    }
  }
  int total_salary_in_EG{};
  total_salary_in_EG = total_salary_in_dollar * 50;
  if (total_salary_in_EG > 100) {
    total_salary_in_EG = total_salary_in_EG - (total_salary_in_EG * 0.1);
  }
  std::cout << "Total Salary: " << std::to_string(total_salary_in_EG) << " EG"
            << std::endl;
  return 0;
}
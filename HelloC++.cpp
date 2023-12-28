/* Header Files */
#include <array>
#include <cstdint>  // contains fixed size datatypes (uint8_t)
#include <iostream> //output data screen ---> dependences
#include <string>
// C++ Core-guidlines
// 1) Always Init variables and objects;

/*
Function :
          1.Do specific tssk
          2.Determine parameters data types
          3.Determine Performance (time mewasurement , ...)
          4.Determine return type
*/
/*
Operators :
          Actions take on datatypes
Actions   :
          1.Built-in Actions
          2.User-defined Actions
*/

/******* Operator Overloading *******/
/*

+ operator ---> Like Function
          Input : two operands
          Output : sum of two values
*/
struct Number {
  uint32_t number;
};
uint32_t operator+(Number a, Number b) {
  std::cout << "Operaotr Overloaded ..." << std::endl;
  return a.number + b.number;
}
// Function signature : add_uint32_t_a_uint32_t_b.
uint64_t add(uint32_t a, uint32_t b) { return a + b; }
// Function Overloading :
// Function with the same name but different signature

/* Main function ---> starting point */
int main() {
  bool is_true = true;
  // BAD init
  int x = 10; // direct/copy
  // 1. create int ====> 10
  // 2. create int ====> x
  // 3. copy 1 --> 2 ==>copy operation

  // BEST init
  int y{10}; // uniform
  // 1. create variable ---> x
  // 2. init x -----> 10

  uint8_t z{}; // 0 ---> 255

  uint32_t age{0};
  std::cout << "Please enter your age : " << std::endl;
  std::cin >> age;
  std::cout << "Your age is -->  " << age << std::endl;

  /*
   *Define array --> 10 int
   *loop through array
   *for each element ---> print
   */
  std::array<int, 10> arr{};
  size_t i{};
  // For loop
  for (i = 0; i < 10; i++) {
    std::cout << arr[i] << std::endl;
  }
  // For : Range based loop.
  for (size_t i : arr) {
    std::cout << arr[i] << std::endl;
  }

  /** Code to test operator overloading **/
  Number a{20};
  Number b{40};
  uint32_t result{};
  result = a + b;
  std::cout << result << std::endl;
  return EXIT_SUCCESS;
}
// Modifiers ---->
// unsigned
// signed
// short
// long
// long long
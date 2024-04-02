/* operator overloading */
#include <iostream>
#include <string>
struct person {
  std::string name{};
  int age{};
  person(std::string name, int age) : name(name), age(age) {}
  bool operator==(person const &P) { return (name == P.name && age == P.age); }
};
int main() {
  person p1("islam", 25);
  person p2("islam", 25);
  std::cout << (p1 == p2) << std::endl;
  return 0;
}
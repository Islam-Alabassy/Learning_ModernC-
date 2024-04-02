#include <iostream>
#include <vector>
/*
    pair stores two data types with two values
*/
int main() {
  std::pair<int, std::string> p{1, "islam"};
  std::cout << p.first << " " << p.second << std::endl;
  std::pair<std::string, std::pair<int, double>> emp;
  emp.first = "ahmed";
  emp.second.first = 25;
  emp.second.second = 6000;
  std::vector<std::pair<int, std::string>> vp; // vector of pairs
  vp.push_back(p);
  vp.push_back({2, "ahmed"});
  std::cout << vp.size() << std::endl;
  // printing the vector elements
  for (auto v : vp) {
    std::cout << v.first << " " << v.second << std::endl;
  }
  return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  int arrays_number{};
  int queries_number{};
  string input;
  cin >> input;
  arrays_number = stoi(input);
  cin >> input;
  queries_number = stoi(input);
  vector<vector<int>> myVector(arrays_number);
  int k{};

  for (int i = 0; i < arrays_number; i++) {
    cin >> input;
    k = stoi(input);
    vector<int> temp(k);
    for (int j = 0; j < k; j++) {
      cin >> temp[j];
    }
    myVector[i] = temp;
  }
  int l{}, m{};
  for (int i = 0; i < queries_number; i++) {
    cin >> l >> m;
    cout << myVector[l][m] << endl;
  }
  return 0;
}
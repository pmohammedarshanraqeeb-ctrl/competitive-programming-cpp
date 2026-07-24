#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  vector<string> carbrands;
  carbrands.assign(cars.begin(), cars.end());

  for (const string& brand : carbrands) {
    cout << brand << "\n";
  }

  return 0;
}
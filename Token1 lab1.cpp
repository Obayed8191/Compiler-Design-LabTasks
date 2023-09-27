#include <iostream>

using namespace std;

int main() {
  string num;
  cout << "Enter a value: ";
  cin >> num;
  bool Numeric = true;
  for (char c : num) {
    if (c < '0' || c > '9') {
      Numeric = false;
      break;
    }
  }

  if (Numeric) {
    cout<<num<< " Is Numeric" << endl;
  } else {
    cout<<num<< " Is Not Numeric" << endl;
  }

  return 0;
}

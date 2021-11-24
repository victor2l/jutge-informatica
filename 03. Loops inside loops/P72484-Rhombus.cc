#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) { // escriu les n primeres files
    for (int j = n - i; j > 0; --j)
      cout << ' ';
    for (int k = 1; k < 2 * i; ++k)
      cout << '*';
    cout << endl;
  }
  for (int i = 1; i < n; ++i) { // escriu les n-1 files restants
    for (int j = 0; j < i; ++j)
      cout << ' ';
    for (int k = 2 * n - 1; k > 2 * i; --k)
      cout << '*';
    cout << endl;
  }
}

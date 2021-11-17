#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x; // n = nombre d'elements. x = cada element.
  cin >> n;
  vector<int> v(1001, 0); // Vector v de 1001 elements inicialitzats a zero.
  for (int i = 0; i < n; ++i) {
    cin >> x;
    x = x - 1000000000;
    v[x] = 1 + v[x];
  }
  for (int i = 0; i < 1001; ++i)
    if (v[i] > 0)
      cout << 1000000000 + i << " : " << v[i] << endl;
}

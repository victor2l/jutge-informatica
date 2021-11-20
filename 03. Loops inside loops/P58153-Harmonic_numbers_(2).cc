#include <iomanip> // Per poder utilitzar el setprecision(10)
#include <iostream>
using namespace std;

int main() {
  int n, m; // Pre: n >= m
  while ((cin >> n) and (cin >> m)) { // Llegeix els dos enters
    double x = 0; // Serà el resultat
    for (int i = m + 1; i <= n; ++i)
      x += 1.0 / i; // Sumatori des de i = m + 1 fins a i = n de 1 / i
    cout << fixed << setprecision(10) << x << endl;
  }
}

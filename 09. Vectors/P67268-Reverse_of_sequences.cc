#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int k = 0; k < n; k++) cin >> v[k];
        if (n > 0) cout << v[n - 1]; // Imprimeix l'últim element (si existeix).
        for (int i = n - 2; i >= 0; --i) cout << " " << v[i]; // Imprimeix la resta, en ordre invers.
        cout << endl;
    }
}

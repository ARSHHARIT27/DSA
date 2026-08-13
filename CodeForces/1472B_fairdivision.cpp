#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int ones = 0;
        int twos = 0;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 1) {
                ones++;
            } else {
                twos++;
            }
            sum += a;
        }
        if (sum % 2 != 0) {
            cout << "NO\n";
        } else {
            int half = sum / 2;
            if (half % 2 != 0 && ones == 0) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        // Find the spy/unique element
        if (a[0] != a[1] && a[0] != a[2]) {
            cout << 1 << "\n";
        } else if (a[1] != a[0] && a[1] != a[2]) {
            cout << 2 << "\n";
        } else {
            for (int j = 2; j < n; j++) {
                if (a[j] != a[0]) {
                    cout << j + 1 << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}

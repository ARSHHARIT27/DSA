#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    if (cin >> s1 >> s2) {
        string result = "";
        
        for (size_t i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                result += '1';
            } else {
                result += '0';
            }
        }
        cout << result << "\n";
    }

    return 0;
}
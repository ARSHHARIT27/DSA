#include <iostream>
#include <string>
#include <unordered_map> // Added missing header

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    if (cin >> c) {
        while (c--) {
            int n;
            cin>>n;
            string s;
            cin >> s;
            string t;
            cin >> t;

            // FIX: If lengths differ, they can never be anagrams
            if (s.length() != t.length()) {
                cout << "NO\n";
                continue;
            }

            unordered_map<char, int> mp;
            unordered_map<char, int> mt;

            for (int i = 0; i < s.length(); i++) {
                mp[s[i]]++;
            }
            for (int i = 0; i < t.length(); i++) {
                mt[t[i]]++;
            }

            int a = 1;
            for (auto const& p : mp) {
                if (mt[p.first] != p.second) {
                    cout << "NO\n";
                    a = 0;
                    break;
                }
            }
            if (a == 1) {
                cout << "YES\n";
            }
        }
    }
    return 0;
}

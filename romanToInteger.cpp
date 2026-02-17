#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> mp = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (i + 1 < n && mp[s[i]] < mp[s[i + 1]]) {
            total -= mp[s[i]];
        } else {
            total += mp[s[i]];
        }
    }

    return total;
}

int main() {
    string s;
    cin >> s;   

    cout << romanToInt(s) << endl;

    return 0;
}
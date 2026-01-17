#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    int count[26] = {0};

    for (char c : s) {
        count[c - 'a']++;
    }

    for (char c : t) {
        count[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (isAnagram(s, t))
        cout << "true";
    else
        cout << "false";

    return 0;
}

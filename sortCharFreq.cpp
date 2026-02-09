#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    vector<vector<char>> buckets(s.size() + 1);
    for (auto &p : freq) {
        buckets[p.second].push_back(p.first);
    }

    string res;
    res.reserve(s.size());

    for (int count = buckets.size() - 1; count > 0; count--) {
        for (char c : buckets[count]) {
            res.append(count, c);
        }
    }

    return res;
}

int main() {
    string s;
    cin >> s;   

    cout << frequencySort(s) << endl;

    return 0;
}

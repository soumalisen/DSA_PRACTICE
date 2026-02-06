#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length())
        return false;

    string doubled = s + s;
    return doubled.find(goal) != string::npos;
}

int main() {
    string s, goal;
    cin >> s >> goal;

    if (rotateString(s, goal))
        cout << "true";
    else
        cout << "false";

    return 0;
}

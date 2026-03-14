#include <iostream>
#include <string>
using namespace std;
char findTheDifference(string s, string t) {
    char result = 0;
    for (char c : s) {
        result ^= c;
    }
    for (char c : t) {
        result ^= c;
    }
    return result;
}
int main(){
  string s, t;
  cin >> s >> t;
  cout << findTheDifference(s, t) << endl;
  return 0;
}
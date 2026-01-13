#include <iostream>
#include <string>
#include <cctype>
using namespace std;

    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while ( start < end ){
            while ( start < end && !isalnum(s[start])){
                start++;
            }
            while ( start < end && !isalnum(s[end])){
                end--;
            }
            if (tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        

        
    }
    return true;
    
}

int main(){
  string s;
  cout << "enter string : ";
  getline(cin,s);
  if (isPalindrome(s)){
    cout<<"Palindrome";
  } else {
    cout << "not palindrome";
  }
}
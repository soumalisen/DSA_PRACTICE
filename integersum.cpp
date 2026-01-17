#include <iostream>
using namespace std;


int getSum(int a, int b) {
    while (b != 0) {
        
        int sum = a ^ b;

        
        int carry = (a & b) << 1;


        a = sum;
        b = carry;
    }
    return a;  
}

int main() {
    int a, b;
    

    cout << "Enter two integers: ";
    cin >> a >> b;

    
    cout << "Sum: " << getSum(a, b) << endl;

    return 0;
}

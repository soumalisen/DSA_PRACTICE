#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 0, 1};   
    int n = 3;               

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int expected = n * (n + 1) / 2;
    cout << expected - sum;

    return 0;
}

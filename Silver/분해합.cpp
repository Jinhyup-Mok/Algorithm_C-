#include <iostream>
using namespace std;

int main() {
    int n;
    int num = 0;
    cin >> n;
    for(int i=1; i<n; i++) {
        int sum = i;
        int x = i;
        while(x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum == n) {
            num = sum;
            cout << i << endl;
            break;
        }
    }
    if(num == 0) {
        cout << "0" << endl;
    }
}
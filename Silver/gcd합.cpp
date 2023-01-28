#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        int n;
        cin >> n;

        int num[n];
        for(int j=0; j<n; j++) {
            cin >> num[j];
        }

        long sum = 0;

        for(int j=0; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                sum += gcd(num[j], num[k]);
            }
        }
        cout << sum << "\n";
    }
}
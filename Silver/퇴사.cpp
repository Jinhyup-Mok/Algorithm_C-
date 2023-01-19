#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[16] = {};
    int t[16] = {};
    int p[16] = {};
    
    for(int i=1; i<= n; i++) {
        cin >> t[i] >> p[i];
    }
    
    // for(int i=1; i<=n; i++) {
    //     cout << in;
    //     int index = 1;
        
    //     while(i - t[index] >= 0) {
    //         dp[i] = dp[i-1] + p[index];
    //         n = n - t[index];
    //         index = index + t[index];
            
    //     }
    // }
    cout << dp[n] << "\n";

}
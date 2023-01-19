#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long dp[n+1];
    dp[1] = dp[2] = 1;

    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << "\n";
}
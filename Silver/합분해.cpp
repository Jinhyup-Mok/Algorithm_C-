#include <iostream>
#define mod 1000000000
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int x[201] = {};
    int y[201] = {};
    int dp[n+1][k+1] = {};
    
    for(int i=1; i<=n; i++) {
        dp[i][1] = 1;
    }
    for(int i=1; i<=k; i++) {
        dp[0][i] = 1;
    }

    for(int i=1; i<=n; i++) {
        for(int j=2; j<=k; j++) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
            dp[i][j] = dp[i][j] % mod;
        }
    }
    cout << dp[n][k] << "\n";
}
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n+1] = {};
    int dp[n+1] = {};

    for(int i=1; i<=n; i++) {
        cin >> p[i];
    }

    dp[1] = p[1];

    for(int i=2; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            dp[i] = max(dp[i], dp[i-j] + p[j]);
        }
    }
    // dp[n] : dp배열의 n은 카드 개수를 의미하기도 한다!
    // 최대 4장 : dp[2] + p[2] -> 2장 + 2장 짜리 카드팩을 의미! 
    // dp[4] = dp[2] + p[2] = 2장일 때 최대이므로 4장을 산다고 했을때 (2장일때 최대) + (2장)
    // dp[4] = dp[3] + p[1] = (3장일때 최대) + (1장:p[1])
    cout << dp[n] << "\n";
}
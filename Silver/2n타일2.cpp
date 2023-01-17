#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;  
    int dp[1001];

    dp[1] = 1;
    dp[2] = 3;

    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + 2*dp[i-2];
        dp[i] = dp[i] % 10007; // 미리 나눠줘야 숫자 크기 감당 가능
        
    }
    cout << dp[n] << "\n";
}
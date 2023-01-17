// dp 중요문제!
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int num[n+1];
    for(int i=1; i<=n; i++) {
        cin >> num[i];
    }
    int dp[n+1] = {};
    dp[1] = num[1]; // 6
    dp[2] = num[1] + num[2]; // 16

    // i번째 잔까지 와인을 마시는 경우의 수
    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1]; // n번째 잔을 마시지 않는 경우, ex) 3 -> 1,2번째 잔을 마심
        dp[i] = max(dp[i], dp[i-2] + num[i]); // 1번 경우 or n-2.n번째 잔을 마시는 경우, ex) 3-> (1,2) or (1,3)
        dp[i] = max(dp[i], dp[i-3] + num[i-1] + num[i]);// 1번 경우 or n-1,n번째 잔을 마시는 경우 -> n-2번째 잔은 마시면 안됨 -> dp[n-3] + num[n-1] + num[n];
        // ex) (1,2),(1,3)중에 큰거 or (2,3) -> 1번째 잔은 마시면안됨(3잔연속 불가 규칙)
        // 3가지 경우로 와인을 마시는 경우의 수를 나눈다!
    }
    cout << dp[n] << "\n";
}
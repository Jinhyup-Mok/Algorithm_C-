#include <iostream>
#define X 1000000000

using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[n+1][10] = {};
    
    for(int i=1; i<10; i++) {
        dp[1][i] = 1; //0은 제외 !
    }

    for(int i=2; i<=n; i++) {
        // dp[i][0] = dp[i-1][1];  0번째 수는 [0-1] + [0+1]이 아니라 [0+1] 만 헤당됨.
        // dp[i][10] = 0; 9번째 수 -> [0-1] + [0+1] 이 아니라 [0-11]이므로 성립
        for(int j=0; j<10; j++) {
            if(j == 0) { // 0값 계산 ! -> 1의 계산을 위해서
                dp[i][j] = dp[i-1][j+1];
            } else if(j == 9) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]; // 결정적 알고리즘 dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
            }
            dp[i][j] = dp[i][j] % X;
        }
    }
    int result = 0;
    for(int i=0; i<10; i++) {
        result = (result + dp[n][i]) % X;
    }
    cout << result << "\n";    
}
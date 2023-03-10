#include <iostream>
#include <algorithm>
#define MAX 100001

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int dp[2][MAX];
		dp[0][0] = dp[1][0] = 0;
		for (int i = 1; i <= n; i++) {
			cin >> dp[0][i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> dp[1][i];
		}

		// 점화식
        // dp[0][i] : 위쪽에서 시작 -> dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + arr[0][i]; -> 각 대각선들에는 해당 루트의 진행 동안의 값의 누적합이 저장됨
        // dp[1][i] : 아래쪽에서 시작 -> dp[1][i] = max(dp[0][i-1],dp[0][i-2]) + arr[1][i];
        // 대각선 루트의 경우가 두가지
        // 50 -> 50 -> 100 or 30 -> 100 따라서 해당 i에 따른 dp값은 해당 루트 진행 동안의 누적합

		for (int i = 2; i <= n; i++) {
			dp[0][i] = max(dp[1][i-1],dp[1][i-2])+dp[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i-2])+ dp[1][i];
		}
		int answer = max(dp[1][n], dp[0][n]);
		cout << answer << '\n';
	}
}
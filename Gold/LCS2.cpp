#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int dp[1001][1001];
string lcs[1001][1001]; 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;

    int a_size = a.length();
    int b_size = b.length();

    for(int i = 1; i <= a_size; i++) {
        for (int j = 1; j <= b_size; j++){
            if (a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                lcs[i][j] = lcs[i-1][j-1] + a[i-1];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                if(lcs[i-1][j].length() > lcs[i][j-1].length()) {
                    lcs[i][j] = lcs[i-1][j];
                } else {
                    lcs[i][j] = lcs[i][j-1];
                }
            }
        }
    }
    if(dp[a_size][b_size] != 0) {
        cout << dp[a_size][b_size] << "\n" << lcs[a_size][b_size] << "\n";
    } else {
        cout << 0 << "\n";
    }
}
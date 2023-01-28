#include <iostream>
using namespace std;
int main() {

    int na, ma;
    cin >> na >> ma;
    int a[na][ma] = {};

    for(int i=0; i<na; i++) {
        for(int j=0; j<ma; j++) {
            cin >> a[i][j];
        }
    }

    int nb, mb;
    cin >> nb >> mb;
    int b[nb][mb] = {};

    
    for(int i=0; i<nb; i++) {
        for(int j=0; j<mb; j++) {
            cin >> b[i][j];
        }
    }

    int ans[mb][na] = {};
    int k = 0;

    while(k < mb) {
        for(int i=0; i<na; i++) {
            for(int j=0; j<ma; j++) {
                ans[k][i] += a[i][j] * b[j][k];
            }
        }
        k++;
    }

    for(int i=0; i<na; i++) {
        for(int j=0; j<mb; j++) {
            cout << ans[j][i] << " ";
        }
        cout << "\n";
    }
}
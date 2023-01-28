#include <iostream>
using namespace std;

// 유클리드 호재법 - GCD
// gcd(a, b) == gcd(b, a % b(나머지)) 이고
// 만역 재귀호출 중 gcd(b, 0) : a를 b로 나눈 나머지가 0일때의 a위치의 값이 a와 b의 최대공약수이다.

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    int r[t];

    for(int i=0; i<t; i++) {
        cin >> r[i];
    }

    for(int i=1; i<t; i++) {
        int n = gcd(r[0], r[i]);
        cout << r[0] / n << "/" << r[i] / n << "\n";
    }
}
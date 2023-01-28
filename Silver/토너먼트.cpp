#include <iostream>
#include <cmath>

using namespace std;

// int main() {
// 	int n;
// 	double a, b;
// 	cin >> n >> a >> b;
	
// 	int cnt = 0;

// 	while(a != b){
// 		a = ceil(a/2); // 올림 함수
// 		b = ceil(b/2);
// 		cnt++;
// 	}
// 	cout << cnt << "\n";
// }
int main() {
    int n;
    int a, b;
    cin >> n >> a >> b;

    int cnt = 0;

    while(a != b) {
        a = (a+1)/2;
        b = (b+1)/2;
        cnt++;
    }
    cout << cnt << "\n";
}
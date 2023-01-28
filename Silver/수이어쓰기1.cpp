#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i=1; i<=n; i*=10) {
        sum += n - i + 1;
        // n - 1 + 1 : 1의 자리를 갖고 있는 수의 개수 (ex 120 -> 0 : 1의자리수)
        // n - 10 + 1 : 10의 자리를 갖고 있는 수의 개수 (ex 120  -> 2 : 10의 자리수)
        // n - 100 + 1 : 100의 자리를 갖고 있는 수의 개수 (ex 120 -> 1 : 100의 자리수)
    }
    cout << sum << "\n";
}
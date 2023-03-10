#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int pakage[m];
    int single[m];
    long price = 0;

    for(int i=0; i<m; i++) {
        cin >> pakage[i] >> single[i];
    }
    sort(pakage, pakage+m); // <algorithm> 헤더 정렬함수 : sort(배열의 포인터, 배열의 포인터 + 배열의 크기)
    sort(single, single+m);

    // 입력 받은 값들을 오름차순으로 정렬 -> 가장 저렴한 가격끼리 <pakage vs single> -> min함수이용하여 최소값 출력
    if(n > 6) { // 끊어진 기타줄이 6보다 클때
        while(n > 6) {
            n = n - 6; // n = 6까지 계속 6씩 차감
            price += min(pakage[0], single[0]*6); // 차감하면서 6개줄의 가격이 싼것을 price에 더해줌 (패키지(6개) vs 싱글*6개)
        }
        price += min(pakage[0], single[0]*n); // n <= 6일때 min(패키지 vs 싱글*남은기타줄)

    } else {
        price += min(pakage[0], single[0]*n); // n <= 6일때 패키지 vs 싱글*n
    }
    cout << price << "\n";
}
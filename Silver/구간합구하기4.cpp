#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    // 시간 단축
    // ios::sync_with_stdio(0)는 c의 stdio와 cpp의 iostream을 동기화 시켜준다. 문제는 iostream과 stdio의 버퍼를 모두 사용하기 때문에 딜레이가 발생한다. 
    // 따라서 이러한 동기화를 비활성화 시켜주기 위해 ios::sync_with_stdio(0)으로 선언해준다.
    // cin.tie(0)는 cin과 cout의 묶음을 풀어준다. 따라서 순서가 사라진다. 알고리즘을 풀때는 화면에 바로 보이는 것이 중요하지 않기 때문에 
    // cin과 cout의 묶음을 풀어주어 더 빠르게 만들 수 있다. 결과 따로 배열에 저장할필요없이 계산된 결과값을 한번에 보여준다.
    
    int n, m;
    cin >> n >> m;

    vector<long> sum(n+1); // vector 이용! : vector<type> name(len)
    sum[0] = 0; 
    
    // int sum[n+1] = {}; 배열의 모든값 0으로 초기화, {}, {0,}, {0}
    // 값은 항상 초기화를 통해 이상한값이 삽입되지 않도록 주의!
    for(int i=1; i<n+1; i++) {
        long num;
        cin >> num;
        // 0-1,0-2,0-3 구간합 미리저장
        sum[i] = sum[i-1] + num;
    }
    int a, b;
    for(int i=0; i<m; i++) {
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << "\n";
    }
}
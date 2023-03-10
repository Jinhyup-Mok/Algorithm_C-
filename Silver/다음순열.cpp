#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int n;
    int a[10000];
    cin >> n;

    // 배열의 인덱스 주의
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    if (next_permutation(a, a + n))
    {
        // 배열의 인덱스 주의
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << "-1";
    }
    
    cout << "\n";

}
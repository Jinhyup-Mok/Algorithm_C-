#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n); //원본 벡터

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> arr_sort(arr);

    sort(arr_sort.begin(), arr_sort.end());
    arr_sort.erase(unique(arr_sort.begin(), arr_sort.end()), arr_sort.end());

    for (int i = 0; i < n; i++) {
        auto num = lower_bound(arr_sort.begin(), arr_sort.end(), arr[i]);
        cout << num - arr_sort.begin() << ' ';
    } cout << "\n";
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int arr[26] = {};
int n = 0;
int result = 0;

bool compare(int& a, int& b) {
	if (a > b)
		return true;
	else
		return false;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;

		int cnt = 1;
		for (int j = tmp.size() - 1; j >= 0; j--) {
			arr[tmp[j] - 'A'] += cnt;

			cnt *= 10;
		}
	}

	sort(arr, arr + 26, compare);
	int cnt = 9;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0)
			break;

		result += arr[i] * cnt;
		cnt--;
	}

	cout << result << endl;

	return 0;
}
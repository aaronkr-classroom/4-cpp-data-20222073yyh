#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
	vector<int> numbers;

	int x;

	while (cin >> x)
	{
		numbers.push_back(x);
	}
	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < 3; i++) {
		int idx = numbers.size() / 4 * (i + 1) - 1;

		cout << i + 1 << "번쨰 사분위 수 : " << numbers[idx] << endl;
	}
	return 0;
}

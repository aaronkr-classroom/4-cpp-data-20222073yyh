#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
	cout << "Enter all words followed by EOF: ";
	vector <string> words;
	string max = "";
	string min = "";

	string word;
	while (cin >> word) {
		words.push_back(word);
		if (min.size() == 0)min = word;
		if (max.size() == 0) max = word;

		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}

	cout << "max: " << max << endl;
	cout << "min: " << min;

	return 0;
}
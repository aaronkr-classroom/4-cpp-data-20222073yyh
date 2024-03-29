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

	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	cout << "Words: " << words.size();
	return 0;
}
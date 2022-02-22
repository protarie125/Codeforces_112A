#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b;
	cin >> a >> b;
	auto offSet = 'a' - 'A';

	auto aLen = a.length();
	for (int i = 0; i < aLen; ++i) {
		if ('A' <= a[i] && a[i] <= 'Z') {
			a[i] += offSet;
		}
	}

	auto bLen = b.length();
	for (int i = 0; i < bLen; ++i) {
		if ('A' <= b[i] && b[i] <= 'Z') {
			b[i] += offSet;
		}
	}

	if (a == b) {
		cout << 0;
	}
	else if (a < b) {
		cout << -1;
	}
	else {
		cout << 1;
	}

	return 0;
}
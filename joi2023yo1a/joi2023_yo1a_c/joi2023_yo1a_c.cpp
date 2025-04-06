#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, x = 1, count = 0;
	string s;
	cin >> n >> s;
	for (size_t i = 0; i < n; ++i)
	{
		if (s[i] == 'L'){
			if (x != 1) {
				--x;
			}
		}
		else {
			if (x != 3) {
				++x;
			}
		}
		if (x == 3) {
			++count;
		}
	}
	cout << count << "\n";
}
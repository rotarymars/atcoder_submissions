#include <iostream>
using namespace std;
using LL = long long;
string change(LL a) {
	string ans = "";
	while (a > 0)
	{
		ans.insert(ans.begin(), a % 5 + '0');
		a /= 5;
	}
	for (size_t i = 0; i < ans.size(); i++)
	{
		ans[i] = (ans[i] - '0') * 2 + '0';
	}
	if (ans != "")
	{
		return ans;
	}
	else
	{
		return "0";
	}
}

int main() {
	LL n;
	cin >> n;
	cout << change(--n) << "\n";
}
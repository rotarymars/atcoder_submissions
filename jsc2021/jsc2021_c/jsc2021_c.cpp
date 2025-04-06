#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int c = b;
	while (c--) if (b / c - (a - 1) / c >= 2){
		cout << c << endl;
		return 0;
	}
}


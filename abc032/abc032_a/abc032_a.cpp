#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = c; i < 1e9; i++) if (!(i % a) && !(i % b)) {
		cout << i << endl;
		return 0;
	}
}


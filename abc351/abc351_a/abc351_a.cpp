#include <iostream>
using namespace std;
int main(){
	int a = 0, b = 0;
	for (int i = 0; i < 9; i++) {
		int tmp; cin >> tmp;
		a += tmp;
	}
	for (int i = 0; i < 8; i++) {
		int tmp; cin >> tmp;
		b += tmp;
	}
	cout << a - b + 1 << endl;
}

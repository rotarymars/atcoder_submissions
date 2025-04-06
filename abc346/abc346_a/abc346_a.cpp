#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int back;
	cin >> back;
	for (int i=1;i<n;i++){
		int tmp;
		cin >> tmp;
		cout << (i == 1 ? "" : " ") << back * tmp;
		back = tmp;
	}
	cout << endl;
}


#include <iostream>
using namespace std;
template<class T>
T I(){
	T temp;
	cin >> temp;
	return temp;
}
int main(){
	int n;
	cin >> n;
	int back = I<int>();
	for (int i = 1; i < n; i++){
		int temp = I<int>();
		cout << back * temp << " ";
		back = temp;
	}
}


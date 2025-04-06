#include <iostream>
using namespace std;
int I(){
	int a;
	cin >> a;
	return a;
}
int main(){
	cout << (I() ^ I() ^ I()) << endl;
}

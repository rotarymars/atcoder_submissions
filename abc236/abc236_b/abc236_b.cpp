#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tmp = 4 * ((1 + n) * n / 2);
    n *= 4; n--;
    for (;n;n--){
        int a;
        cin >> a;
        tmp -= a;
    }
    cout << tmp << endl;
}
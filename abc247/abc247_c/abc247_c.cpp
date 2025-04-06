#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> f(int n){
    if (n==1){
        return vector<int>{1};
    }
    else {
        vector<int> tmp=f(n-1), m{n};
        vector<int> ret;
        ret.insert(ret.end(), tmp.begin(), tmp.end());
        ret.insert(ret.end(), m.begin(), m.end());
        ret.insert(ret.end(), tmp.begin(), tmp.end());
        return ret;
    }
}

int main(){
    int n; cin >> n;
    auto tmp=f(n);
    for (auto &i : tmp){
        cout << i << " ";
    }
}
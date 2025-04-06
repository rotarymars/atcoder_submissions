#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> ban(N);
    for (int i = 0; i < M; i++){
        int a;
        cin >> a;
        ban[a - 1]++;
    }
    if (ban[0] || ban[N - 1]){
        cout << "-1\n";
        return 0;
    }
    vector<int> p(N);
    iota(p.begin(), p.end(), 1);
    for (int i = 1; i < N - 1; i++){
        if (ban[i]) swap(p[i], p[i + 1]);
    }
    for (int i = 0; i < N; i++){
        cout << p[i] << (i == N - 1 ? "\n" : " ");
    }
}
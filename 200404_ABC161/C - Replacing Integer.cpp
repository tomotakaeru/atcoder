#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();

int main(){
    ll N, K;
    cin >> N >> K;

    if (K == 1){
        cout << 0 << endl;
        return 0;
    }

    N = N % K;
    while(N * 2 > K){  // min(N,K-N)で十分だった
        N = abs(N - K);
    }
    cout << N << endl;

    return 0;
}

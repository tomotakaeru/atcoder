#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = 1e18;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main(){
    ll A, B, N;
    cin >> A >> B >> N;

    if (N < B){
        cout << ll(A * N / B) << endl;
    } else{
        cout << ll(A * (B - 1) / B) << endl;
    }

    return 0;
}

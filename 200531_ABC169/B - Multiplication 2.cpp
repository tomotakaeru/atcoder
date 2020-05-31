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
    int N; cin >> N;
    vector<ll> A(N); REP(i, 0, N) cin >> A[i];

    REP(i, 0, N){
        if (A[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }

    ll MAX = 1000000000000000000LL;

    ll tmp = 1LL;
    REP(i, 0, N){
        if (MAX / tmp < A[i]){
            cout << -1 << endl;
            return 0;
        }
        tmp *= A[i];
    }
    cout << tmp << endl;

    return 0;
}

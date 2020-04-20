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
    vector<int> A(N); REP(i, 0, N) cin >> A[i];

    vector<ll> DP(N, INF);
    DP[0] = 0;
    REP(i, 1, N){
        if (i == 1){
            chmin(DP[i], DP[i - 1] + abs(A[i - 1] - A[i]));
        } else{
            chmin(DP[i], DP[i - 1] + abs(A[i - 1] - A[i]));
            chmin(DP[i], DP[i - 2] + abs(A[i - 2] - A[i]));
        }
    }
    cout << DP[N - 1] << endl;

    return 0;
}

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
    
    vector<int> diff(N-1);
    REP(i,0,N-1){
        diff[i] = A[i + 1] - A[i];
    }
    ll sum = 0;
    REP(i,0,N-1){
        int v = diff[i];
        if (v < 0){
            sum += -1 * v;
            if (i != N-2) diff[i + 1] += v;
        }
    }
    cout << sum << endl;

    return 0;
}

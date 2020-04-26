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
    vector<string> S(N); REP(i, 0, N) cin >> S[i];

    set<string> st;
    REP(i, 0, N){
        st.insert(S[i]);
    }
    cout << st.size() << endl;

    return 0;
}

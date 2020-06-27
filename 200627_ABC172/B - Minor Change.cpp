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
    string S,T;
    cin >> S >> T;

    string s, t;
    int cnt = 0;
    REP(i, 0, S.size()){
        s = S[i];
        t = T[i];
        if (s!=t){
            ++cnt;
        }
    }
    cout << cnt << endl;

    return 0;
}

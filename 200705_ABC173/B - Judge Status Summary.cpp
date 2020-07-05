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
    int N;
    cin >> N;
    vector<string> S(N);
    REP(i, 0, N) cin >> S[i];

    int C0 = 0, C1 = 0, C2 = 0, C3 = 0;
    for (auto s : S)
    {
        if (s=="AC")
            ++C0;
        if (s=="WA")
            ++C1;
        if (s=="TLE")
            ++C2;
        if (s=="RE")
            ++C3;
    }

    cout << "AC x " << C0 << endl;
    cout << "WA x " << C1 << endl;
    cout << "TLE x " << C2 << endl;
    cout << "RE x " << C3 << endl;

    return 0;
}

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
    ll K;
    cin >> K;

    if (K % 2 == 0){
        cout << -1 << endl;
        return 0;
    }

    if (K == 1 || K == 7){
        cout << 1 << endl;
        return 0;
    }

    ll sevens = 0;
    for (ll i = 0; i < K + 100; ++i){
        // sevens += 7 * pow(10, i);
        sevens = sevens * 10 + 7;
        sevens %= K;
        if (sevens == 0){   
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}

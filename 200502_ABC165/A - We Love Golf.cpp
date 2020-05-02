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
    int K, A, B;
    cin >> K >> A >> B;

    if (A % K == 0){
        if (A <= B){
            cout << "OK" << endl;
        } else{
            cout << "NG" << endl;
        }
    } else{
        if ((A / K + 1) * K <= B){
            cout << "OK" << endl;
        } else{
            cout << "NG" << endl;
        }
    }
    return 0;
}

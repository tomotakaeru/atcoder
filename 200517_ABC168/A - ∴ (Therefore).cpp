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

    int amari = N % 10;
    if (amari == 3){
        cout << "bon" << endl;
    } else if(amari == 0 || amari == 1 || amari == 6 || amari == 8){
        cout << "pon" << endl;
    } else{
        cout << "hon" << endl;
    }

    return 0;
}

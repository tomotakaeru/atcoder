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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int num_C0 = C / B;
    if (C%B !=0)
        ++num_C0;
    int num_A0 = A / D;
    if (A%D !=0)
        ++num_A0;
        
    if (num_A0 < num_C0){
        cout << "No" << endl;
    } else{
        cout << "Yes" << endl;
    }

    return 0;
}

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
    int H1, M1, H2, M2, K;
    cin >> H1 >> M1 >> H2 >> M2 >> K;

    int range_min = 0;
    range_min += (H2 - H1) * 60;
    if (M2 - M1 >= 0){
        range_min += M2 - M1;
    } else{
        range_min -= 60;
        range_min += M2 + 60 - M1;
    }
    range_min -= K;

    cout << range_min << endl;

    return 0;
}

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
    int N, M;
    cin >> N >> M;

    if (N % 2 == 0){
        for (int i = 1; i <= M; ++i){
            if (i <= N / 4) {
                cout << i << " " << N + 1 - i << endl;
            } else{
                cout << i << " " << N - i << endl;
            }
        }
    } else{
        REP(i, 0, M){
            cout << i + 1 << " " << N - i << endl;
        }
    }

    return 0;
}

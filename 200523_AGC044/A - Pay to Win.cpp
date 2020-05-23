#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = 1e18;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }



//ナイーブなDPでやろうとしたが，vectorの領域確保がメモリ不足でできず．つまりもっと軽いアルゴリズムを考えるべきということで数学的考察で絞るべきだった．

int main(){
    int T;
    cin >> T;
    vector<ll> N(T);
    vector<int> A(T), B(T), C(T), D(T);
    REP(i, 0, T)
        cin >> N[i] >> A[i] >> B[i] >> C[i] >> D[i];

    REP(i, 0, T){
        ll n = N[i];
        int a = A[i];
        int b = B[i];
        int c = C[i];
        int d = D[i];

        vector<ll> dp(n + 2, INF);
        dp[0] = 0;

        for (ll j = 1; j < n + 2; ++j){
            chmin(dp[j], dp[j - 1] + d); //+1
            if (j % 2 == 0){
                chmin(dp[j], dp[ll(j / 2)] + a); //*2
            }
            if (j % 3 == 0){
                chmin(dp[j], dp[ll(j / 3)] + b); //*3
            }
            if (j % 5 == 0){
                chmin(dp[j], dp[ll(j / 5)] + c); //*5
            }
            if (chmin(dp[j - 1], dp[j] + d)){  //-1
                --j; //-1で更新が入ったら，同じindexについてもう一度計算させる
            }
        }
        cout << dp[n] << endl;
    }

    return 0;
}

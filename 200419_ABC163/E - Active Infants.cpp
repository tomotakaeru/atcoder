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
    vector<pair<ll, ll>> A(2010);  // value, prev index
    int tmp;
    REP(i, 0, N){
        cin >> tmp;
        A[i] = make_pair(tmp, i);
    }

    sort(A.begin(), A.end(), greater<pair<ll, ll>>());  // 降順ソート

    vector<vector<ll>> dp(2010, vector<ll>(2010, 0));

	ll ans = 0;
    REP(l, 0, N){
        REP(r, 0, N){
 			if (l + r == N){  // 全ての幼児を右か左に移動するグループに分類し終えた場合（l+r=NはN個くらい組み合わせがあるのでansは逐次更新していく）
				chmax(ans, dp[l][r]);
                break;
			} else{
                chmax(dp[l + 1][r], dp[l][r] + A[l + r].first * (A[l + r].second - l));  // 残っている内で価値が最大の幼児を，左に移動させるグループとした場合
                chmax(dp[l][r + 1], dp[l][r] + A[l + r].first * ((N - 1 - r) - A[l + r].second));  // 残っている内で価値が最大の幼児を，右に移動させるグループとした場合
            }
		}
	}

    cout << ans << endl;

    return 0;
}

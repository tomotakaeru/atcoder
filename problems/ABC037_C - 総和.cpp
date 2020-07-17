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
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    REP(i, 0, N) cin >> a[i];

    vector<ll> sum(N+1, 0); // s[0] = 0 になる
    REP(i, 0, N) sum[i+1] = sum[i] + a[i];

    ll ans = 0;
    REP(i, 0, N - K + 1) ans += sum[i + K] - sum[i];

    cout << ans << endl;

    return 0;
}

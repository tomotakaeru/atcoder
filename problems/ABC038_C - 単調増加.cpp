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
    vector<int> a(N);
    REP(i, 0, N) cin >> a[i];

    vector<int> delta(N-1);
    REP(i, 0, N - 1) delta[i] = a[i+1] - a[i];
    
    vector<ll> continuous_cnt;
    ll cnt = 1;
    REP(i, 0, N - 1){
        if (delta[i] > 0) ++cnt;
        else{
            if (cnt > 1){
                continuous_cnt.push_back(cnt);
                cnt = 1;
            }
        }
    }
    if (cnt > 1) continuous_cnt.push_back(cnt);

    vector<ll> sum(N,1);
    REP(i, 0, N - 1) sum[i + 1] = sum[i] + (i + 2);

    ll ans = N;
    for (auto v : continuous_cnt) ans += sum[v - 2];
    cout << ans << endl;

    return 0;
}

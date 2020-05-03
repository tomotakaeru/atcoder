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
    ll N; cin >> N;
    vector<int> A(N); REP(i, 0, N) cin >> A[i];

    map<int, int> m;
    ll ans = 0;
    for (int i = N - 1; i >= 0; --i){
        ans += m[A[i] + i];  // Lの値の場所を探していって，もしRが既に登録されている場所であれば1．まだなら0が入るので，L=Rとなる時にカウントしていることになる
        ++m[i - A[i]];  // Rの値となった場所に1という痕跡を残す
    }
    cout << ans << endl;


    // map<ll, ll> A;
    // ll tmp;
    // REP(i, 0, N){
    //     cin >> tmp;
    //     A[tmp] = i;
    // }

    // int cnt = 0;
    // for (auto const& [k, v] : A){
    //     if (k > 2e5 - 2){
    //         break;
    //     }
    //     ++cnt;
    // }
    // A.erase(begin(A) + cnt, end(A));

    // REP(i, 0, A.size() - 1){
    //     int h_0 = A.at(i);
    //     REP(j, i + 1, A.size() - 1){
    //         if (h + A.at(j) == 
    //     }
    // }

    

    return 0;
}

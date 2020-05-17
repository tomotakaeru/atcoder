#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = 1e18;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


// このコードはTLEだけど，解説見て思いつくの無理だと思いました．
int main(){
    int N; cin >> N;
    vector<ll> A(N), B(N); REP(i, 0, N) cin >> A[i] >> B[i];

    vector<int> bad(N, 0);
    REP(i, 0, N){
        REP(j, i + 1, N){
            if (A[i] * A[j] + B[i] * B[j] == 0){
                bad[i] |= (1 << j);
                bad[j] |= (1 << i);
            }
        }
    }

    ll cnt = 0;
    REP(bit, 1, (1<<N)){
        bool ok_flag = true;
        REP(i, 0, N){
            if ((bit & (1<<i)) != 0){  // indexが組み合わせの中に含まれる
                if ((bit & bad[i]) != 0){  // 悪い組み合わせが入ってしまっている
                    ok_flag = false;
                    break;
                }
            }
        }

        if (ok_flag){
            ++cnt;
        }
    }
    if (cnt > 1000000007){
        cnt %= 1000000007;
    }
    cout << cnt << endl;

    return 0;
}

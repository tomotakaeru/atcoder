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
    string S;
    cin >> S;

    ll Prev[2019], Next[2019];
    Prev[0] = 1;
    ll ans = 0;
    ll now = 0;
    REP(i, 0, S.size()){
        REP(j, 0, 2019) Next[j] = 0;
        now *= 10;
        now += (int)(S[i] - '0');
        now %= 2019;
        REP(j, 0, 2019) Next[j * 10 % 2019] += Prev[j];
        ans += Next[now];
        ++Next[now];
        swap(Prev, Next);
    }
    cout << ans << endl;

    // int N = S.size();
    // int res = 0;
    // int cnt = 0;
    // REP(i, 0, N - 3){
    //     REP(j, i + 3, N){
    //         if (j == i + 3){
    //             res = stoi(S.substr(i, j - i + 1)) % 2019;
    //         } else{
    //             res = (res * 10 + (S[j] - '0')) % 2019;
    //         }
    //         // cout <<S.substr(i, j - i + 1)<< ","<< res << endl;

    //         if (res == 0){
    //             ++cnt;
    //             if (S[j + 1] != '0'){
    //                 if (j + 3 < N){
    //                     res = stoi(S.substr(j + 1, 3));
    //                     j += 3;
    //                 } else{
    //                     break;
    //                 }
    //             } else{
    //                 ++cnt;
    //                 ++j;
    //             }
    //         }
    //     }
    // }

    // REP(i, 0, N - 3){
    //     REP(j, i + 3, N){
    //         if (j == i + 3){
    //             tmp = stoi(S.substr(i, j - i + 1)) % 2019;
    //         } else{
    //             tmp = (tmp * 10 + (S[j] - '0')) % 2019;
    //         }
    //         if (tmp == 0){
    //             ++cnt;
    //         }
    //     }
    // }
    // cout << cnt << endl;

    return 0;
}

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<ll>::max();


int main(){
    int N;
    string S;
    cin >> N >> S;

    ll R_cnt = 0, G_cnt = 0, B_cnt = 0;  // 掛け算結果を代入する変数をllにしてても，掛けられる数たちがintならオーバーフローしうるから全部llにしないといけなかった
    REP(i, 0, N){
        if (S[i] == 'R')
            ++R_cnt;
        else if (S[i] == 'G')
            ++G_cnt;
        else 
            ++B_cnt;
    }

    ll sum = R_cnt * G_cnt * B_cnt;

    char i_str, j_str, k_str;
    REP(i, 0, N - 2){
        i_str = S[i];
        REP(width, 1, (N - 1 - i) / 2 + 1) {
            j_str = S[i + width];
            k_str = S[i + width + width];
            if (i_str != j_str && i_str != k_str && j_str != k_str)
                --sum;
        }
    }

    cout << sum << endl;

    return 0;
}

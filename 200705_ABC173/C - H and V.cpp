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
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> C(H);
    REP(i, 0, H){
        cin >> C[i];
    }
    int upper_cnt = 0;
    REP(i, 0, H){
        REP(j, 0, W){
            if (C[i][j] == '#') ++upper_cnt;
        }
    }

    if (upper_cnt < K){
        cout << 0 << endl;
        return 0;
    }

    int case_cnt = 0;
    REP(Hbit, 0, (1 << H)){
        REP(Wbit, 0, (1 << W)){
            int black_cnt = 0;
            REP(i, 0, H){
                if (!(Hbit & (1 << i))){
                    REP(j, 0, W){
                        if (!(Wbit & (1 << j))){
                            if (C[i][j] == '#')
                                ++black_cnt;
                        }
                    }
                }
            }
            
            if (black_cnt == K){
                ++case_cnt;
            }
        }
    }
    cout << case_cnt << endl;
    return 0;
}

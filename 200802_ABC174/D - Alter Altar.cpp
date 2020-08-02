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
    string c; cin >> c;

    bool found_first_W = false;
    int index = -1;
    int R_right_cnt = 0;
    int W_left_cnt = 0;
    for (int i = N - 1; i >= 0; --i){
        if (!found_first_W){
            if (c[i]=='W'){
                index = i;
                found_first_W = true;
                ++W_left_cnt;
            } else{
                ++R_right_cnt;
            }
        } else{
            if (c[i]=='W'){
                ++W_left_cnt;
            }
        }
    }

    if (index == -1){
        cout << 0 << endl;
        return 0;
    }
    if (W_left_cnt <= R_right_cnt){
        cout << W_left_cnt << endl;
        return 0;
    }

    int ans = R_right_cnt;
    bool found_first_R = false;
    bool found_second_W = false;
    int R_right_cnt_new = 0;
    int W_left_cnt_new = 0;
    int cnt_tmp = 0;
    do {
        // swap R and W
        cnt_tmp = 0;
        for (int i = N - 1; i >= 0; --i){
            if (c[i]=='R'){
                c[i] = 'W';
                ++cnt_tmp;
            }
            if (cnt_tmp == R_right_cnt)
                break;
        }
        cnt_tmp = 0;
        for (int i = 0; i < N; ++i){
            if (c[i]=='W'){
                c[i] = 'R';
                ++cnt_tmp;
            }
            if (cnt_tmp == R_right_cnt)
                break;
        }

        for (int i = N - 1; i >= 0; --i){
            if (!found_first_R){
                if (c[i]=='R'){
                    found_first_R = true;
                    ++R_right_cnt_new;
                }
            } else{
                if (!found_second_W){
                    if (c[i]=='W'){
                        found_second_W = true;
                        ++W_left_cnt_new;
                    } else{
                        ++R_right_cnt_new;
                    }
                } else{
                    if (c[i]=='W'){
                        ++W_left_cnt_new;
                    }
                }
            }
        }

        if (W_left_cnt_new <= R_right_cnt_new){
            ans += W_left_cnt_new;
        } else{
            ans += R_right_cnt_new;
        }

        R_right_cnt = R_right_cnt_new;
        found_first_R = false;
        found_second_W = false;
        R_right_cnt_new = 0;
        W_left_cnt_new = 0;
    } while (W_left_cnt_new > R_right_cnt_new);

    cout << ans << endl;

    return 0;
}

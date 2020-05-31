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
    ll N;
    cin >> N;

    if (N == 1){
        cout << 0 << endl;
        return 0;
    } else if (N == 2){
        cout << 1 << endl;
        return 0;
    } else if (N == 3){
        cout << 1 << endl;
        return 0;
    }
    bool sosu_flag = true;
    REP(i, 2, ll(sqrt(N))+1){
        if (N % i == 0 && N != i){
            sosu_flag = false;
            break;
        }
    }
    if (sosu_flag){
        cout << 1 << endl;
        return 0;
    }


    set<ll> sosu;

    bool sosu_pow_flag = true;
    int j;
    REP(i, 2, ll(sqrt(N)) + 1){
        sosu_pow_flag = true;
        REP(k, 2, ll(sqrt(i))+1){
            if (i % k == 0 && i != k){
                sosu_pow_flag = false;
                break;
            }
        }

        if (sosu_pow_flag){
            j = 1;
            while (pow(i, j) < N + 1){
                sosu.insert(pow(i, j));
                ++j;
            }
        }
    }

    int cnt = 0;
    for (auto itr = sosu.begin(); itr != sosu.end(); ++itr){
        if (N % *itr == 0){
            N /= *itr;
            ++cnt;
            if (N == 1 || N <= *itr){
                cout << cnt << endl;
                return 0;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}

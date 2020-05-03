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
    ll X;
    cin >> X;

    auto calc = [&](ll a) {
        return a * a * a * a * a;
    };
    REP(a, -200, 201){
        REP(b, -200, 201){
            ll aa = calc(a), bb = calc(b);
            if (aa - bb == X){
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }

    // int divisor = 1;
    // for (ll i = 2; i < ll(X / 2); ++i){
    //     if (X % i == 0){
    //         divisor = i;
    //         break;
    //     }
    // }
    // REP(i, 0, 1e9){
    //     if (pow(i + divisor, 5) - pow(i, 5) == X){
    //         cout << i + divisor << " " << i << endl;
    //         break;
    //     }
    //     if (i < divisor){
    //         if (pow(-1 - i + divisor, 5) - pow(-1 - i, 5) == X){
    //             cout << -1 - i + divisor << " " << -1 - i << endl;
    //             break;
    //         }
    //     }
    // }

    return 0;
}

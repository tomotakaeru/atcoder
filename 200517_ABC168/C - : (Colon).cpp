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
    int A, B, H, M;
    cin >> A >> B >> H >> M;

    double omega_h = 2 * M_PI / (12 * 60);  //[rad/min]
    double omega_m = 2 * M_PI / (1 * 60);  //[rad/min]
    double theta_h = omega_h * (60 * H + M);
    while (theta_h >= 2 * M_PI){
        theta_h -= 2 * M_PI;
    }
    double theta_m = omega_m * (60 * H + M);
    while (theta_m >= 2 * M_PI){
        theta_m -= 2 * M_PI;
    }

    cout << setprecision(15) << sqrt(A * A + B * B - 2 * A * B * cos(theta_h - theta_m)) << endl;

    return 0;
}

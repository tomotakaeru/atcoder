#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<ll>::max();
const double PI = 3.14159265;

int main(){
    double R;
    cin >> R;

    cout << fixed << setprecision(10);
    cout << 2 * PI * R << endl;

    return 0;
}

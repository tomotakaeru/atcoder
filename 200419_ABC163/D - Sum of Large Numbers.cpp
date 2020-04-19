#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(long long i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<ll>::max();

int main(){
    ll N, K;
    cin >> N >> K;

    ll sum = 0;
    REP(i, K, N + 2){
        sum += i * ((N - i + 1) + N) / 2 - i * (0 + (i - 1)) / 2 + 1;
    }
    cout << sum % int(7 + 1e9) << endl;

    return 0;
}

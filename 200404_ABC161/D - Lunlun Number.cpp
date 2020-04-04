#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();

int main(){
    int K;
    cin >> K;

    queue<ll> q;
    REP(i, 1, 10) q.push(i);

    ll tmp;
    REP(i, 0, K){
        tmp = q.front();
        q.pop();
        if (tmp % 10 != 0) q.push(10 * tmp + tmp % 10 - 1);
        q.push(10 * tmp + tmp % 10);
        if (tmp % 10 != 9) q.push(10 * tmp + tmp % 10 + 1);
    }
    cout << tmp << endl;

    return 0;
}

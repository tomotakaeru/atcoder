#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();

int main(){
    int N;
    cin >> N;

    ll sum = 0;
    REP(i, 1, N+1){
        if (i %3 != 0 && i %5 != 0){
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}

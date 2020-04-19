#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<ll>::max();

int main(){
    int N, M;
    vector<int> A(M);
    cin >> N >> M;
    REP(i, 0, M) cin >> A[i];

    int sum = 0;
    REP(i, 0, M){
        sum += A[i];
    }
    
    if (sum>N){
        cout << -1 << endl;
    } else{
        cout << N - sum << endl;
    }

    return 0;
}

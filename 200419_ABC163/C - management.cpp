#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<ll>::max();

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    A[0] = 0;
    REP(i, 1, N) cin >> A[i];
    
    vector<int> boss(N);
    REP(i, 1, N){
        ++boss[A[i] - 1];
    }

    REP(i, 0, N){
        cout << boss[i] << endl;
    }
    
    return 0;
}

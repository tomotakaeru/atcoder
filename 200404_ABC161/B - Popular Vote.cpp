#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();

int main(){
    int N, M;
    vector<int> A(N);
    cin >> N >> M;
    REP(i, 0, N) cin >> A[i];

    int sum = 0;
    REP(i, 0, N) sum += A[i];
    
    int cnt = 0;
    REP(i, 0, N){
        if (A[i] >= (float)sum / 4 / M){  // int同士で割り算してたのがミス…
            cnt++;
        }
    }

    if (cnt >= M){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}

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
    int N;
    cin >> N;
    vector<ll> A(N);
    REP(i,0,N) cin >> A[i];

    sort(A.begin(), A.end(), std::greater<ll>());

    ll award_sum = 0;
    REP(i, 1, N){
        award_sum += A[i / 2];
    }
    cout << award_sum << endl;

    return 0;
}

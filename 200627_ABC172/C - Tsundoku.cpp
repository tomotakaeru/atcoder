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
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N), B(M);
    REP(i, 0, N) cin >> A[i];
    REP(i, 0, M) cin >> B[i];

    ll max = 0;
    ll sum = 0;
    REP(i, 0, N){
        chmax(max, A[i]);
        sum += A[i];
    }
    REP(i, 0, M){
        chmax(max, B[i]);
        sum += B[i];
    }
    if (!chmax(max, K)){
        cout << 0 << endl;
        return 0;
    }

    vector<ll> DP(2*sum, 0);
    vector<ll> A_index(2*sum, 0);
    vector<ll> B_index(2*sum, 0);
    REP(k, 0, K + 1){
        if (A_index[k] < N){
            if (chmax(DP[k + A[A_index[k]]], DP[k] + 1)){
                A_index[k + A[A_index[k]]] = A_index[k] + 1;
                B_index[k + A[A_index[k]]] = B_index[k];
            }
        }
        if (B_index[k] < M){
            if (chmax(DP[k + B[B_index[k]]], DP[k] + 1)){
                A_index[k + B[B_index[k]]] = A_index[k];
                B_index[k + B[B_index[k]]] = B_index[k] + 1;
            }
        }
    }

    vector<ll>::iterator iter = max_element(DP.begin(), DP.begin() + K + 1);
    size_t index = distance(DP.begin(), iter);
    cout << DP[index] << endl;

    return 0;
}

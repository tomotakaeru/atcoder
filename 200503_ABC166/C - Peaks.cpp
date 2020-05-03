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
    int N, M;
    cin >> N >> M;
    vector<int> H(N); REP(i, 0, N) cin >> H[i];
    vector<int> A(M), B(M); REP(i, 0, M) cin >> A[i] >> B[i];

    vector<set<int>> network(N);
    REP(i, 0, M){
        network[A[i] - 1].insert(B[i] - 1);
        network[B[i] - 1].insert(A[i] - 1);
    }

    int cnt = 0;
    REP(i, 0, N){
        int h = H[i];
        bool top_flag = true;
        for (auto j: network[i]){
            if (h <= H[j]){
                top_flag = false;
                break;
            }
        }
        if (top_flag)
            ++cnt;
    }

    cout << cnt << endl;

    return 0;
}

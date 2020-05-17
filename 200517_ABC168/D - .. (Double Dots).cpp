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
    int N; cin >> N;
    int M; cin >> M;
    vector<int> A(M), B(M); REP(i, 0, M) cin >> A[i] >> B[i];

    vector<vector<int>> link(N);
    REP(i, 0, M){
        link[A[i] - 1].push_back(B[i] - 1);
        link[B[i] - 1].push_back(A[i] - 1);
    }
    REP(i, 0, N){
        if (link[i].size() == 0){
            cout << "No" <<endl;
            return 0;
        }
    }

    vector<int> guide(N, -1);
    queue<int> que;
    que.push(0);

    while (!que.empty()){
        int v = que.front();
        que.pop();

        for (auto v_new: link[v]){  // vから辿れる頂点をすべて調べる
            if (guide[v_new] != -1) continue;  // すでに発見済みの頂点は探索しない

            guide[v_new] = v;
            que.push(v_new);
        }
    }

    cout << "Yes" <<endl;
    REP(i, 1, N){
        cout << guide[i] + 1 << endl;
    }

    return 0;
}

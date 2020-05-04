#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = 1e18;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

// void add_candidate_after_digit(vector<vector<int>> &candidate, vector<int> can, int digit, int upperbound_value, int upperbound_digit){
//     if (digit >= upperbound_digit){
//         return 0;
//     }
//     while (can[digit] < upperbound_value){
//         ++can[i];
//         candidate.push_back(can);
//     }
//     add_candidate_after_digit(candidate, can, digit + 1, upperbound_value, upperbound_digit);
// }


// // 回答が洗練されているのでそれを参考にすべし（BFSも学ばないと）
// int main(){
//     int N, M, Q; cin >> N >> M >> Q;
//     vector<int> a(Q), b(Q), c(Q), d(Q); REP(i, 0, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];

//     vector<vector<int>> candidate;
//     vector<int> can(N);
//     REP(i, 0, N) can[i] = 1;
//     for (i = N - 1; i >= 0; --i){
//         while (can[i] < M){
//             ++can[i];
//             candidate.push_back(can);
//         }
//         can[i] = 1;
//     }

//     int max = 0;
//     for (auto A: candidate){
//         int sum = 0;
//         REP(i, 0, Q){
//             if (A[b[i] - 1] - A[a[i] - 1] == c[i]){
//                 sum += d[i];
//             }
//         }
//         chmax(max, sum);
//     }
//     cout << max << endl;

//     return 0;
// }

int N, M, Q;
vector<int> a(50), b(50), c(50), d(50);
vector<int> A(10);
int ans = 0;

void dfs(int index, int v_pre){
    if (index == N){
        int sum = 0;
        REP(i, 0, Q){
            if (A[b[i] - 1] - A[a[i] - 1] == c[i])
                sum += d[i];
        }
        chmax(ans, sum);
        return;
    } else{
        REP(v, v_pre, M + 1){
            A[index] = v;
            dfs(index + 1, v);
        }
    }
}

int main(){
    cin >> N >> M >> Q;
    REP(i, 0, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    dfs(0, 1);
    cout << ans << endl;

    return 0;
}

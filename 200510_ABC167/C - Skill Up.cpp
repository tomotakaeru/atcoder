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
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));
    REP(i, 0, N){
        cin >> C[i];
        REP(j, 0, M){
            cin >> A[i][j];
        }
    }

    int min_cost = 1e8;
    REP(bit, 0, (1<<N)){
        int cost = 0;
        vector<int> skill(M);

        REP(i, 0, N){
            if (bit & (1<<i)){
                cost += C[i];
                REP(j, 0, M){
                    skill[j] += A[i][j];
                }
            }
        }

        bool skill_ok_flag = true;
        for (auto s: skill){
            if (s < X){
                skill_ok_flag = false;
                break;
            }
        }
        if (skill_ok_flag){
            chmin(min_cost, cost);
        }
    }

    if (min_cost == 1e8){
        cout << -1 << endl;
    } else{
        cout << min_cost << endl;
    }


    return 0;
}

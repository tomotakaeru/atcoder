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
    int N, K;
    cin >> N >> K;
    vector<int> d(K);
    vector<vector<int>> A;
    REP(i, 0, K){
        cin >> d[i];
        int in;
        vector<int> tmp;
        REP(j, 0, d[i]){
            cin >> in;
            tmp.push_back(in);
        }
        A.push_back(tmp);
    }

    vector<int> sunuke(N, 1) ;
    REP(i, 0, K){
        for (auto a: A[i]){
            sunuke[a - 1] = 0;
        }
    }
    int sum = 0;
    REP(i, 0, N){
        sum += sunuke[i];
    }
    cout << sum << endl;

    return 0;
}

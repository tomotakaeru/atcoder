#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();

int main(){
    int N, K, C;
    string S;
    cin >> N >> K >> C >> S;

    int K_cnt = K;
    vector<int> L;
    REP(i, 0, N){
        if (S[i] == 'x'){
            continue;
        }
        --K_cnt;
        L.push_back(i);
        i += C;
        if (K_cnt == 0) break;
    }

    K_cnt = K;
    vector<int> R;
    REP(i, 0, N){
        if (S[N - 1 - i] == 'x'){
            continue;
        }
        --K_cnt;
        R.push_back(N - 1 - i);
        i += C;
        if (K_cnt == 0) break;
    }
    reverse(ALL(R));

    REP(i, 0, K){
        if (R[i] == L[i]){
            cout << R[i] + 1 << endl;
        }
    }

    return 0;
}

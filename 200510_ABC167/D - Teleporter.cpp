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
    ll K;
    cin >> N >> K;
    vector<int> A(N);
    REP(i, 0, N) cin >> A[i];

    int index = 0;
    vector<int> history_vec;
    history_vec.reserve(1e6);
    set<int> history_set;
    ll loop_begin_index, loop_end_index;
    bool flag_break = false;
    for (ll i = 0; i < min(K, ll(N)); ++i){
        if (history_set.find(index) != history_set.end()){
            for (ll j = history_vec.size() - 1; j >= 0; --j){
                if (index == history_vec[j]) {
                    loop_begin_index = j;
                    loop_end_index = i;
                    flag_break = true;
                    break;
                }
            }
        }
        history_vec.push_back(index);
        history_set.insert(index);
        index = A[index] - 1;  //next
        if (flag_break)
            break;
    }

    if (K <= N){
        cout << index + 1 << endl;
    } else{
        if (loop_begin_index == loop_end_index){
            cout << history_vec[loop_begin_index] << endl;
        } else{
            cout << history_vec[loop_begin_index + (K - loop_begin_index) % (loop_end_index - loop_begin_index)] + 1 << endl;
        }
    }


    return 0;
}

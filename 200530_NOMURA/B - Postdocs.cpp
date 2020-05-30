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
    string T;
    cin >> T;

    REP(i, 0, T.size()){
        if (T[i] == '?'){
            T[i] = 'D';
            // if (i==0){
            //     if (T[i+1] == 'D'){
            //         T[i] = 'P';
            //     } else{
            //         T[i] = 'D';
            //     }
            // } else if (i==T.size()-1){
            //     T[i] = 'D';
            // } else{
            //     if (T[i-1] == 'P'){
            //         T[i] = 'D';
            //     } else{
            //         if (T[i+1] == 'D'){
            //             T[i] = 'P';
            //         } else{
            //             T[i] = 'D';
            //         }
            //     }
            // }
        }
    }
    cout << T << endl;

    return 0;
}

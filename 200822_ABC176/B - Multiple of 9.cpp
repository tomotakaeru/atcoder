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
    string N;
    cin >> N;

    ll sum = 0;
    for (char c : N) {
        sum += c - '0';
    }
 
    string result = sum % 9 == 0 ? "Yes" : "No";
    cout << result << endl;

    return 0;
}

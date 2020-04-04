#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int tmp;
    tmp = X;
    X = Y;
    Y = tmp;
    
    tmp = X;
    X = Z;
    Z = tmp;

    cout << X << " " << Y << " " << Z;

    return 0;
}

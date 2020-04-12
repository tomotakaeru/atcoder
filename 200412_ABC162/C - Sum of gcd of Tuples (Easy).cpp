#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = numeric_limits<long long>::max();


int gcd(int a, int b, int c){  // cond: a<=b<=c
    for (int i = a; i > 0; --i){
        if (a % i == 0 && b % i == 0 && c % i == 0)  //ここでaの判定入れるの忘れてた…（そもそもc++17なら組み込みのgcd使えたぽい）
            return i;
    }
    return 1;
}

int main(){
    int K;
    cin >> K;

    int sum = 0;
    REP(i, 1, K+1){  // どうやら全探索でも通せたっぽいし…
        REP(j, i, K+1){
            REP(k, j, K+1){
                if (i == j){
                    if (j == k){
                        sum += i;
                    } else{
                        sum += gcd(i, j, k) * 3;
                    }
                } else if (j == k){
                    sum += gcd(i, j, k) * 3;
                } else{
                    sum += gcd(i, j, k) * 6;
                }
            }
        }
    }
    cout << sum << endl;

    return 0;
}

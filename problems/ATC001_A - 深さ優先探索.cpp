#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = 1e18;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


vector<vector<int>> NEWS = {{0, -1}, {1, 0}, {-1, 0}, {0, 1}};

bool dfs(int x, int y, int W, int H, vector<string>& c, vector<vector<bool>>& once_come){
    once_come[y][x] = true;
    for (auto dir: NEWS){
        int x_new = x + dir[0];
        int y_new = y + dir[1];
        if (0 <= x_new && x_new < W && 0 <= y_new && y_new < H && !once_come[y_new][x_new]){
            if (c[y_new][x_new] == 'g')
                return true;
            if (c[y_new][x_new] == '.'){
                if (dfs(x_new, y_new, W, H, c, once_come))
                    return true;
            }
        }
    }
    return false;
}

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> c(H); REP(i, 0, H) cin >> c[i];

    vector<vector<bool>> once_come(H, vector<bool>(W, false));

    REP(i, 0, H){
        REP(j, 0, W){
            if (c[i][j] == 's'){
                if (dfs(j, i, W, H, c, once_come)){
                    cout << "Yes" << endl;
                    return 0;
                } else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}

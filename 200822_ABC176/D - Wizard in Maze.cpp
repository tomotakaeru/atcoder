#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=s; i<(n); ++i)
#define ALL(n) begin(n),end(n)
using ll = long long;
const ll INF = 1e18;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


bool dfs(int x, int y, int Gx, int Gy, int W, int H, const vector<vector<int>>& move, const vector<string>& map, vector<vector<bool>>& once_come, vector<vector<bool>>& warp_candidate){
    once_come[y][x] = true;
    for (auto dir: move){
        int x_new = x + dir[0];
        int y_new = y + dir[1];
        if (0 <= x_new && x_new < W && 0 <= y_new && y_new < H && !once_come[y_new][x_new]){
            if (x_new == Gx && y_new == Gy)
                return true;
            if (map[y_new][x_new] == '#'){
                warp_candidate[y][x] = true;
            }
            if (map[y_new][x_new] == '.'){
                if (dfs(x_new, y_new, Gx, Gy, W, H, move, map, once_come, warp_candidate))
                    return true;
            }
        }
    }
    return false;
}
vector<pair<int,int>> warp_onetime(int x, int y, int W, int H, const vector<vector<int>>& move, const vector<string>& map, vector<vector<bool>>& once_come){
    vector<pair<int, int>> result = {};

    once_come[y][x] = true;

    for (auto dir: move){
        int x_new = x + dir[0];
        int y_new = y + dir[1];
        if (0 <= x_new && x_new < W && 0 <= y_new && y_new < H && !once_come[y_new][x_new]){
            if (map[y_new][x_new] == '.'){
                result.push_back({x_new, y_new});
            }
        }
    }
    if (result.size() == 0){
        result.push_back({-1, -1});
    }

    return result;
}


int main(){
    int H, W;
    cin >> H >> W;
    int Sw, Sh, Gw, Gh;
    cin >> Sw >> Sh >> Gw >> Gh;
    --Sw; --Sh; --Gw; --Gh;
    vector<string> map(H);
    REP(i,0,H) cin >> map[i];

    int cnt_warp = 0;
    vector<vector<int>> NEWS = {{0, -1}, {1, 0}, {-1, 0}, {0, 1}};
    vector<vector<int>> WARP = {{-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2}, {-1, -2}, {-1, -1}, {-1, 1}, {-1, 2}, {0, -2}, {0, 2}, {1, -2}, {1, -1}, {1, 1}, {1, 2}, {2, -2}, {2, -1}, {2, 0}, {2, 1}, {2, 2}};
    vector<vector<bool>> once_come(H, vector<bool>(W, false));
    vector<vector<bool>> warp_candidate(H, vector<bool>(W, false));
    bool once_warp_success = false;

    if (dfs(Sw, Sh, Gw, Gh, W, H, NEWS, map, once_come, warp_candidate)){
        cout << cnt_warp << endl;
    } else{
        while(1){
            vector<pair<int, int>> warped_list;
            REP(j,0,H){
                REP(i,0,W){
                    if (warp_candidate[j][i]){
                        warped_list = warp_onetime(i, j, W, H, WARP, map, once_come);
                        for (auto v: warped_list){
                            if (v.first != -1){
                                once_warp_success = true;
                                ++cnt_warp;
                                warp_candidate = vector<vector<bool>>(H, vector<bool>(W, false));
                                if (dfs(v.first, v.second, Gw, Gh, W, H, NEWS, map, once_come, warp_candidate)){
                                    cout << cnt_warp << endl;
                                    return 0;
                                }
                            }
                            //TODO: ここで挙動としては全体ループに入りたいが，コーディングできなかった
                        }
                    }
                }
            }
            if (!once_warp_success){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    return 0;
}

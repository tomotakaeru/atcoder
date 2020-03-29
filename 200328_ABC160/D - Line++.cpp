#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;

    // vector<vector<int>> graph(N, vector<int>(N));
    // for (int i = 0; i < N - 1; ++i){
    //     graph[i][i] = 0;
    //     graph[i][i + 1] = 1;
    //     graph[i + 1][i] = 1;
    // }
    // graph[N - 1][N - 1] = 0;
    // graph[X - 1][Y - 1] = 1;
    // graph[Y - 1][X - 1] = 1;

    // ワーシャルフロイド法（WA）
    // for (int k = 0; k < N; ++k) {
    //     for (int i = 0; i < N; ++i) {
    //         for (int j = 0; j < N; ++j) {
    //             graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
    //         }
    //     }
    // }

    // int cnt = 0;
    // for (int k = 1; k < N; ++k) {
    //     cnt = 0;
    //     for (int i = 0; i < N; ++i) {
    //         for (int j = i + 1; j < N; ++j) {
    //             if (graph[i][j] == k){
    //                 cnt++;
    //             }
    //         }
    //     }
    //     cout << cnt << endl;
    // }

    // 解説見たやり方（この問題の特性上，XY間を通るか否かで場合分けして最小か比較するのが簡単だった．あとgraphはそもそも不要でループ内で都度カウントしてあげるようにした）
    vector<int> result(N - 1);
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            ++result[min({j - i, abs(X - 1 - i) + 1 + abs(Y - 1 - j), abs(Y - 1 - i) + 1 + abs(X - 1 - j)}) - 1];
        }
    }
    for (auto r: result){
        cout << r << endl;
    }

    return 0;
}

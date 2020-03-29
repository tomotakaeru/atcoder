#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int K, N;
    cin >> K >> N;
    vector<int> house_pos(N);
    for (int i = 0; i < N; ++i){
        cin >> house_pos[i];
    }

    int max_diff = 0;
    for (int i = 0; i < N - 1; ++i){
        max_diff = max(max_diff, abs(house_pos[i] - house_pos[i + 1]));
    }
    max_diff = max(max_diff, abs(house_pos[0] + (K - house_pos[N - 1])));
    cout << K - max_diff << endl;
    return 0;
}

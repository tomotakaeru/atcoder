#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; ++i){
        cin >> d[i];
    }
    sort(d.begin(), d.end());  // 昇順ソート

    vector<int> erase_index;
    for (int i = 0; i < N-1; ++i){
        if (d[i] == d[i+1]){
            erase_index.push_back(i+1);
        }
    }

    cout << N - erase_index.size() << endl;
    return 0;
}

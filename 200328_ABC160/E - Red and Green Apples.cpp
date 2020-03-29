#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vector<int> p_vec(A);
    vector<int> q_vec(B);
    vector<int> r_vec(C);
    for (int i = 0; i < A; ++i){
        cin >> p_vec[i];
    }
    sort(p_vec.begin(), p_vec.end(), greater<int>());
    for (int i = 0; i < B; ++i){
        cin >> q_vec[i];
    }
    sort(q_vec.begin(), q_vec.end(), greater<int>());
    for (int i = 0; i < C; ++i){
        cin >> r_vec[i];
    }
    sort(r_vec.begin(), r_vec.end(), greater<int>());

    vector<int> p_part(X);
    copy(p_vec.begin(), p_vec.begin() + X, p_part.begin());
    vector<int> q_part(Y);
    copy(q_vec.begin(), q_vec.begin() + Y, q_part.begin());

    // WA（rの林檎を愚直にpかqに塗り分けてた）
    // while (r_vec[0] > p_part[X - 1] || r_vec[0] > q_part[Y - 1]){
    //     if (p_part[X - 1] < q_part[Y - 1]){
    //         p_part[X - 1] = r_vec[0];
    //         sort(p_part.begin(), p_part.end(), greater<int>());
    //     } else{
    //         q_part[Y - 1] = r_vec[0];
    //         sort(q_part.begin(), q_part.end(), greater<int>());
    //     }
    //     r_vec.erase(r_vec.begin());
    //     if (r_vec.size() == 0) break;
    // }
    // int p_sum = accumulate(p_part.begin(), p_part.end(), 0);
    // int q_sum = accumulate(q_part.begin(), q_part.end(), 0);
    // cout << p_sum + q_sum << endl;

    // 解説後（p_part,q_part,rを全部あわせて大きさで並べ替えてよかったんだね）(intは10^9くらいまでしか対応してないので，今回accumulateにはlonglongとかを指定する必要もあった)
    vector<int> pqr_vec(X + Y + C);
    copy(p_part.begin(), p_part.end(), pqr_vec.begin());
    copy(q_part.begin(), q_part.end(), pqr_vec.begin() + X);
    copy(r_vec.begin(), r_vec.end(), pqr_vec.begin() + X + Y);
    sort(pqr_vec.begin(), pqr_vec.end(), greater<int>());
    cout << accumulate(pqr_vec.begin(), pqr_vec.begin() + X + Y, 0LL) << endl;

    return 0;
}

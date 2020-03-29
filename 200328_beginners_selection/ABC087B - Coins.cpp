#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int cnt = 0;
    int max_a = n / 500;
    for (int i = 0; i <= min(max_a, a); ++i){
        int res_a = n - 500 * i;
        int max_b = res_a / 100;
        for (int j = 0; j <= min(max_b, b); ++j){
            int res_b = res_a - 100 * j;
            int max_c = res_b / 50;
            if (max_c <= c) cnt++;  // 丁度割り切れるケースのみカウントする
        }
    }
    cout << cnt << endl;
    return 0;
}

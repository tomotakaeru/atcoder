#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;

    for (int i = 0; i <= min(N, Y / 10000); ++i){
        for (int j = 0; j <= min(N - i, (Y - 10000 * i) / 5000); ++j){
            if (Y - 10000 * i - 5000 * j - 1000 * (N - i - j) == 0){
                cout << i << " " << j << " " << N - i - j << endl;
                return 0;
            }

        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}

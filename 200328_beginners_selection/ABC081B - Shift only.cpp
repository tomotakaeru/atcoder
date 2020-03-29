#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> input(N);
    for (unsigned int i = 0; i < N; ++i){
        cin >> input[i];
    }

    int cnt = -1;
    bool continue_flag = true;
    while (continue_flag)
    {
        for (unsigned int i = 0; i < N; ++i){
            if (input[i] % 2 != 0){
                continue_flag = false;
                break;
            }
            input[i] /= 2;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

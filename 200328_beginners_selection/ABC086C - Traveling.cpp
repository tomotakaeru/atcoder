#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> plan(N + 1, vector<int>(3));
    plan[0][0] = 0;
    plan[0][1] = 0;
    plan[0][2] = 0;
    for (int i = 1; i < N + 1; ++i){
        cin >> plan[i][0] >> plan[i][1] >> plan[i][2];
    }

    int dt, dx, dy;
    for (int i = 0; i < N; ++i){
        dt = plan[i + 1][0] - plan[i][0];
        dx = abs(plan[i + 1][1] - plan[i][1]);
        dy = abs(plan[i + 1][2] - plan[i][2]);
        if (dt < dx + dy){
            cout << "No" << endl;
            return 0;
        }
        if ((dt-dx-dy) % 2 != 0){
            cout << "No" << endl;
            return 0;            
        }
    }
    cout << "Yes" << endl;
    return 0;
}

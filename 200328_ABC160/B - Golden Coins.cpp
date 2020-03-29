#include <iostream>

using namespace std;

int main(){
    int X;
    cin >> X;

    int num_500 = X / 500;
    X -= num_500 * 500;
    int num_5 = X / 5;

    cout << num_500 * 1000 + num_5 * 5 << endl;

    return 0;
}

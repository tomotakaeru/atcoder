#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;

    int cnt = 0;
    for (unsigned int i = 0; i < input.size(); ++i){
        if (input[i] == '1'){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

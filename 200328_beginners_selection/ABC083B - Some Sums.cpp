#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int result = 0;
    int sum;
    string i_str, i_str_part;
    for (int i = 1; i <= n; ++i){
        sum = 0;
        i_str = to_string(i);
        for (int j = 0; j < i_str.size(); ++j){
            i_str_part = i_str[j];
            sum += stoi(i_str_part);
        }
        if (sum <=b  && sum >= a){
            result += i;
        }
    }
    cout << result << endl;
    return 0;
}

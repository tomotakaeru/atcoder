#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;

    while(S != ""){
        if (S.substr(0, 5) == "dream"){
            if (S.substr(5, 2) == "er"){
                if (S.substr(7, 4) == "aser"){  // dreameraserの場合，先にdreamerで切ってしまうことを防ぐ必要がある
                    S = S.substr(11);
                } else if (S.substr(7, 3) == "ase"){  // dreameraseの場合，先にdreamerで切ってしまうことを防ぐ必要がある
                    S = S.substr(10);
                } else{
                    S = S.substr(7);
                }
            } else{
                S = S.substr(5);
            }
        } else if (S.substr(0, 5) == "erase"){
            if (S.substr(5, 1) == "r"){
                S = S.substr(6);
            } else{
                S = S.substr(5);
            }
        } else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

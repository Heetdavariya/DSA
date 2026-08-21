#include <iostream>
using namespace std;
int main(){

    for(int i=1;i<=5;i++){
        for(int j='A';j<='A' + 5 - i;j++){
            cout << " " << char(j);
        }
        cout << "\n";
    }
    return 0;
}
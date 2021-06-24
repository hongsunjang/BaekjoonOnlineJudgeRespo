#include <iostream>

using namespace std;

int main(){
    int nCount;
    cin >> nCount;

    for(int i=1;i<=9;i++){
        cout << nCount<<" * "<<i<<" = "<<nCount*i<<endl;
    }
    return 0;
}

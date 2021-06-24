#include <iostream>

using namespace std;

int main(){
    int nCount;
    cin >> nCount;
    for(int i=0;i<nCount;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
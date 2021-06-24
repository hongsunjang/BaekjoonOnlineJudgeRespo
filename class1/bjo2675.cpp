#include <iostream>

using namespace std;

int main(){
    int nCount;
    cin >> nCount;
    for(int t=0;t<nCount;t++){
        int rCount;
        char str[21]{0,};
        cin >> rCount>>str;

        int strlen = 0;
        while(str[strlen])strlen++;
        for(int j=0;j<strlen;j++){
            for(int i=0;i<rCount;i++){
                cout<<str[j];
            }   
        }
        cout<<endl;
    }

    return 0;
}
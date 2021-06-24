#include <iostream>

using namespace std;

int main(){
    int det;
    cin >> det;
    
    int iter;
    int delta;

    if(det == 1){
        iter = 2;
        delta = 1;
    }else if(det == 8){
        iter = 7;
        delta = -1;
    }else{
        iter = -1;
    }

    int i;
    for(i=2;i<=8;i++){
        int a;
        cin >> a;

        if(a != iter) break;
        iter+=delta;
    }

    if(i == 9){
        if(iter > 0){
            cout<<"ascending";
        }else{
            cout<<"descending";
        }
    } else{
        cout<<"mixed";
    }
    return 0;
}
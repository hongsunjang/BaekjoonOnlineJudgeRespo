#include <iostream>

using namespace std;

int main(){
    int a;
    int maxVal = -987654321;
    int maxIdx = 1;
    for(int i=1; i<=9;i++){
        cin >> a;
        if (maxVal <= a){
            maxVal = a;
            maxIdx = i;
        }
    }
    cout<< maxVal<<endl<<maxIdx;


    
}
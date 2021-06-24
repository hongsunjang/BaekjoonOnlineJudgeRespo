#include <iostream>
using namespace std;

int main(){
    int nCount;
    cin >> nCount;
    
    for(int i=0;i<nCount;i++){
        int sum{0,};    
        char buf[81]{0,};
        cin >> buf;
        
        int iter=0;
        int score{0,};
        while(buf[iter]){
            if(buf[iter] == 'O'){
                score++;
                sum += score;
            }else{
                score = 0;
            }
            iter++;
        }
        cout<< sum <<endl;
    }

    return 0;
}
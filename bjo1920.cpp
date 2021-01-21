#include <iostream>
#include <map>

using namespace std;

int main(){
    int iNum,i;
    int oNum;
    int input;
    int output;

    map<int,int> m;
    scanf("%d",&iNum);
    fflush(stdin);
    for(i=0;i<iNum;i++){
        scanf("%d",&input);
        m.insert(pair<int,int>(input,1));
    }

    scanf("%d", &oNum);
    fflush(stdin);
    for(i=0;i<oNum;i++){
        scanf("%d",&output);
       
        if(m.find(output) != m.end())
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
#include <iostream>

int **matrix; 

int isBlue(int borderX,int borderY, int row){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            if(matrix[borderX+i][borderY+j] == 0) return 0;
        }
    }
    // Is blue so disable area
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            matrix[borderX+i][borderY+j] = -1;
        }
    }
    return 1;
}
int isWhite(int borderX,int borderY, int row){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            if(matrix[borderX+i][borderY+j] == 1) return 0;
        }
    }
    // Is white so disable area
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            matrix[borderX+i][borderY+j] = -1;
        }
    }
    return 1;
}

int main(){
    int row;
    int i,j;
    int size;
    int white = 0;
    int blue = 0;

    scanf("%d",&row);
    fflush(stdin);
    matrix = new int*[row]; 
    for(i=0;i<row;i++){
        matrix[i] = new int[row];
        for(j=0;j<row;j++){
            scanf("%d",&matrix[i][j]);
        }
        fflush(stdin);
    }

    // for(i=0;i<row;i++){
    //     for(j=0;j<row;j++){
    //         printf("%d ",matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    
    size = row;
    //loop for size!= 0
    while(size){
        for(i=0;i<row;i = i+size){
            for(j=0;j<row;j=j+size){
                if(matrix[i][j] == 1){
                    if(isBlue(i,j,size)) blue++;
                }else if(matrix[i][j] == 0){
                    if(isWhite(i,j,size)) white++;    
                }else{
                    continue;
                }
            }
        }
        size/=2;
    }

    printf("%d\n%d",white,blue);
    return 0;

}
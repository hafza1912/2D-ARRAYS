//Transpose in-place
#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    if(row != col){
        printf("In-place transpose not possible");
        return 0;
    }
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < col; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

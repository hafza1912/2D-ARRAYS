//Maximum element in matrix
#include<stdio.h>
int main(){
	int row,col,max=0;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("%d",max);
}

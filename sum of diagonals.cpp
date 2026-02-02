//Sum of both diagonals
#include<stdio.h>
int main(){
	int row,col,sum1=0;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==j){
				sum1+=arr[i][j];
			}
		}
	}
	printf("Left diagonal:%d\n",sum1);
	int sum2=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i+j==row-1){
				sum2+=arr[i][j];
			}							
		}
	}
	printf("Right diagonal:%d",sum2);
	return 0;
}

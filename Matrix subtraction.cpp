//Matrix subtraction
#include<stdio.h>
int main(){
	int row,col;
	scanf("%d %d",&row,&col);
	int arr1[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	int arr2[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	int diff[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			diff[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",diff[i][j]);
		}
		printf("\n");
	}
	return 0;
}

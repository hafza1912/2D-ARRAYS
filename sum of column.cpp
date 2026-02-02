//Sum of each column
#include<stdio.h>
int main(){
	int row,col,sum=0;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int j=0;j<col;j++){
		sum=arr[0][j];
		for(int i=1;i<row;i++){
			sum+=arr[i][j];
		}
		printf("%d\n",sum);
	}
	
	return 0;
}

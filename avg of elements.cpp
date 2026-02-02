//Average of matrix
#include<stdio.h>
int main(){
	int row,col,sum=0;
	float avg=0;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
	}
	avg=sum/float(row*col);
	printf("%.1f",avg);
	return 0;
}

//Maximum of each column
#include<stdio.h>
int main(){
	int row,col,max=0;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=1;j<col;j++){
			if(arr[j][i]>max){
				max=arr[j][i];
				
			}
		}
		printf("%d\n",max);
	}
	return 0;
}

//Rotate 90° anti-clockwise (n×n)
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            int temp=arr[i][j];
            arr[i][j]=arr[n-1-i][j];
            arr[n-1-i][j]=temp;
        }
    }
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

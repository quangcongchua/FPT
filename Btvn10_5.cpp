#include<stdio.h>
int main(){
	int arr[4][4],S=0;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("arr[%d][%d] = \n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	int max=0;
	for(int i=0;i<4;i++)
	{
		S=S+arr[i][0];
		if(S>max){
			max=S;
			}
		for(int j=0;j<4;j++){
		
		}
		
	}
	printf("tong= %d",S);
	
	return 0;
}

#include <stdio.h>

int main(){
	int S=0, i=1;
	while(i<=199){
		i%2!=0;
		S= S+i;
		i=i+2;
	}
	printf("S= %d\n",S);
	return 0;
	}
	
	
	
	
	#include<stdio.h>
int main(){
	int a;
	printf("Nhap so a tu ban phim: \n");
	scanf("%d",&a);
	
	for(int i=1; i<=a; i++){
		if(a%i==0)
		printf("Uoc cua a: %d\n",i);
	}
	return 0;
}

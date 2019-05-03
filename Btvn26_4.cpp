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



#include<stdio.h>

int main()
{
	int i, n;
	printf("\nNhap n: ");
	scanf("%d", &n);

	if(n < 2)
		printf("So %d khong phai la so nguyen to\n", n);
	else if(n == 2)
		printf("So %d la so nguyen to\n", n);
	else if(n % 2 == 0)
		printf("So %d khong phai la so nguyen to\n", n);
	else
	{
		for(i = 3; i <= n; i=i+1)
		{
			if(n % i == 0)
	  	break;
		}
		if(i == n)
			printf("\nSo %d la so nguyen to", n);
		else
			printf("\nSo %d khong phai la so nguyen to", n);
	}
		


	return 0;
}

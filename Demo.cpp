#include <stdio.h>

int main(){
	int a;
	printf("Nhap so a tu ban phim:\n");
	scanf("%d", &a);
	if(a%2 == 0){
		// Nhung thu can lam khi dung
		printf("%d la so chan\n",a);
		}else{
		// Nhung thu se lam khi sai
		printf("%d la so le\n",a);
		}
	
	
	}

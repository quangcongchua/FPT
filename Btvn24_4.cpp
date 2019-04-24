#include <stdio.h>
Cach 1:
int main(){
	int t;
	printf("So nhap:\n");
	scanf("%d", &t);
	switch(t){
		case 2: printf("Hom nay la thu 2");break;
		case 3: printf("Hom nay la thu 3");break;
		case 4: printf("Hom nay la thu 4");break;
		case 5: printf("Hom nay la thu 5");break;
		case 6: printf("Hom nay la thu 6");break;
		case 7: printf("Hom nay la thu 7");break;
		case 8: printf("Hom nay la thu Chu Nhat");break;
		default: printf("Khong phai ngay trong tuan");break;
	}
}



Cach 2:
	
	#include <stdio.h>
	int main(){
		int t;
	printf("So nhap:\n");
	scanf("%d", &t);
	
	if(t==2){
		printf("Hom nay la thu 2");
	}else if(t==3){
		printf("Hom nay la thu 3");
	}else if(t==4){
		printf("Hom nay la thu 4");
	}else if(t==5){
		printf("Hom nay la thu 5");
	}else if(t==6){
		printf("Hom nay la thu 6");
    }else if(t==7){
		printf("Hom nay la thu 7");
	}else if(t==8){
		printf("Hom nay la chu nhat");
	}else{
		printf("Khong phai ngay trong tuan");
	}

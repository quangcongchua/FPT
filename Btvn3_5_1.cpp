#include <stdio.h>

int main()
{
	int a,i=1,S=0;
	printf("a la so nhap tu ban phim:\n");
	scanf("%d",&a);
	while(i < a)
	{
		if(a % i == 0)
		{
		   S = S + i;
		}
			i++;
	}
	if(S == a)
		printf("\n%d la so hoan thien", a);
	else
		printf("\nSo nhap vao khong la so hoan thien");
	return 0;
}

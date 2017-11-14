#include <stdio.h>
#define scanf scanf_s

int main(void)
{
	int n, i;
	//int a[10000];
	int kotae = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		kotae = 0;
		if (i % 3 == 0){
			kotae = 1;
		}
		else if (i % 10 < 10){
			if (i % 10 == 3 || (i / 10) % 10 == 3){
				kotae = 1;
			}
		}
		else if (i % 10 < 100){
			if ((i % 100) % 10 == 3 || (i % 100) / 10 == 3){
				kotae = 1;
			}
		}
		else if (i % 10 < 1000){
			if ((i % 1000) % 100 % 10 == 3 || (i % 1000) % 100 / 10 == 3){
				kotae = 1;
			}
		}
		else if (i % 10 < 10000){
			if ((i % 10000) % 1000 % 100 % 10 == 3 || (i % 10000) % 1000 % 100 / 10 == 3){
				kotae = 1;
			}
		}
		if (kotae == 1){
			printf("%d ",i);
		}
	}
	return 0;
}
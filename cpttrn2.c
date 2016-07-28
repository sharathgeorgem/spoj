#include<stdio.h>
int main() {
	int arr,i,j,l,t,test,super,a[20],counti=0,countj=0;
	scanf("%d",&test);
	while(test--) {
		scanf("%d%d",&l,&t);
		if(l>t)
			arr = l;
		else
			arr = t;
		for(i=0;i<arr;i++)
			a[i] = 2*i;
		if(l == 1)
			l = 4;
		else
			l = (l + 5 + a[l-2]);
		if(t == 1)
			t = 4;
		else {
			t = (t + 5 + a[t-2]);
		}
		for(i=1;i<=l;i++) {
			for(j=1;j<=t;j++) {
				if(i==1) {
					printf("*");
				}
				else if(counti%3 == 0){
					printf("*");
				}
				else {
					if(j==1) {
						printf("*");
					}
					else if(countj%3 == 1 || countj%3 == 2) {
						printf(".");
					}
					else {
						printf("*");
					}
				}
				countj += 1;
			}
			printf("\n");
			countj = 0;
			counti +=1;
		}
		counti = 0;
		printf("\n");
	}
	return 0;
}


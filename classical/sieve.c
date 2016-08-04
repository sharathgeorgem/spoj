#include<stdio.h>
int main() {
	int i, m, j, n;
	scanf("%d%d", &m, &n);
	int arr[n];
	arr[0] = 0;
	arr[1] = 0;
	for(i=2;i<n;i++)
		arr[i] = 1;
	for(i=2; i*i<n; i++) {
		if(arr[i]) {
			for(j=i*i; j<n; j += i) {
				arr[j] = 0;
			}
		}
	}
	for(i=2;i<n;i++) {
		if(arr[i])
			printf("%d\t",i);
	}
	printf("\n");
return 0;
}

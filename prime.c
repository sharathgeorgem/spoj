#include<stdio.h>
int main() {
	int i, m, j, n, k ,l;
	scanf("%d%d", &m, &n);
	int primes[n];
	primes[0] = 0;
	primes[1] = 0;
	for(i=2;i<n;i++)
		primes[i] = 1;
	for(i=2; i*i<n; i++) {
		if(primes[i]) {
			for(j=i*i; j<n; j += i) {
				primes[j] = 0;
			}
		}
	}
	for(k=m; k<=n; k++) {
		for(l=2; l*l<=k; l++) {
			if(primes[l]) {
				for(l=k*k; l<n; l += k)
					primes[l] = 0;
			}
		}
	}
	for(i=m;i<=n;i++) {
		if(primes[i])
			printf("%d\t",i);
	}
	printf("\n");
return 0;
}

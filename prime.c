#include<stdio.h>
int main() {
	long i, m, j, n, k ,l;
	scanf("%ld%ld", &m, &n);
	long primes[n];
	primes[0] = 0;
	primes[1] = 0;
	for(i=2;i<n;i++)
		primes[i] = 1;
	/*for(i=2; i*i<n; i++) {
		if(primes[i]) {
			for(j=i*i; j<n; j += i) {
				primes[j] = 0;
			}
		}
	}*/
	/*for(k=m; k<=n; k++) {
		for(l=2; l*l<=k; l++) {
			if(primes[l]) {
				for(l=k*k; l<n; l += k)
					primes[l] = 0;
			}
		}
	}*/
	for(i=2;i<=n;i++) {
		if(primes[i])
			printf("%ld\t",i);
	}
	printf("\n");
return 0;
}

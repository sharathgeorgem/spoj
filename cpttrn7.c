#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j,test_num, row, col, size, temp, mod1, mod2;
	scanf("%d",&test_num);
	while(test_num--) {
		scanf("%d%d%d", &row, &col, &size);
		temp = 2 * size;
		row = row * temp;
		col = col * temp;
		mod1 = size - 1;
		mod2 = size;
		for(i=0;i<row;i++) {
			for(j=0;j<col;j++) {
				if(mod1 == (i + j) % temp)
					printf("/");
				else if(mod2 == abs(i - j) % temp)
					printf("\\");
				else
					printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

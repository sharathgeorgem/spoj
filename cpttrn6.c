#include<stdio.h>
int main() {
	int i,j, test_case, num_hor, hcount=1,vcount=1, num_vert, height, width;
	scanf("%d",&test_case);
	while(test_case--) {
		scanf("%d%d%d%d", &num_hor, &num_vert, &height, &width);
		num_hor = num_hor + height * (num_hor + 1);
		num_vert = num_vert + width * (num_vert + 1);
		for(i=1;i<=num_hor;i++) {
			for(j=1;j<=num_vert;j++) {
				if(hcount <= height) {
					if(vcount <= width) {
						printf(".");
					}
					else {
						printf("|");
						vcount = 0;
					}
				}
				else {
					if(vcount <= width) {
						printf("-");
					}
					else {
						printf("+");
						vcount = 0;
					}
					hcount = 0;
				}
				vcount += 1;
			}
			printf("\n");
			hcount += 1;
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main() {
	int i, j, test_case, num_line, num_col, width;
	scanf("%d", &test_case);
	while(test_case--) {
		scanf("%d %d %d", &num_line, &num_col, &width);
		width += 1;
		num_line = num_line * width + 1;
		num_col = num_col * width + 1;
		for(i=0;i<num_line;i++) {
			for(j=0;j<num_col;j++) {
				if(i % width == 0 || j % width == 0)
					printf("*");
				else {
					if((i/width + j/width) % 2 == 0) {
						if(i%width == j%width)
							printf("\\");
						else
							printf(".");

					}
					else {
						if((i % width) == (width - j % width))
							printf("/");
						else
							printf(".");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

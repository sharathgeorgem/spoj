#include<stdio.h>
int main() {
	int i, test, n, xpoint, ypoint, xcircle, ycircle, radius, x1, y1, x2, y2, flag=0;
	int  x1rect=0, y1rect=0, x2rect=0, y2rect=0;
	char figure;
	scanf("%d",&test);
	while(test--) {
		scanf("%d",&n);
		while(n--) {
			scanf("%c",&figure);
			if(figure == 'p') {
				scanf("%d%d", &xpoint, &ypoint);
				if(flag == 0) {
					x1rect = xpoint;
					y1rect = ypoint;
					x2rect = xpoint;
					y2rect = ypoint;
					flag = 1;
				}
				if(xpoint < x1rect)
					x1rect = xpoint;
				if(ypoint < y1rect)
					y1rect = ypoint;
				if(xpoint > x2rect)
					x2rect = xpoint;
				if(ypoint > y2rect)
					y2rect = ypoint;
			}
		}
		printf("%d %d %d %d\n", x1rect, y1rect, x2rect, y2rect);
		flag = 0;
	}
	return 0;
}

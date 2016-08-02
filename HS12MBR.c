#include<stdio.h>
int main() {
	int i, test, n, xpoint, ypoint, xcircle, ycircle, radius, x1, y1, x2, y2, flag=0;
	int  x1rect=0, y1rect=0, x2rect=0, y2rect=0;
	char figure[2];
	scanf("%d",&test);
	while(test--) {
		scanf("%d",&n);
		while(n--) {
			scanf("%s",figure);
			if(figure[0] == 'p') {
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
			} else if(figure[0] == 'c') {
				scanf("%d%d%d", &xcircle, &ycircle, &radius);
				if(flag == 0) {
					x1rect = xcircle - radius;
					y1rect = ycircle - radius;
					x2rect = xcircle + radius;
					y2rect = ycircle + radius;
					flag = 1;
				}
				if((xcircle - radius) < x1rect)
					x1rect = xcircle - radius;
				if((ycircle - radius) < y1rect)
					y1rect = ycircle - radius;
				if((xcircle + radius) > x2rect)
					x2rect = xcircle + radius;
				if((ycircle + radius) > y2rect)
					y2rect = ycircle + radius;
			} else {
				

			}
		}
		printf("%d %d %d %d\n", x1rect, y1rect, x2rect, y2rect);
		flag = 0;
	}
	return 0;
}

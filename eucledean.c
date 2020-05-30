#include <stdio.h>

struct Point
	{
		int a;
		int b;
	
	} p1,p2,p3;


void main()
	{
  		printf("\n Enter the first point (a1,b1): "); 
  		scanf("%d%d", &p1.a, &p1.b);
  
		printf("\n Enter the second point (a2,b2): "); 
 		scanf("%d%d", &p2.a, &p2.b);
 
	 	p3.a = p1.a + p2.a;
  		p3.b = p1.b + p2.b;
  
		printf("\n The new point after addition: \n");
  		printf("(%d, %d)\n", p3.a, p3.b);
	}

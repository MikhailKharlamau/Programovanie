#include<stdlib.h>

	typedef struct{
		float r,x,y;
	}CIRCLE;
	
	CIRCLE *new_circle(float x, float y, float z)
		{CIRCLE *C;
		 C->r=z;
		 C->x=x;
		 C->y=y;
		 return(C);		
		}
	
	main ()
	{CIRCLE *A;
	 float a,b,r;
	 
		printf("Zadaj suradnicu x stredu kruznice: ");
		scanf("%f",&a);
		printf("Zadaj suradnicu y stredu kruznice: ");
		scanf("%f",&b);
	 	printf("Zadaj polomer kruznice: ");
	 	scanf("%f",&r);
	 	A=new_circle(a,b,r);
	 	printf("suradnicu x: %f\nsuradnicu y: %f\npolomer kruznice: %f", A->x,A->y,A->r);
	}
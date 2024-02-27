#include <stdlib.h>
#include <stdio.h>

int main()
	{
		short int i=1;
		
		printf("%p\n", *(&i));
		if (*(&i)==1)
			printf("LittleEndian\n");
		else printf("BigEndian\n");	
	}
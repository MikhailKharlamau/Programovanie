#include <stdio.h>

typedef struct{
	int *a;
	int l;
} MNOZINA;

void def_a_vypis_mnozinu(int *a){
	printf("Zadaj pocet prvkov mnoziny:")
	for (int i=0; i<a->l; i++)
		{printf("%d ",a[i]);
		}
	}

main	{
	MNOZINA a;
	
	def_a_vypis_mnozinu(&a)
}
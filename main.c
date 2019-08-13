#include<stdio.h>
#include"Mymalloc.h"
int main()
{

	int *p;
	p=MyMalloc(100*sizeof(int));
	void *q=MyMalloc(250*sizeof(char));
	void *r=MyMalloc(1000*sizeof(int));
	MyFree(p);
	void *w=MyMalloc(700);
	MyFree(r);
	void *k=MyMalloc(500*sizeof(int));
	printf("Allocation and deallocation is done successfully!");

}


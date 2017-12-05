#include <stdio.h>
#include <stdlib.h>
//program to genrate random numbers
/*
 * Made by Yashasvi Goel
 * Enter the string from which words are to be extracted;
 * the output is enclosed in ':';
 * Thu Oct 12 09:05:39 IST 2017
*/
int main()
{
	int *a;
	a=(int*)malloc(50000*sizeof(int));//dynamic allocation
	for(int i=0;i<50000;i++)
		a[i]=rand();
	for(int i=0;i<50000;i++)
		printf("%d\n",a[i]);
	return 0;
}

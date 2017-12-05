#include <stdio.h>
#include <stdlib.h>
/*
 * Made by Yashasvi Goel
 * Enter the string from which words are to be extracted;
 * the output is enclosed in ':';
 * Thu Oct 12 09:05:39 IST 2017
*/
int compare(const void *a,const void *b)
{
	return ( *(int*)a -*(int*)b);
}
int main()
{
	int n;
	scanf("%d",&n);
	int *a;
	a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),compare);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}

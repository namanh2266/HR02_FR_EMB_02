#include<stdio.h>
#define MAX 10

void Init(int Array[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		Array[i]=i+4;
	}
}


int Print(int Array[], int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d  ",Array[i]);
	}
}

int main()
{
	int Array[MAX]={4,9,6,8,2,5,7,1,0,3};
	Print(Array,MAX);

	printf("\nloi branch 1 1 1");
	printf("\nloi branch 1 1 1");

	printf("\nloi branch 2");
	printf("\nloi branch 2");
}

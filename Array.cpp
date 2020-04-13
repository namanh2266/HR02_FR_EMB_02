#include<stdio.h>
#define MAX 10


void SapXepTang(int Array[], int n){
	int i,j,temp;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(Array[j]<Array[i]){
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
}

void SapXepGiam(int Array[], int n){
	int i,j,temp;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(Array[j]>Array[i]){
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
}

int Print(int Array[], int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d  ",Array[i]);
	}
	
	printf("conflitc Brach 01 o day");
}

int main()
{
	int Array[MAX]={4,9,6,8,2,5,7,1,0,3};
	SapXepTang(Array,MAX);
	Print(Array,MAX);
	
}

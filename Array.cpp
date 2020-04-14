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
	
	printf("\n");
}

int main()
{
	int Array[MAX]={4,9,6,8,2,5,7,1,0,3};
	Print(Array,MAX);
	printf("sap xep tang\n");
	SapXepTang(Array,MAX);
	Print(Array,MAX);
	printf("sap xep giam\n");
	SapXepGiam(Array,MAX);
	Print(Array,MAX);
	
	printf("branch 22");
	printf("branch 22");
}

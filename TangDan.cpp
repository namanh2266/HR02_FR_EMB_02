#include<stdio.h>

void SapXepTang(int Array[], int n){
	int i,j,temp;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[j]<a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

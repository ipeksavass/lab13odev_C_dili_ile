#include <stdio.h>
#define size 10

void function1(int[]);
int main(){
	int array[size],i;
	for( i=0;i<size;i++){
		printf("lutfen bir deger giriniz=");
		scanf("%d",&array[i]);
	}
	function1(array);
	
	return 0;
}

void function1 (int A[])
{
	int i;
	int max=0,max2;
	for(i=0;i<size;i++){
		if(A[i]>max){
		max2=max;
		max=A[i];
		}
	}
	printf("%d %d",max,max2);
		
		
		
		
}


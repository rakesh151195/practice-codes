#include<stdio.h>
void main(){
	int n,i,j,k=0;
	printf("number of enement you want\n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter element:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("given array is:");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
	
	printf("\n");
	printf("result:");
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<n;j++){
			if(arr[i] < arr[j]){
			k=k+1;
			}
		}
		if(k>=2){
		 printf(" %d ",arr[i]);
		}
	}
}
//output
/*
number of enement you want: 7
enter element :2 -1 3 4 8 7 -5
given array is:2-1 3 4 8 7-5
result: 2  -1  3  4  -5

//compalicity = n^2

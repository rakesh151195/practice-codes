#include<stdio.h>
void main(){
	int n,sum=0,sum1=0,rem,p,first,last,i;
	printf("enter number :");
	scanf("%d",&n);
	p=n;
	while(p!=0){
		rem=p % 10;
		sum=rem + sum;
		p = p/10;
	}
	printf("sum of number is :%d\n",sum);
	printf("enter the range ");
          scanf("%d",&first);
          scanf("%d",&last);
          for(i=first;i<=last;i++){
		p=i;
		sum1=0;
		while(p!=0){
                  rem=p % 10;
                  sum1=rem + sum1;
                  p = p/10;
          }      
	if(sum1==sum)
	printf("%d\t",i);
}

}

// output:

/*
enter number :355
sum of number is :13
enter the range 10 100
49	58	67	76	85	94	

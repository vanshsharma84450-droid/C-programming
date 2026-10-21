#include<stdio.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	int n,a=(rand()%50)+1;;;
	for(int i=1;i<=1000;i++){
	
	printf("ENter Number= ");
	scanf("%d",&n);
	if(n==a){
		printf("YEHHHH YOU WILL PAAS=%d",n);
		break;}
	else if(n<a){
		printf("you are small\n");
	}

	
	else if(n>a){
		printf("N is very big number\n");
		//continue ;
}}
return 0;}

#include<stdio.h>
int fact(int n ){
	if(n==0){
		return 1;
	}
	else if (n<0){
	return -1;
	}
	else{
		return  n*fact(n-1);
	}
}
int main(){
	int n,result;
	printf("enter the num for fact :");
	scanf("%d",&n);
	result=fact(n);
	 if (result != -1) {
        printf("Factorial of %d is %d\n", n, result);
}
return 0;
}


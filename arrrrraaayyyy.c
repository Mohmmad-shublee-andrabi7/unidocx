#include<stdio.h>
int main(){
	int arr[100],n,k,val,i;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	
		scanf("%d",&arr[i]);
		printf("enter position to delete (1 to %d):",n);
		scanf("%d",&k);
		int deleted=arr[k-1];
	 for(i=k-1;i<n-1;i++)
	 	arr[i]=arr[i+1];
	 	
		 n--;
		 
	 printf("array after deletion:\n");
	 for(i=0;i<n;i++)
	 printf("%d",arr[i]);
	 return 0; 
}

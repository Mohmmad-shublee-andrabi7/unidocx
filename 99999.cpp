include<stdio.h>
int main(){
	int arr[100],n,k,val,i;
	printf("enter the number of elements");
	scanf("%d",&n)
;
	printf("enter %d elements");
	for(i=0;i<n;i++)
	
		scanf("%d",&arr[i]);
		printf("enter position to insert (1 to %d):",n+1);
		scanf("%d",&k);
		printf("enter value to insert");
		scanf("%d",&val);
	 for(i=n;i>=k;i--)
	 
	 	arr[k-1]=val;
		 n++;
		 
	 printf("array after insertion:\n");
	 for(i=0;i<n;i++)
	 printf("%d",arr[i]);
	 return 0; 
}

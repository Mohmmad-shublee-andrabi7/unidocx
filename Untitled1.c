#include<stdio.h>
int main(){
int i,n,size,k;
int arr[size];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[size]);
}
printf("enter k to insert at the begining");
for(i=1;i>k;i--){
    arr[i+1]=arr[i];
}
arr[k-1]= k;
n++;
printf("elements after insertion at begining\n");
for(i=0;i<n;i++){
    printf("%d",n);}
return 0;
}

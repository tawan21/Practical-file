//Program to implement Bubblesort

#include<stdio.h>  
int main()  
{  
int a[20],i,n,k,temp;  
printf("\nEnter size of array:  ");  
scanf("%d",&n);  
  
printf("\nEnter %d elements of array.\n",n);  
  
for(i=0;i<n;i++)  
scanf("%d",&a[i]);  
  
for(k=0;k<n-1;k++)  
{  
for(i=0;i<n-k-1;i++)  
{  
if(a[i]>a[i+1])  
{  
temp=a[i];  
a[i]=a[i+1];  
a[i+1]=temp;  
}  
}  
}  
printf("\nArray elements after sorting..\n");  
for(i=0;i<n;i++)  
printf("%d ",a[i]);  
  
printf("\n");  
  
return 0;  
}

//Code written by Tawanjot Singh ;')

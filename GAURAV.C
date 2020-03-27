//C program for minimum scalar product
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],b[10],n,i,c,d,temp1,temp2,sum=0;
clrscr();
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the values in the first array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements in the second array:");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(c=0;c<n-1;c++)
{
for(d=0;d<n-1-c;d++)
{
if(a[d+1]<a[d])
{
temp1 = a[d];
a[d] = a[d+1];
a[d+1] = temp1;
}
if(b[d+1]>b[d])
{
temp2=a[d];
a[d]=a[d+1];
a[d+1]=temp2;
}
}
}
printf("The minimum scalar product of the two arrays is :");
for(i=0;i<n;i++)
{
sum = sum+(a[i]*b[i]);
}
printf("%d",sum);
return 0;
}


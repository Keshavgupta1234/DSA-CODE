#include<stdio.h>
int main()
{
    printf("Keshav Gupta\n");
    int a[20],n,k,item,i;
    void delete(int a[],int *,int k);
    printf("Enter number of elements(<=20)=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{ 
printf("Enter element a[%d=",i);
scanf("%d",&a[i]);   
}
printf("Enter position of element you want to delete:");
scanf("%d",&k);
delete(a,&n,k-1);
printf("elements after deletion:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void delete(int a[],int *size1,int k)
{
    int n1=*size1;
    int i;
    for(i=k;i<=n1-2;i++)
    a[i]=a[i+1];
    *size1=*size1-1;
}
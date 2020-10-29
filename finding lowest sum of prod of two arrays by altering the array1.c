Find the lowest sum of products of two arrays by altering only the first array k times(get from the user) by either increasing or decreasing an element by 2.
Eg:
input: 3(n) 5(k)
arr1: 1 2 -3
arr2: -2 3 -5
Output: -31

Note for self(not given in the question): The effects of modifying the same element k times is greater than modifying different elements each time.

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
int n,k,*arr1,*arr2,index;
int min=INT_MAX;/*instead min=sum can be given, sum will be calculated in the later part*/
scanf("%d %d",&n,&k);
arr1=(int*)malloc(n*sizeof(int));
arr2=(int*)malloc(n*sizeof(int));
for(index=0;index<n;index++)
scanf("%d",&arr1[index]);

for(index=0;index<n;index++)
scanf("%d",&arr2[index]);
for(index=0;index<n;index++)
sum=sum+arr1[index]*arr2[index];
for(index=0;index<n;index++)
{

int increase=(arr1[index]+2*k)*arr2[index];
int decrease=(arr1[index]-2*k)*arr2[index];
int choice=(increase<decrease)?increase:decrease;
int mulindex,sum=0;
int currsum,originalproduct;
originalproduct=arr1[index]*arr2[index];
currsum=sum-originalproduct;
currsum=currsum+choice;
/*for(mulindex=0;mulindex<mulindex++)
{
if(mulindex==index)
   sum=sum+choice*arr2[index];
else
    sum=sum+arr1[mulindex]*arr2[mulindex];
}*/
min=(currsum<min)?currsum:min;
}
printf("%d",min);
return 0;
}
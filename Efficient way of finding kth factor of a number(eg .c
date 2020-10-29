
Find the kth largest factor of a number N.
Eg: input: 36(N) 2(k)
output: 18
explaination:
factors of 36: 1, 2, 3, 4, 6, 9,12, 18, 36 
2nd largest factor is : 18

//method 1
#include<stdio.h>
int main()
{
int n,count=0,factor,k,total;
scanf("%d,%d",&n,&k);
for(factor=n;facotr>=1;factor--)
{
if(n%factor==0){
count++;
if(count==k)
{
printf("%d",factor);
break;
}
}
}
if(k>count)
printf("1");
return 0;
}
method 2
#include<stdio.h>
int main()
{
int n,factor,setA[100],setB[100];
scanf("%d,%d",&n,&k);
int acount=0,bcount=0;
for(factor=1;factor<=sqrt(n);factor++)
{
int b;
if(n%factor==0)
{
 setA[acount]=factor;

 b=n/setA[acount];
if(setA[acount]!=b){
setB[bcount]=b;
acount++;
}
bcount++;
}
}
total=acount+bcount;
if(k>total)
{
if(k<=bcount)
printf("%d",setB[k-1]);
else{
k=k-bcount;
printf("%d",setA[acount-k]);
}
}
else
printf("1");
}
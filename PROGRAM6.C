#include<stdio.h>
#include<stdlib.h>
void Union(int set1[10],int set2[10],int m,int n);
void intersection(int set1[10],int set2[10],int m,int n);
void main()
{
int a[10],b[10],m,n,i,j;
int ch;
clrscr();
printf("\n enter the number of element in first set:");
scanf("%d",&m);
printf("\n enter the  element:");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("\n element of first set:");
for(i=0;i<m;i++)
{
printf("%d",a[i]);
}
printf("\n enter the number of element in second set:");
scanf("%d",&n);
printf("\n enter the element:");
for(i=0;i<n;i++)
{
 scanf("%d",&b[i]);
 }
 printf("\n element of second set");
 for(i=0;i<n;i++)
 {
 printf("%d",b[i]);
 }
 for(;;)
 {
 printf("\n menu\n 1.unioin 2.intersection");
 printf("\n 3.exit");
 printf("\n enter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 Union(a,b,m,n);
 break;
  case 2:
 intersection(a,b,m,n);
 break;
 case 3:
 exit(0);
 }
 }
 }
void Union(int a[10],int b[10],int m,int n)
 {
 int c[20],i,j,k=0,flag=0;
 for (i=0;i<m;i++)
 {
 c[k]=a[i];
 k++;
}

for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<m;j++)
{
if(b[i]==c[j])
{
flag=1;
break;
}
}
if(flag==0)
{
c[k]=b[i];
k++;
}
}
printf("\n element of resultant set \n");
for(i=0;i<k;i++)
{
printf("\t%d",c[i]);
}
}
 void intersection(int a[10],int b[10],int m,int n)
 {
 int c[20],i,j,k=0,flag=0;
 for (i=0;i<m;i++)
 {
flag=0;
for(j=0;j<n;j++)
{
if (a[i]==b[j])

{
flag=1;
break;
}
}
if(flag==1)
{
c[k]=a[i];
k++;
}
}
if(k==0)
{
printf("\n element set is null set");
}
else
{
printf("\n element of resultant set ");
for(i=0;i<k;i++)
{
printf("\t%d",c[i]);
}
}
}



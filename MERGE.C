#include<stdio.h>
#include<conio.h>
int main()
{
 int arr1[50],arr2[50],size1,size2,i,k,merge[100];
 clrscr();
 printf("enter the arr1 size");
 scanf("%d",&size1);
 printf("array of 1 element");
 for(i=0;i<size1;i++)
 {
  scanf("%d",&arr1[i]);
  merge[i]=arr1[i];
  }
  k=i;
  printf("\n enter arrary2 size2");
  scanf("%d",&size2);
  printf("array of 2 element");
  for(i=0;i<size2;i++)
  {
  scanf("%d",&arr2[i]);
  merge[k]=arr2[i];
  k++;
  }
  printf("the new array after merging");
  for(i=0;i<k;i++)
  printf("%d",merge[i]);
  getch();
  return 0;
  }

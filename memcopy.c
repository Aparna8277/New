//Usage of memcopy
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

  int arr[3][2][2]={{{1,2},{3,7}},{{3,0},{6,9}},{{1,7},{2,8}}};
  int p[3][2][2];
  memcpy(p,arr,sizeof(arr));
  for(int i=0;i<3;i++)
  {
  for(int j=0;j<2;j++)
  {
  for(int k=0;k<2;k++)
  { 
   printf("%d ",p[i][j][k]);
  }
   printf("\n");
  }
  printf("\n\n");
  }
  return 0;
  }

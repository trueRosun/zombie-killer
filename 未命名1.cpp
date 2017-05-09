#include<stdio.h>
#define N 20
main(void)
{ int a[N];
int i;
 for(i=0;i<N;i++) {scanf("%d",&
 a[i]);
 } 
 for(i=0; i<N;i++)
 {  if (i!=0&&i%4==0) printf("\n");
 
printf("%3d",a[i]);
         }
}


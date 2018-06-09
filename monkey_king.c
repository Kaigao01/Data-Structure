#include<stdio.h>
#include<stdlib.h>
int main(){ 
  int a[1000]; 
  int m=0,n=0,x=0,count=0,i; 
  printf("Please input the number of monkeys and the deleted monkey's serial number:"); 
  scanf("%d,%d",&m,&n);
  count=m; 
  for(i=0;count>1;i++){ 
    //use ‘count’ ensure the monkey's amount 
    if(a[i%m]!=0) 
    //（i%m）————（0~~m-1）ensure the monkey's amount 
       x++;
    if(x%n==0&&a[i%m]!=0){
       //go (m-1) times a[i%m]=0; 
       count--; 
     } 
   } 
   for(i=0;i<m;i++) 
       if(a[i]!=0) 
           printf("The %d monkey is the king!\n",i+1); 
    return 0; 
 }

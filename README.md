# Data-Structure
The typical exercise problems
1.一堆猴子都有编号，编号是1，2，3 ...m，这群猴子（m个）按照1-m的顺序围坐一圈，从第1开始数，每数到第n个，该猴子就要离开此圈，这样依次下来，直到圈中只剩下最后一只猴子，则该猴子为大王。
要求：m及n要求从键盘输入，存储方式采用向量及链表两种方式实现该问题求解
(1)向量法
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[1000];
	int m=0,n=0,x=0,count=0,i;
	printf("Please input the number of monkeys and the deleted monkey's serial number:");
	scanf("%d,%d",&m,&n);
	count=m;
	for(i=0;count>1;i++){         //use ‘count’ ensure the monkey's amount
		if(a[i%m]!=0)              //（i%m）————（0~~m-1）ensure the monkey's amount
            x++;
		if(x%n==0&&a[i%m]!=0){      //go (m-1) times
		    a[i%m]=0;
		    count--;
        }
}
	for(i=0;i<m;i++)
		if(a[i]!=0)
			printf("The %d monkey is the king!\n",i+1);
		return 0;
}


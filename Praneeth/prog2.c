#include<stdio.h>
#include<time.h>
int main(){
clock_t start,end;
int a[10];
int sum=0;
int num;
printf("Enter no of sq in matrix\n");
scanf("%d",&num);
int i=0;
start=clock();
for(i=num;i>0;i--)
{
sum=sum+i*i;
}
end=clock();
printf("The sum of sq in matrix is %d\n",sum);
printf("Time Taken for execution of the prog is %lf \n",(double)(end-start)/CLOCKS_PER_SEC);
}


#include<stdio.h>
int main()
{
char a[5];
char b[5];
printf("Enter data for 1st string\n");
scanf("%s",a);
printf("Enter data for  2ndstring\n");
scanf("%s",b);
int i;
char ans[5]={};
for(i=0;i<5;i++){
if(a[i]==b[i])
ans[i]='0';
else
ans[i]='1';
}

printf("Answer" ) ;
for(i=0;i<5;i++)
{
printf("%c",ans[i]);
}
}


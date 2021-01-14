#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    scanf("%d",&n);
  n = n ? ((n=n%9) ? n : 9) : 0;
printf("%d",n);
getch();
return 0;
}
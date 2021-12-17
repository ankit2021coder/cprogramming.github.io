#include<stdio.h>
#include<conio.h>
	  int sum(int x,int y);
	  int sub(int x,int y);
	  int mul(int x,int y);
void main(){

int a,b,res,res1,res2;
clrscr();
   scanf("%d%d",&a,&b);
  res=sum(a,b);
  printf("\nThe sum is : %d ",res);
  res1=sub(a,b);
  printf("\nThe subtraction is : %d",res1);
  res2=mul(a,b);
  printf("\nThe multiplication is : %d",res2);
getch();

}
int sum(int x,int y){
//int z=x+y;
return x+y;
}
int sub(int x,int y){
return x-y;
}
int mul(int x,int y){
return x*y;
}
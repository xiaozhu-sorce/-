/*使用三种方法实行整数型变量之间的交换*/
#include<stdio.h>
void swap1(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void swap2(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void swap3(int *a, int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main (void){
    int a=1,b=2;
    printf("a=%d",a);
    printf("b=%d\n",b);
    swap1(&a,&b);
    printf("整数A：%d",a); 
    printf("整数B：%d\n",b); 
    swap2(&a,&b);
    printf("整数A：%d",a); 
    printf("整数B：%d\n",b); 
    swap3(&a,&b);
    printf("整数A：%d",a); 
    printf("整数B：%d\n",b); 
    return  0;
}
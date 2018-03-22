#include <stdio.h>  
  
int main(int argc, const char * argv[]) {  
    int a,b,c;  
    int i=0;  
    printf("\nabc+cba=1333\n\n");  
    for (int x=100; x<=999; x++) {  
        a=x/100;  
        b=x/10%10;  
        c=x%10;  
        if(c*100+b*10+a+x==1333){  
            printf("a=%d,b=%d,c=%d\n",a,b,c);  
            i++;  
        }  
    }  
    printf("共%d个组合\n",i);  
    return 0;  
}  
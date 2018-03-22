#include <stdio.h>  
int main(int argc, const char * argv[]) {  
char String [1000];  
printf("输入一个字符串\n");  
scanf("%s",String);  
for (int i=0; String[i]!='\0'; i++) {  
    if (String[i]>='a'&&String[i]<='z') {  
        String[i]+=3;  
        if (String[i]>'z') {  
            String[i]=String[i]-26;  
        }  
    }  
    if (String[i]>='A'&&String[i]<='Z') {  
         String[i]+=3;  
        if (String[i]>'Z') {  
            String[i]=String[i]-26;  
        }  
  
    }  
}  
printf("加密之后\n%s",String);  
return 0;  
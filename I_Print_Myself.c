#include <stdio.h>
#include <stdlib.h>
//Sajad Alipour
int main(){
    char a[]="#include<stdio.h>%c#include<stdlib.h>%c//Sajad Alipour%cint main(){%c%cchar a[]=%c%s%c%c%c%c";
    char b[]="char b[]=%c%s%c%c%c%c";
    printf(a,10,10,10,10,9,34,a,34,59,10,9);
    printf(b,34,b,34,59,10,9);
    char c[]="printf(a,10,10,10,10,9,34,a,34,59,10,9);%c%cprintf(b,34,b,34,59,10,9);%c%cchar c[]=%c%s%c%c%c%c";
    printf(c,10,9,10,9,34,c,34,59,10,9);
    int i=0;
    float k=1;
    double j=4;
    char d[]="printf(c,10,9,10,9,34,c,34,59,10,9);%c%cint i=0;%c%cfloat k=1;%c%cdouble j=4;%c%cchar d[]=%c%s%c%c%c%c";
    printf(d,10,9,10,9,10,9,10,9,34,d,34,59,10,9);
    for(i=0;i<j;i++)
        k--;
    char e[]="printf(d,10,9,10,9,10,9,10,9,34,d,34,59,10,9);%c%cfor(i=0;i<j;i++)%c%c%ck--;%c%cchar e[]=%c%s%c%c%c%c";
    printf(e,10,9,10,9,9,10,9,34,e,34,59,10,9);
    while(i>=0)
        i--;
    char f[]="printf(e,10,9,10,9,9,10,9,34,e,34,59,10,9);%c%cwhile(i>=0)%c%c%ci--;%c%cchar f[]=%c%s%c%c%c%c";
    printf(f,10,9,10,9,9,10,9,34,f,34,59,10,9);
    char g[]="printf(f,10,9,10,9,9,10,9,34,f,34,59,10,9);%c%cchar g[]=%c%s%c%c%c%cprintf(g,10,9,34,g,34,59,10,9,10,9,10)%c%creturn 0;%c}";
    printf(g,10,9,34,g,34,59,10,9,10,9,10);
    return 0;
}

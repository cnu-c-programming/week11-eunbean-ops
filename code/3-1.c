#include <stdio.h>

typedef int (*BinOp)(int, int);

int add(int a, int b){ return a+b;}
int mul(int a, int b){ return a *b;}
int sub(int a, int b){ return a-b;}

int computer(int a, int b, BinOp op){
    if(op==NULL){
        printf("Null pointer\n");
        return -1;
    }else {
    return op(a,b);
    }

}

int main(void){
    int a=10, b=5;

    printf("%d\n", computer(a,b,add));
    printf("%d\n", computer(a,b,sub));
    printf("%d\n", computer(a,b,mul));
    printf("%d\n", computer(a,b,NULL));

    return 0;
}

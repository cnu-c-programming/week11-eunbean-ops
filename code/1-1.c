#include<stdio.h>

typedef struct Point{
int x;
int y;
} point;

int main(){
    point p ={1,2};
    printf("%d %d\n", p.x, p.y);

    return 0;
}

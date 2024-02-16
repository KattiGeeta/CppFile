#include<stdio.h>
int f(int i){
    return ++i;
}
int main (void)
{
    int i = 0;
    i = f(f(1));
    printf("%d", i);
    return 0;
}
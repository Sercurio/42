#include <unistd.h>

void ft_swap(int*, int*);

int main(void){
    int a = 20;
    int b = 40;

    int *ptr_a = &a;
    int *ptr_b = &b;

    ft_swap(ptr_a, ptr_b);
    return 0;
}

void ft_swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


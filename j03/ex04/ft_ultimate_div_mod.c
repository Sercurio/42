#include <unistd.h>

void ft_ultimate_div_mod(int*, int*);

int main(void){
    int init_ptr1 = 19;
    int init_ptr2 = 2;

    int *a = &init_ptr1;
    int *b = &init_ptr2;

    ft_ultimate_div_mod(a, b);

    return 0;
}

void ft_ultimate_div_mod(int *a, int *b){
    int temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}

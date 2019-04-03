#include <unistd.h>

void ft_div_mod(int, int, int*, int*);

int main(void){
    int a = 10;
    int b = 3;

    int init_ptr1 = 0;
    int init_ptr2 = 0;

    int *div = &init_ptr1;
    int *mod = &init_ptr2;

    ft_div_mod(a, b, div, mod);

    return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

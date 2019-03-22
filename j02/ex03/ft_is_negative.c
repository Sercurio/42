#include <unistd.h>

void ft_putchar(char);
void ft_is_negative(int n);

int main(void){
    ft_is_negative(2147483648);
    return 0;
}

void ft_is_negative(int n){
    if(n >= 0 && n <= 2147483647)
        ft_putchar('P');
    else if(n < 0 && n >= -2147483647)
        ft_putchar('N');
    else
        ft_putchar('0');
}

void ft_putchar(char c){
    write(1, &c, 1);
}

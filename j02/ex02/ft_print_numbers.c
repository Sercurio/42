#include <unistd.h>

void ft_putchar(char);
void ft_print_numbers(void);

int main(void){
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void){
    int i = 0;

    while(i <= 9){
        ft_putchar(i++ + '0');
    }
}

void ft_putchar(char c){
    write(1, &c, 1);
}
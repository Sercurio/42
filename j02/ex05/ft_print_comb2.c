#include <unistd.h>

void ft_putchar(char);
void ft_print_comb2(void);

int main(void){
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void){
    int i = 0;
    int j = 0;

    while(i <= 98){
        j = i + 1;
        while(j <= 99){
            ft_putchar(i / 10 + '0');
            ft_putchar(i % 10 + '0');
            ft_putchar(' ');
            ft_putchar(j / 10 + '0');
            ft_putchar(j++ % 10 + '0');
            ft_putchar('\n');
        }
        i++;
    }
}

void ft_putchar(char c){
    write(1, &c, 1);
}

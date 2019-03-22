#include <unistd.h>

void ft_putchar(char);
void ft_print_comb(void);

int main(void){
    ft_print_comb();
    return 0;
}

void ft_print_comb(void){
    int i = 0;
    int j = 1;
    int k = 2;

    while(i <= 7){
        j = i + 1;
        while(j <= 8){
            k = j + 1;
            while(k <= 9){
                ft_putchar(i + 48);
                ft_putchar(j + 48);
                ft_putchar(k++ + 48);
                ft_putchar(',');
                ft_putchar(' ');
            }
            j++;
        }
        i++;
    }
}

void ft_putchar(char c){
    write(1, &c, 1);
}

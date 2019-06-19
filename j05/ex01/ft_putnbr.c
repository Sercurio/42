#include <unistd.h>

void ft_putnbr(int);
void ft_putchar(char);

int main(void){
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483647);
    ft_putchar('\n');
    ft_putnbr(0);
    return 0;
}

void ft_putnbr(int n){
    char tab[12];
    tab[11] = '\0';
    int i = 10;
    int negatif = 0;

    if(n < 0){
        n *= -1;
        negatif = 1;
    }
    else if(n == 0)
        ft_putchar('0');

    while(n != 0){
        tab[i--] = n % 10 + '0';
        n /= 10;
    }
    negatif ? tab[i] = '-' : i++;

    while(tab[i] != '\0')
        ft_putchar(tab[i++]);

}

void ft_putchar(char c){
    write(1, &c, 1);
}

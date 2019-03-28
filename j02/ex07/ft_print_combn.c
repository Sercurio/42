#include <unistd.h>

void ft_putchar(char);
void ft_print_combn(int);
void ft_putnbr(int);

int main(void){
    ft_print_combn(8);
    return 0;
}

void ft_print_combn(int n){
    char tab[n + 1];
    int i = n - 1;
    int nbr = 0;
    int repetition = 0;
    int temp;

    tab[n] = '\0';

    int limites[11]={0,9,89,789,6789,56789,456789,3456789,23456789,123456789};
    int limite = limites[n];

    while(i >= 0){
        tab[i] = i + '0';
        i--;
    }

    i = 0;
    while(i < n - 1){
        nbr += tab[i] - 48;
        nbr *= 10;
        i++;
    }

    while(nbr <= limite){
        temp = nbr;
        repetition = 0;
        while(temp != 0){
            tab[i--] = temp % 10 + '0';
            temp /= 10;
        }
        while(i++ < n){
            if(tab[i] >= tab[i + 1])
                repetition = 1;
        }
        if(!repetition){
            ft_putnbr(nbr);
            ft_putchar('\n');
            compteur++;
        }
        nbr++;
    }
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

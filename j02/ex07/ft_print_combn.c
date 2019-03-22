#include <unistd.h>

void ft_putchar(char);
void ft_print_combn(int);
void ft_putnbr(int);

int main(void){
    ft_print_combn(4);
    return 0;
}

void ft_print_combn(int n){
    char tab[12];
    tab[11] = '\0';
    int i = 10;
    int min_i = (i) - n;
    int max_i = 10;
    int temp= min_i;
    int nbr = 0;
    int repetition = 0;
    int mod;

    int limites[11]={0,9,89,789,6789,56789,456789,3456789,23456789,123456789};
    int limite = limites[n];

    i = min_i;
    int j=0;
    while(tab[i] != '\0'){
        tab[i++] = j++ + '0';
        nbr += 
    }
    j = min_i;


    while(tab[j] != '\0'){
        ft_putchar(tab[j++]);
    }
    /*
    nbr = j - 48;
    temp = nbr;
    ft_putchar(nbr + '0');
    while(nbr <= limite){
        while(temp != 0 && mod != 0){
            mod = temp % 10 + '0';
            tab[i--] = mod;
            temp /= 10;
            ft_putchar(tab[i]);
            ft_putchar('\n');
        }
        i = min_i;
        temp = tab[i];
        while(tab[i++] != '\0'){
            if(temp > tab[i])
                repetition = 1;
            else
                repetition = 0;
        }
        if(!repetition){
            i = min_i;
            while(tab[i] != '\0'){
                ft_putchar(tab[i++]);
                ft_putchar('\n');
            }
        }
        i=max_i;
        nbr++;
    }*/
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

#include <unistd.h>

int ft_fibonnaci(int);

int main(void){
    ft_fibonnaci(8);

    return 0;
}

int ft_fibonnaci(int nb){
    if(nb < 0)
        nb = -1;
    else if(nb >= 0 && nb <= 2)
        nb = 1;
    else
        nb = ft_fibonnaci(nb - 1) + ft_fibonnaci(nb - 2);

    return nb;
}

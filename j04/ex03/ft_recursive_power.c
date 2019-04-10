#include <unistd.h>

int ft_recursive_power(int,int);

int main(void){
    printf("%d", ft_recursive_power(5, 3));

    return 0;
}

int ft_recursive_power(int nb, int power){
    if(power < 0)
        nb = 0;
    else if(power == 0)
        nb = 1;
    else if(power > 1)
        nb *= ft_recursive_power(nb, power - 1);

    return nb;
}

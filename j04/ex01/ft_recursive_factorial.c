#include <unistd.h>

int ft_recursive_factorial(int);

int main(void){
    ft_recursive_factorial(6);

    return 0;
}

int ft_recursive_factorial(int nb){
    if(nb < 0)
        return -1;
    else if(nb != 1)
        nb *= ft_recursive_factorial(nb - 1);

    return nb;
}

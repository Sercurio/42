#include <unistd.h>

int ft_iterative_factorial(int);

int main(void){
    ft_iterative_factorial(2);
    ft_iterative_factorial(-2);

    return 0;
}

int ft_iterative_factorial(int nb){
    int i = nb;

    if(i < 0)
        nb = -1;

    while(i >= 0)
        nb *= i--;

    return nb;
}

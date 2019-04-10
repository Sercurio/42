#include <unistd.h>

int ft_iterative_power(int, int);

int main(void){
    ft_iterative_power(-2, 0);
}

int ft_iterative_power(int nb, int power){
    int i = 1;
    int temp = nb;
    if(power < 0)
        nb = 0;
    else if(power == 0)
        nb = 1;
    else{
        while(i++ != power)
            nb *= temp;
    }
    return nb;
}

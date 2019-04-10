#include <unistd.h>

int ft_is_prime(int);

int main(void){
    ft_is_prime(10141);

    return 0;
}

int ft_is_prime(int nb){
    int i = 2;
    int bool = 0;

    while(i < nb && bool == 0){
        if(nb % i == 0)
            bool = 1;
        else
            i++;
    }
    return bool == 1 ? 0 : 1;
}

#include <unistd.h>

int ft_is_prime(int);
int ft_find_next_prime(int);

int main(void){
    ft_find_next_prime(49999);

    return 0;
}

int ft_find_next_prime(int nb){
    nb += 1;
    while(ft_is_prime(nb) == 0){
        nb++;
    }

    return nb;
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

#include <unistd.h>

void ft_ft(int*);

int main(void){
    int nbr = 0;
    int *ptr = &nbr;

    ft_ft(ptr);
    return 0;
}

void ft_ft(int *nbr){
    *nbr = 42;
}

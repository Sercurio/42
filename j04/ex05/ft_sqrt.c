#include <unistd.h>

int ft_sqrt(int);

int main(void){
    ft_sqrt(71608944);

    return 0;
}

int ft_sqrt(int nb){
    int i = 0;
    int bool = 0;

    while(i != nb){
        if(i * i == nb){
            nb = i;
            bool = 1;
        }
        else
            i++;
    }
    return bool == 1 ? nb : 0;
}

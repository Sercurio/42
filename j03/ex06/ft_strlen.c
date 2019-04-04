#include <unistd.h>

int ft_strlen(char*);

int main(void){
    char str[24]= "vim for the master race";

    ft_strlen(str);

    return 0;
}

int ft_strlen(char* str){
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

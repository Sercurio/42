#include <unistd.h>

int ft_atoi(char*);

int main(){
    ft_atoi(str1);
    ft_atoi(str2);
    ft_atoi(str3);
    return 0;
}

int ft_atoi(char* str){
    int i = 0;
    int nbr = 0;

    while(*str != '\0'){
        if(*str >= 48 && *str <= 57){
            nbr += *str - 48;
            nbr *= 10;
        }
        else
            return 0;
        str++;
    }
    nbr /= 10;
    return nbr;
}

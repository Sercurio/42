#include <unistd.h>

char* ft_strlowcase(char*);

int main(){
    char str[] = "pOuEt pouet CAMEMBERT";

    ft_strlowcase(str);

    return 0;
}

char* ft_strlowcase(char* str){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
        i++;
    }
    return str;
}

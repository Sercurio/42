#include <unistd.h>

char* ft_strupcase(char*);

int main(){
    char str[] = "pOuEt pouet CAMEMBERT";

    ft_strupcase(str);

    return 0;
}

char* ft_strupcase(char* str){
    int i = 0;
    
    while(str[i] != '\0'){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
        i++;
    }
    return str;
}

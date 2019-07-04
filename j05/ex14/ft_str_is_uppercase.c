#include <unistd.h>

int ft_str_is_uppercase(char*);
int ft_char_is_uppercase(char);

int main(void){
    printf("%d",ft_str_is_uppercase("TEST"));
    printf("%d",ft_str_is_uppercase(""));
    printf("%d",ft_str_is_uppercase("sdgf2"));
    printf("%d",ft_str_is_uppercase("256456"));
    return 0;
}



int ft_str_is_uppercase(char* str){
    int bool = 1;

    while(*str != '\0' && bool == 1){
        if(!ft_char_is_uppercase(*str))
            bool = 0;
        str++;
    }
    return bool;
}

int ft_char_is_uppercase(char c){
    if((c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}

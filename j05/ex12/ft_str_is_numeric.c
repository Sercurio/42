#include <unistd.h>

int ft_str_is_numeric(char*);
int ft_char_is_numeric(char);

int main(void){
    printf("%d",ft_str_is_numeric("test"));
    printf("%d",ft_str_is_numeric(""));
    printf("%d",ft_str_is_numeric("sdgf2"));
    printf("%d",ft_str_is_numeric("256456"));
    return 0;
}



int ft_str_is_numeric(char* str){
    int bool = 1;

    while(*str != '\0' && bool == 1){
        if(!ft_char_is_numeric(*str))
            bool = 0;
        str++;
    }
    return bool;
}

int ft_char_is_numeric(char c){
    if((c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

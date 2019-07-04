#include <unistd.h>

int ft_str_is_lowercase(char*);
int ft_char_is_lowercase(char);

int main(void){
    printf("%d",ft_str_is_lowercase("tDest"));
    printf("%d",ft_str_is_lowercase(""));
    printf("%d",ft_str_is_lowercase("sdgf"));
    printf("%d",ft_str_is_lowercase("256456"));
    return 0;
}



int ft_str_is_lowercase(char* str){
    int bool = 1;

    while(*str != '\0' && bool == 1){
        if(!ft_char_is_lowercase(*str))
            bool = 0;
        str++;
    }
    return bool;
}

int ft_char_is_lowercase(char c){
    if((c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0;
}

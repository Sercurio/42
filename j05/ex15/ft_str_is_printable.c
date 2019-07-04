#include <unistd.h>

int ft_str_is_printable(char*);
int ft_char_is_printable(char);

int main(void){
    printf("%d",ft_str_is_printable("\x01\x05\x0a\x15"));
    printf("%d",ft_str_is_printable(""));
    printf("%d",ft_str_is_printable("sdgf2"));
    return 0;
}



int ft_str_is_printable(char* str){
    int bool = 1;

    while(*str != '\0' && bool == 1){
        if(!ft_char_is_printable(*str))
            bool = 0;
        str++;
    }
    return bool;
}

int ft_char_is_printable(char c){
    if((c >= 31 && c <= 126))
        return 1;
    else
        return 0;
}

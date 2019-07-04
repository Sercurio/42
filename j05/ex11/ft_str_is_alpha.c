#include <unistd.h>

int ft_str_is_alpha(char*);
int ft_char_is_alpha(char);

int main(void){
    printf("%d",ft_str_is_alpha("test"));
    printf("%d",ft_str_is_alpha(""));
    printf("%d",ft_str_is_alpha("sdgf2"));

}



int ft_str_is_alpha(char* str){
    int bool = 1;

    while(*str != '\0' && bool == 1){
        if(!ft_char_is_alpha(*str))
            bool = 0;
        str++;
    }
    return bool;
}

int ft_char_is_alpha(char c){
    if((c >= 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}

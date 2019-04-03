#include <unistd.h>

void ft_putchar(char);
void ft_putstr(char*);

int main(void){
    char str[20] = "yolo j'aime le velo";

    ft_putstr(str);

    return 0;
}

void ft_putstr(char* str){
    while(*str != '\0'){
        ft_putchar(*str);
        str++;
    }
}

void ft_putchar(char c){
    write(1, &c, 1);
}

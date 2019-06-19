#include <unistd.h>

char* ft_strcpy(char*, char*);

int main(void){
    char s[] = "test";
    char d[] = "tst";

    char* src = s;
    char* dest = d;

    ft_strcpy(dest, src);

    return 0;
}

char* ft_strcpy(char* dest, char* src){
    int i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

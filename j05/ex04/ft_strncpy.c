#include <unistd.h>
#include <stdio.h>

char* ft_strncpy(char*, char*, unsigned int);

int main(){
    char dest[] = "test";
    char src[] = "yolololololol";

    printf("%s", ft_strncpy(dest, src, 6));

    return 0;
}

char* ft_strncpy(char* dest, char* src, unsigned int n){
    unsigned int i = 0;

    while(i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

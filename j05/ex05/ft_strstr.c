#include <unistd.h>

char *ft_strstr(char*, char*);

int main(){
    char* str1 = "Le C cest la vie";
    char* str2 = "c'est";

    printf("%s", ft_strstr(str1, str2));
    return 0;
}

char* ft_strstr(char* str, char* to_find){
    int i = 0;

    while(*str != '\0'){
        printf("%d | %c | %c \n",i, *str , to_find[i]);
        if(to_find[i] == '\0')
            return to_find;
        else if(*str == to_find[i])
            to_find[++i];
        else
            i = 0;
        str++;
    }
    return NULL;
}

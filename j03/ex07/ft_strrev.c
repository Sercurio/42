#include <unistd.h>

char* ft_strrev(char*);

int main(){
    char str[25] = "la biere, pas avant 10h";

    ft_strrev(str);

    return 0;
}

char* ft_strrev(char* str){
    int i = 0;
    int j = 0;

    while(str[i] != '\0')
        i++;

    char strrev[i + 1];
    i--;

    while(i >= 0)
        strrev[j++] = str[i--];

    strrev[j] = '\0';

    while(strrev[++i] != '\0')
        str[i] = strrev[i];

    return str;
}

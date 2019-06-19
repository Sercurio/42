#include <unistd.h>

char* ft_capitalize(char*);
int ft_is_alphanum(char);
char ft_chartoupper(char);

int main(){
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_capitalize(str));

    return 0;
}

char* ft_capitalize(char* str){
    int i = 0;

    while(str[i] != '\0'){
        if(ft_is_alphanum(str[i-1]) == 0){
            str[i] = ft_chartoupper(str[i]);
            i++;
        }
        else
            i++;
    }
    return str;
}


int ft_is_alphanum(char c){
    if((c >= 'a' && c <= 'z') || (c > 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

char ft_chartoupper(char c){
    if(c >= 'a' && c <= 'z')
        return c -= 32;
}

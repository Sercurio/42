#include <unistd.h>

int ft_strncmp(char*, char*, unsigned int);

int main(){
    
    printf("%d",strncmp("abC", "abc", 3));

    printf("%d",ft_strncmp("abC", "abc", 3));

    return 0;
}

int ft_strncmp(char* s1, char* s2, unsigned int n){
    unsigned int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1){
        i++;
    }
    return (s1[i] - s2[i]);
}

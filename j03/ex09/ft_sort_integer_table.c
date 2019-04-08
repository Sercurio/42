#include <unistd.h>

void ft_sort_integer_table(int*, int);

int main(void){
    int tab[7] = {5, 3, 188, 64, 55, 78, 8};

    ft_sort_integer_table(tab, 7);

    return 0;
}

void    ft_sort_integer_table(int *tab, int size){
    int i = 0;
    int temp = 0;

    while(i != size - 1){
        if(tab[i] > tab[i + 1]){
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}

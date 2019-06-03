#include <unistd.h>
#include <stdio.h>

#define N 8

void ft_putchar(char);
void ft_putnbr(int);
int ft_eight_queens_puzzle(void);
int safe_queen(int*, int, int);
void drop_queen(int*, int, int*);

int main(void){
    ft_eight_queens_puzzle();
    return 0;
}


int ft_eight_queens_puzzle(){
    int echiquier[N] = {-1};
    int solution = 0;

    drop_queen(echiquier, 0, &solution);
    ft_putnbr(solution);
    return solution;
}

void drop_queen(int* echiquier, int position, int* solution){
    int i;
    int j;

    j = 0;
    if(position > N){
    	while(j++ < N){ 
	    ft_putnbr(echiquier[j]);
	}
	ft_putchar('\n');
    }
    else{
        i = 0;
        while(i <= N){
            if(safe_queen(echiquier, position, i)){
                echiquier[position] = i;
                drop_queen(echiquier, position + 1, solution);
            }
            i++;
        }
    }
}
int safe_queen(int* echiquier, int colonne, int ligne){
    int i = 0;
    while(i < colonne){
        if(echiquier[i] == ligne || i - echiquier[i] == colonne - ligne
                || i + echiquier[i] == colonne + ligne)
            return 0;
        i++;
    }
    return 1;
}


void ft_putnbr(int n){
    char tab[12];
    tab[11] = '\0';
    int i = 10;
    int negatif = 0;

    if(n < 0){
        n *= -1;
        negatif = 1;
    }
    else if(n == 0)
        ft_putchar('0');

    while(n != 0){
        tab[i--] = n % 10 + '0';
        n /= 10;
    }
    negatif ? tab[i] = '-' : i++;

    while(tab[i] != '\0')
        ft_putchar(tab[i++]);

}

void ft_putchar(char c){
    write(1, &c, 1);
}

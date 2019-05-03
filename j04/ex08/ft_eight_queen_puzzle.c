#include <unistd.h>
#include <stdio.h>

#define N 8

int ft_eight_queens_puzzle(void);
int safe_queen(int*, int, int);
void drop_queen(int*, int, int*);

int main(void){
    ft_eight_queens_puzzle();
    return 0;
}


int ft_eight_queens_puzzle(){
    int echiquier[N] = {-1,-1,-1,-1,-1,-1,-1,-1};
    int solution = 0;

    drop_queen(echiquier, 0, &solution);
    printf("%d", solution);
    return solution;
}

void drop_queen(int* echiquier, int position, int* solution){
    int i;
    int j;
    if(position == 8){
        printf("solution : %d\n", *solution);
        *solution += 1;
        j=0;
        while(j < 8){
            printf("%d",echiquier[j++]);
        }
        putchar('\n');
    }
    else{
        i = 0;
        while(i < N){
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

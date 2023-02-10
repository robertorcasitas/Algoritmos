#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;
bool checkRow(int sud[][9], int row)
{
    //Guardar caracteres vistos
    set<int> aux;
 
    for (int i = 0; i < 9; i++) {
 
        //Falso si ya se encontraba
        if (aux.find(sud[row][i]) != aux.end()){
            return false;
        }
 

        aux.insert(sud[row][i]);
    }
    return true;
}

bool checkCol(int sud[][9], int col)
{
    //Guardar caracteres vistos
    set<int> aux;
 
    for (int i = 0; i < 9; i++) {
 
        //Falso si ya se encontraba
        if (aux.find(sud[i][col]) != aux.end()){
            return false;
        }
 

        aux.insert(sud[i][col]);
    }
    return true;
}

bool checkReg(int sud[][9], int startRow, int startCol)
{
    set<int> aux;
 
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            int curr = sud[row + startRow][col + startCol];
            if (aux.find(curr) != aux.end()){
                return false;
            }
            aux.insert(curr);
        }
    }
    return true;
}

int main() {
    int sudoku [9][9]=  { { 7, 9, 2, 1, 5, 4, 3, 8, 6 },
            { 6, 4, 3, 8, 2, 7, 1, 5, 9 },
            { 8, 5, 1, 3, 9, 6, 7, 2, 4 },
            { 2, 6, 5, 9, 7, 3, 8, 4, 1 },
            { 4, 8, 9, 5, 6, 1, 2, 7, 3 },
            { 3, 1, 7, 4, 8, 2, 9, 6, 5 },
            { 1, 3, 6, 7, 4, 8, 5, 9, 2 },
            { 9, 7, 4, 2, 1, 5, 6, 3, 8 },
            { 5, 2, 8, 6, 3, 9, 4, 1, 7 } };;
    int i, j, valor,casos;
    bool check;
    printf("Ingresar numero de casos:");
    scanf("%d",&casos);
    for(i=0; i<casos;i++) {
    	/*for(i=1; i<10;i++) {
            for(j=1;j<10;j++){

                do{
                    printf("ingresar num en fila %d columna %d: ",i,j );
                    scanf("%d",&valor);

                    if (valor>=1 && valor<=9)
                    sudoku [i][j]= valor;
                    else
                    printf("Ingresar un num entre 1 y 9");

                }while (valor<1 | valor>10);
   
            }
        }
        */
        check = true;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(!checkRow(sudoku, i) | !checkCol(sudoku, j) | !checkReg(sudoku, i - i % 3, j - j % 3)){
                    check = false;
                    break;
                }
            }
            if(check==false){
                break;
            }
        }

        if(check){
            printf("Sudoku valido");
        }
        else{
            printf("Sudoku no valido");
        }

    }
 }

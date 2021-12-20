#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#define N 8  

void printSolution(int board[N][N]){
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++){
      printf(" %d ", board[i][j]);
    }
    printf("\n");
  }
}

bool isSafePlaceForQn(int board[N][N], int row, int col){
  int i, j;
  /* Check this row on left side */
  for (i = 0; i < col; i++){
    if (board[row][i]){
      return false;
    }
  }
  
  /* Check upper diagonal on left side */
  for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
    if (board[i][j]){
      return false;
    }
  }

  /* Check lower diagonal on left side */
  for (i = row, j = col; j >= 0 && i < N; i++, j--){
    if (board[i][j]){
      return false;
    }
  }
  
  return true;
}
  
/* A recursive function to solve N Queen problem */
bool IsNqueenSolution(int board[N][N], int col)
{
  /* base case: */
  if (col >= N){
    return true;
  }

  for (int i = 0; i < N; i++) {
    if (isSafePlaceForQn(board, i, col)) {
      board[i][col] = 1;
      if (IsNqueenSolution(board, col + 1)){
            return true;
          }
        board[i][col] = 0; // BACKTRACK
      }
  }

  /* If the queen cannot be placed in any row in
      this column col  then return false */
  return false;
}
  
bool NQueen(){
  int board[N][N] = { { 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0 } };
  printf("Before: \n\n");
  printSolution(board);    
    if (IsNqueenSolution(board, 0) == false) {
        printf("Solution does not exist");
        return false;
    }
  
    printf("After: \n\n");
    printSolution(board);
    
    return true;
}

int main(){
  NQueen();
  return 0;
}
#include <stdio.h> 

#include <stdlib.h> 

  

int main() 

{ 

  

  int matriz[5][5]; 

  int x = 0; 

  int y = 0; 

  

  for (x = 0; x < 5; x++) 

  { 

      for (y = 0; y < 5; y++) 

      { 

          printf("dgite os valores de m[%d][%d] : ", x + 1, y + 1); 

  

          scanf("%d", &matriz[x][y]); 

      } 

  } 

  

  printf("\ndiagonal secundaria: \n"); 

  y = 4; 

  

  for (x = 0; x < 5; x++) 

  { 

      printf("[%d][%d] = %d \n", x + 1, y + 1, matriz[x][y]); 

      y--; 

  } 

  printf("\na matriz: \n"); 

    for ( x=0; x<5; x++ ) 

    { 

  for ( y=0; y<5; y++ ) 

  { 

     printf ("\t%d", matriz[ x ][ y ]); 

     printf(" "); 

  } 

  printf("\n"); 

  } 

  system("pause"); 

  

  return 0; 

} 

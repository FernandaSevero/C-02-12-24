#include <stdio.h>
int main(void){
   // array de duas linhas e tres colunas
   int arr[2][3] ={{1,3,5},{2,4,6}};

   //passando pelo array
   for(int i = 0 ; i < 2; i++){ //linhas
   //0
   //1

      for(int j = 0 ; j < 3; j++){ //colunas
      //0
      //1
      //2

         printf("%d", arr[i][j]);
         if (j < 2){printf(", "); 
         }
      }//arr[0][0] j<2 print 1,
       //arr[0][1] j<2 print 3,
       //arr[0][2] saiu do if print 5 print (\n)

       //arr[1][0] j<2 print 2, 
       //arr[1][1] j<2 print 4,
       //arr[1][2] saiu do if print 6 print (\n)

      printf("\n");
   }
   
return 0;
}
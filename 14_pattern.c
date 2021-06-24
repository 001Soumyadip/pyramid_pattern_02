/*
 *****
 ****
 ***
 **
 *
*/

#include <stdio.h>

int main(){
    int i,j;
    // printf("Enter the value of row and column\n");
    // scanf("%d%d",&row,&col);
    for(i=1;i<=5;i++){

          for(j=1;j<=5;j++){
              if(j<=6-i){  
                  printf("*");
              }
              else{
                  printf(" ");
              }
          }
          printf("\n");
    }
    return 0;
}
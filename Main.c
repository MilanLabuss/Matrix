#include <stdio.h>
#include <stdlib.h>

//Enter a row and column size
//the program will then generate a matrix of random numbers of the exact size specified
//Enter "a" to rotate the matrix by 90 degrees counter-clockwise
//Enter "d" to rotate the matrix 90 degrees clockwise
//Enter "w" to move the rows of the matrix up by one, regenerating the bottom row with random values
//Enter "s" to move the rows in the matrix down by one, regenerating the top row with random values
//Enter "x" to exit

void print_matrix (int arr[10][10], int num_row, int num_col){
    for(int row=0; row<num_row; row++) {
      for(int col=0;col<num_col;col++) {
        printf("%d ", arr[row][col]);
      }
      printf("\n");
    }
}

void rotateu(int arr[10][10], int num_row, int num_col){

    for(int row=0; row<num_row-1; row++) {
      for(int col=0;col<num_col;col++) {
        

     
          arr[row][col]=arr[row+1][col];
        
      }
    }

    for(int col=0;col<num_col;col++){
      arr[num_row-1][col] = random()%10;
    }

    print_matrix(arr,num_row,num_col);
}
void rotateccw(int arr[10][10], int num_row, int num_col){

}
void rotatecw(int arr[10][10], int num_row, int num_col){

}
void rotated(int arr[10][10], int num_row, int num_col){

}


int main(){

    int arr[10][10];
    int row,col;
    int row_num, col_num;
    printf("Enter number of rows");
    scanf("%d", &row_num );
  
    printf("Enter number of columns");
    scanf("%d", &col_num);
  getchar();


    int i, j;
       int randomnumber;

    for(row=0; row<row_num; row++) {
      for(col=0;col<col_num;col++) {
 
        randomnumber = rand() % 10;
          arr[row][col] = randomnumber;

      }
    }

  print_matrix(arr, row_num, col_num);


  int x=1;
  while(x!=0){
    char letter;
  printf("Select");
  letter=getchar();
  getchar();

switch(letter){    
case 'w': 
    
   rotateu(arr,row_num,col_num);
   
break;    
case 's':    
  
break;    
case 'd': 
  rotatecw(arr,row_num,col_num);
break;    
case 'a': 

break;    
case 'x':   

break;    
default:    
printf("Error in input");    
}    

  }


    return 0;
}

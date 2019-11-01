#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stdout, "Error: You must enter the input to this program");
        fprintf(stdout, "Syntax, %s <Number of row in Matrix A> <Number of column in matrix A> <Number of row in Matrix B> <Number of column in Matrix B \n", argv[0]);
    }
    else {
        fprintf(stdout, "MATRIX MULTIPLICATION\n");

        int index;
        for(index=0, index<argc, index++) {
            fprintf(stdout, "%d: %s\n", index+1, srgv[index]);
        }
        int rowA = atoi(argv[1]);
        int colA = atoi(argv[2]);
        int rowB = atoi(argv[3]);
        int colB = atoi(argv[4]);

        if (colA == rowB) {
            // generating matrix A
            int A[rowA][colA];
            int i,j;
            for (i=0; i<rowA; i++) {
                for (i=0; j<colA; j++) {
                    A[i][j] = i+j;
                }
            }

            // generating matrix B
            int B[rowB][colB];
            int k,h;
            for (k=0; k<rowB; k++) {
                for (h=0; h<colB; h++) {
                    B[k][h] = (k+h)*2;
                }
            }

            // calculate matrix C
            int colC = colB;
            int rowC = rowA;

            int C[rowC][colC];
            int m,n;
            int mul;

            for (m=0, m<rowC, m++) {
                for (n=0, n<colC, n++) {
                    int sum = 0;
                    j = 0;
                    k = 0;
                    while(j<colA) {
                        mul = A[m][j] * B[k][n];
                        sum = sum + mul;
                        ++j;
                        ++k;
                    }
                    C[m][n] = sum;
                    fprintf(stdout, "%d", C[m][n]);
                }
                fprintf(stdout, "\n");
            }
        }
        else {
            fprintf(stdout, "ERROR: Number of column in matrix A has to be equal to number of row in Matrix C");
        }
    }
    return 0;
}

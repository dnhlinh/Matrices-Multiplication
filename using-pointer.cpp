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
            int szA = rowA * colA;
            int A[szA];
            int i,j;
            int *pA;
            pA = A;
            fprintf(stdout, "MatrixA:\n");
            for (i=0; i<rowA; i++) {
                for (i=0; j<colA; j++) {
                    *pA = i+j;
                    fprintf(stdout, "%d", *pA);
                    pA++;
                }
                fprintf(stdout, "\n");
           }

            // generating matrix B
            int szB = rowB * colB;
            int B[szB];
            int k,h;
            int *pB;
            pB = B;
            for (k=0; k<rowB; k++) {
                for (h=0; h<colB; h++) {
                    *pB = (k+h)*2;
                    fprintf(stdout, "%d", *pB);
                    pB++;
                }
                fprintf(stdout, "\n");
                }
            }

            // calculate matrix C
            int colC = colB;
            int rowC = rowA;
            int szC = rowC * colC;
            int C[szC];
            int *pC;
            pc = C;

            for (i=0, i<rowC, i++) {
                for (j=0, j<colC, j++) {
                    int sum = 0;
                    for (k=0; k<colA; k++) {
                        sum += A[i*colA - 1 + k] * B[k*colB - 1 + j];
                    }
                    *pC = sum;
                    fprintf(stdout, "%d", *pC);
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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a,b,c,d,e,f,g,h;
    printf("Enter number of row: ");
    scanf("%d",&m);
    printf("Enter number of column: ");
    scanf("%d",&n);
    int array1[m][n],array2[m][n],array3[m][n];
    printf("Enter value for matrix 1:\n");
    for (a=0;a<m;a++){
        for (b=0;b<n;b++){
            scanf("%d",&array1[a][b]);
        }
    }
    printf("Enter value for matrix 2:\n");
    for (c=0;c<m;c++){
        for (d=0;d<n;d++){
            scanf("%d",&array2[c][d]);
        }
    }
    for (e=0;e<m;e++){
        for (f=0;f<n;f++){
            array3[e][f]=array1[e][f]+array2[e][f];
        }
    }
    printf("Sum of 2 matrices is:\n");
    for (g=0;g<m;g++){
        for (h=0;h<n;h++){
            printf("%d ",array3[g][h]);
        }
        printf("\n");
    }
    return 0;
}

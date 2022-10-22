#include <stdio.h>

int main()
{
    int m,n;                 //Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   //Matrix Size Initialization
    int arr[10][10];        //Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    //Matrix Initialization
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     //Print the matrix
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int brr[10][10];         //Transpose Matrix Declaration
    for(int i=0;i<m;i++)     //Transpose Matrix initialization
    {
        for(int j=0;j<n;j++)
        {
            brr[j][i]=arr[i][j];     //Store elements in the transpose matrix
        }
    }
    printf("\nAfter transpose the elements are...\n");
    for(int i=0;i<m;i++)      //Print the transpose matrix
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

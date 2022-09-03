//Name: Soumyadeep Paul
//Roll number: 2105501
//Question 3
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number of rows:\n");
    scanf("%d",&a);
    printf("Enter the number of coloumns:\n");
    scanf("%d",&b);
    int arr[a][b];
    int i,j;
    printf("Enter the elements of the array:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements of the array are:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("The triplet form is:\n");
    printf("Row\tCol\tVal\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(arr[i][j]!=0)
            printf("%d\t%d\t%d\n",i,j,arr[i][j]);
        }
    }
    printf("Transpose matrix is:\n");
    
    int transpose[a][b];
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            transpose[i][j]=arr[j][i];
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    printf("The triplet form of transpose is:\n");
    printf("Row\tCol\tVal\n");
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            if(transpose[i][j]!=0)
            printf("%d\t%d\t%d\n",i,j,transpose[i][j]);
        }
    }
    
}
//Name: Soumyadeep Paul
//Roll number: 2105501
//Question 2
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

    int count=0,zero=0;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(arr[i][j]!=0)
            count++;
            else
            zero++;
        }
    }
    if(zero>count){
        printf("It's a SPARSE matrix");
    }
    else{
       printf("It's not a SPARSE matrix"); 
    }
    return 0;
}
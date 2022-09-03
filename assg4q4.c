//Name: Soumyadeep Paul
//Roll number: 2105501
//Question 4
#include<stdio.h>

int main()
{
    int a,count;
    printf("Enter the index of the square matrix:\n");
    scanf("%d",&a);
    
    int arr[a][a];
    int i,j;
    printf("Enter the elements of the array:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements of the array are:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }    
        }
    }
    if(count==(a*a-a)/2)
    printf("Its a lower triangular matrix ;)\n");
    else
    printf("Its not a lower triangular matrix\n");
    printf("Enter the elements of the array:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    count=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i][j]!=0)
            count++;
        }
    }
    if(count==0)
    printf("Its a upper triangular matrix ;)\n");
    else
    printf("Its not a upper triangular matrix\n");
    printf("Enter the elements of the array:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    count=0;
    for(i=0;i<a;i++)
    {
        if(arr[i][i]!=0)
        count++;
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i][j]!=0)
            count++;
        }
    }
    for(i=1;i<a;i++)
    {
        if(arr[i][i-1]!=0)
        count++;
    }
    if(count==a+2*(a-1))
    printf("\nIt is a tri-diagonal matrix ;)");
    else
    printf("its not a tri-diagonal matrix");
}


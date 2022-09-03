#include <stdio.h>

int main(){
    int num,i,j,count=0;
    int a[num];
    printf("Enter the number of elements of array:\n");
    scanf("%d", &num);
    printf("Enter the elements of the array:\n");
    for(i=0; i<num; i++){
        scanf("%d", &a[i]);
    }
    printf("Your array is:\n");
    for(i=0; i<num; i++){
        printf("%d\n", a[i]);
    }
    printf("Repeating numbers:\n");
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        
        printf("%d is repeated for %d times\n", a[i], count);
        count=0;
    }
    return 0;

}
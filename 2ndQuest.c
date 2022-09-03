#include <stdio.h>

int main(){
    int n,i;
    int a[8] = {1,1,0,0,0,0,0,0};
    printf("There are 8 seats available.\n");
    printf("\n");
    printf("Enter the number of seats to be booked: ");
    scanf("%d", &n);
    for(i=0;i<8;i++){
        if(a[i]==0){
            if(i<n){
                a[i] = 1;
            }
        }   
    }
    for(i=0; i<8; i++){
        printf("%d", a[i]);
    }
}
#include<stdio.h>
#include<conio.h>
int main(){
    int a[30],n,i,j,temp;
    printf("Enter number of elements ");
    scanf("%d",&n);
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("After array is shorted : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

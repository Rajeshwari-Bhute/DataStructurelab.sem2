#include<stdio.h>
#include<conio.h>
int main()
{
  int key,low =0,high,i,n,a[30],mid;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements" );
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elemnts to sech in given array\n");
    scanf("%d",&key);
          high=n-1;
          
        while(low <= high){
            mid=(low+high)/2;
            if(a[mid]==key){
                printf("Element %d found at position %d",key,mid);
                break;
            }
            else if(a[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
        

 }

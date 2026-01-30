#include<stdio.h>
int main(){
	int a[20] , f,i,n,pos,status=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&f);
	for(i=0;i<n;i++){
		if(a[i] == f){
			status =1;
		   pos=i;
			break;
		}
	}
	if(status == 0){
		printf("%d not found\n",f);
	}else{
		printf("found at position %d\n",pos);
	}
}

#include<stdio.h>
int main(){
	int arr[5]={2,5,8,1,4};
	for (int i=0;i<5;i++){
		int Min_dx=i;
		int temp;
		for (int j=0;j<5;j++){
			if(arr[j]>arr[Min_dx]){
				Min_dx=j; 
				temp=arr[Min_dx];
		        arr[Min_dx]=arr[i];
		        arr[i]=temp;
			}
		}
	}
	for (int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}

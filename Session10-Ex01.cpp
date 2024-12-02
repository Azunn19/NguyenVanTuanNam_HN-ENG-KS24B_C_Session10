#include<stdio.h>
int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int value;
	int count = 0;
	printf("Hay nhap phan tu ban muon tim kiem: ");
	scanf("%d",&value);
	for (int i = 0;i < 10;i++){
		if (arr[i] == value){
			count++;
			printf("Phan tu %d nam o vi tri thu %d\n", arr[i], i + 1);
		}
	}
	if (count == 0){
		printf("Phan tu khong ton tai trong mang\n");
	}
	
	return 0;
}

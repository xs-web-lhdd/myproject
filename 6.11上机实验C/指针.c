#include<stdio.h>
int main(){
//  �������� 
	int number;
	scanf("%d",&number);
	int arr[number]; // ���������С 
//	ѭ������ 
	int i;
	for(i = 0; i < number; i++){
		scanf("%d",&arr[i]);
	}
//  ѭ����� 
	int j;
	int max = arr[0];
	for(j=1; j < number; j++){
		if(*(arr+j) > max){
			max = *(arr+j);
		}
	}
	printf("%d",max);
	return 0;
} 

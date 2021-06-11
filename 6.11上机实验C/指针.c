#include<stdio.h>
int main(){
//  输入数字 
	int number;
	scanf("%d",&number);
	int arr[number]; // 定义数组大小 
//	循环输入 
	int i;
	for(i = 0; i < number; i++){
		scanf("%d",&arr[i]);
	}
//  循环输出 
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

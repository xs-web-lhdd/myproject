#include<stdio.h>
#include<string.h>
int main(){
	
	int all_average(int arr[4][5]);
	
	int arr[4][5] = {{34,56,88,99,89},{27,88,99,67,78},{99,90,87,86,89},{78,89,99,56,77}};
//	printf("%d",average(arr[0][0],arr[1][0],arr[2][0],arr[3][0]));
	all_average(arr);
	
	return 0;
	
} 
int all_average(int arr[4][5]){
	int i,j;
	int count;
	int array[4]; 
	for(i=0; i<4; i++){
		count = 0;
		for(j = 0; j < 5; j++){
			if(arr[i][j] < 60){
				count++;
			}
		}
		if(count > 1){
			printf("第%d位学生不及格\n",i+1);
			printf("成绩分别是：");
			int s;
			int sum=0;
			for(s=0; s < 5;s++){
				printf("%d ",arr[i][s]);
				sum += arr[i][s];
			}
			printf("\n平均成绩是：%d",sum/5); 
		} 
	}
//	puts(array);
	
} 

#include<stdio.h>
int main(){
	int better(int arr[4][5]);
	
	int arr[4][5] = {{34,56,88,99,89},{27,88,99,67,78},{99,90,87,86,89},{78,89,99,56,77}};
	better(arr);
	
	return 0;
	
}
int better(int arr[4][5]){
	int i,j;
	for(i=0; i < 4; i++){
		int sum = 0;
		int count=0; 
		for(j=0; j < 5; j++){
			sum += arr[i][j];
			if(arr[i][j] >= 85){
				count++;
			}
		}
//		�ж�ƽ���ɼ�90���ϣ� 
		if(sum/5 >=90){
			printf("��%dλѧ���ɼ�����\n",i+1);
			printf("�ɼ��ֱ��ǣ�");
			int s;
			int sum=0;
			for(s=0; s < 5;s++){
				printf("%d ",arr[i][s]);
				sum += arr[i][s];
			}
			printf("\nƽ���ɼ��ǣ�%d",sum/5); 
//			
			break;			
		}
		if(count == 5){
			printf("��%dλѧ���ɼ�����\n",i+1);
			printf("�ɼ��ֱ��ǣ�");
			int s;
			int sum=0;
			for(s=0; s < 5;s++){
				printf("%d ",arr[i][s]);
				sum += arr[i][s];
			}
			printf("\nƽ���ɼ��ǣ�%d",sum/5); 
		}
	}
}
 

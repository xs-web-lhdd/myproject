#include<stdio.h>
int main(){
	
	int input_year,input_month;
	scanf("%d %d",&input_year,&input_month);
	month_days(input_year,input_month);
	
	
	
	
	
	return 0;
}

int month_days(year, month){
	int copy_year=0;
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
		copy_year = 1;
	}
	if(month ==1){
		printf("%d��%d�µ������ǣ�31",year,month);
	}
	if(month ==2){
		if(copy_year){
			printf("%d��%d�µ������ǣ�29",year,month);
		}else{
			printf("%d��%d�µ������ǣ�28",year,month);
		}
	}
	if(month ==3){
		printf("%d��%d�µ������ǣ�31",year,month);
	}
	if(month ==4){
		printf("%d��%d�µ������ǣ�30",year,month);
	}
	if(month ==5){
		printf("%d��%d�µ������ǣ�31",year,month);
	}
	if(month ==6){
		printf("%d��%d�µ������ǣ�30",year,month);
	}
	if(month ==7){
		printf("%d��%d�µ������ǣ�31",year,month);
	}	
	if(month ==8){
		printf("%d��%d�µ������ǣ�31",year,month);
	}
	if(month ==9){
		printf("%d��%d�µ������ǣ�30",year,month);
	}
	if(month ==10){
		printf("%d��%d�µ������ǣ�31",year,month);
	}
	if(month ==11){
		printf("%d��%d�µ������ǣ�30",year,month);
	}
	if(month ==12){
		printf("%d��%d�µ������ǣ�31",year,month);
	}	
}

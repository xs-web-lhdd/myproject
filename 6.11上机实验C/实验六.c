#include<stdio.h>
int main(){
	int arr[4][5] = {{34,56,88,99,89},{27,88,99,67,78},{99,90,87,86,89},{78,89,99,56,77}};
	printf("%d",average(arr[0][0],arr[1][0],arr[2][0],arr[3][0]));
	
} 
int average(int one,int two,int three,int four){
	return (one+two+three+four)/5;
}

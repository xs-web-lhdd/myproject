#include<stdio.h>
int main(){
    int input_one,input_two;
    scanf("%d %d",&input_one,&input_two);
    int i;
    int sum=0,count=0;
    for(i = input_one; i < input_two; i++){
        if(prime(i)){
            sum += i;
            count++;
        }else{

        }
    }
    printf("%d��%d֮�䣺����������%d���ͣ�%d",input_one,input_two,count,sum);
    return 0;
}
int prime(int x){
    int i;
    for(i = 2; i < x; i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}

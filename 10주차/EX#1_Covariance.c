#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void Input(int *, int *, int);
void Sum_input(int *, int *, int);
double cal_covariance(int *, int *, int, double, double);

int main(){
    int size, array_1_sum = 0, array_2_sum = 0;
    double covariance;
    int array_1[SIZE] = { 0, }, array_2[SIZE]= { 0 ,};

    Input(array_1, array_2, SIZE);
    
    Sum_input(&array_1_sum, array_1 ,SIZE);
    Sum_input(&array_2_sum, array_2, SIZE);


    covariance = cal_covariance(array_1, array_2, SIZE, array_1_sum, array_2_sum);
    printf("Covariance result %.3f", covariance);
    return 0;
}

void Input(int *array_1, int *array_2, int array_size){
    printf("Input array[1] number and array[2] number\n");
    int num1=0, num2=0;
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d %d", &num1, &num2);
        array_1[i]=num1;
        array_2[i]=num2;
    }
}

void Sum_input(int *array_sum, int *array, int array_size){
    for(int i=0; i<SIZE; i++)
    {
        *array_sum+=array[i];
       
    }
}

double cal_covariance(int *array_1, int *array_2, int array_size, double array_1_sum, double array_2_sum){
    double average_array_1= array_1_sum/SIZE;
    double average_array_2= array_2_sum/SIZE;
    double sum = 0;
    for (int i=0; i<SIZE; i++)
    {
        sum+=(array_1[i]-average_array_1)*(array_2[i]-average_array_2)/(SIZE);
    }
    return sum;
}
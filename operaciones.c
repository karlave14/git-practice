#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

//Calcular  promedio, mediana y media

//pedir numero

int i;
int calf=0;
float sum=0;
float max=0;
float min=0;
float ave =0;
float num;
printf("Ingresa un numero:\n");
scanf("%f", num);
for(i = 1; i < num; i++){
calf++;
sum = sum + num;
if (i == 1){
        min = num;
        max = num;
                                                                                                                                                                                                                           }else{                                                                                                                                                                                                             if(num > max){                                                                                                                                                                                                             max = num;
                }
        if(num < min){
                min = num;
                }
        }
}
        ave = sum/calf;
        printf("Average is: %.2f\n", ave);
        printf("Maximun is: %.2f\n", max);
        printf("Minimun is: %.2f\n", min);

return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){

//Calcular  promedio, mediana y media

//pedir numero

int i;
int calficaciones=0;
float suma=0;
float maximo=0;
float minimo=0;
float average=0;
for(i = 1; i < argc; i++){
float num = atof(argv[i]);
calf++;
suma = suma + num;

if( i == 1){
			min = num;
			max = num;
		} else{
			if(num > max) {
			max = num;
			}
			if(num < min){
			min = num;
			}
		}
	}

        ave = sum/calf;
        printf("Average is: %.2f\n", average);
        printf("Maximun is: %.2f\n", maximo);
        printf("Minimun is: %.2f\n", minimo);

return 0;
}


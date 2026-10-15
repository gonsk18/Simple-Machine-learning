#include <stdio.h>
#include <math.h>

int main(void){

/*Modelo de perceptron con 6 neuronas ocultas para 
prediccion de lluvia segun la entrada de parametros de humedad relativa 
temperatura y presion atm*/

//Modelo de engtrenamiento solo se usara para obtener el valor de los pesos necesarios


//definimos nuestras variables principales 
float w1,w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18, x1, x2, x3, b, lc;

// Formula de salida Z = (w1*w4*w7*w10*w13*w16)*x1 + (w2*w5*w8*w11*w14*w17)*x2 + (w3*w6*w9*w12*w15*w18)x3 +b

//asignacion de los valores iniciales 
w1 = 0.5f; w2 = 0.4f; w3 = 0.25f; 
w4 = 0.7f; w4 = 0.53f; w6 = 0.8f;
w7 = 0.36f; w8 = 0.59f; w9 = 0.93f;
w10 = 0.1f; w11 = 0.33f; w12 = 0.67f;
w13 = 0.69f; w14 = 0.55f; w15 = 0.22f;
w16 = 0.83f; w17 = 0.42f; w18 = 0.99f;

return 0;
}
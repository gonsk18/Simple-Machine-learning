#include <stdio.h>
#include <math.h>



float ReLU (float z);
float Der_ReLU(float z);
int main(void){

/*Modelo de perceptron con 6 neuronas ocultas para 
prediccion de lluvia segun la entrada de parametros de humedad relativa 
temperatura y presion atm */

//Modelo de engtrenamiento solo se usara para obtener el valor de los pesos necesarios


//definimos nuestras variables principales 
float w1,w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18, x1, x2, x3, b, lc;// valores de pesos intermedios
float v1, v2, v3, v4, v5, v6; //valores de pesos de salida 
// Formula de salida Z = (w1*x1 + w2*x2 + w3*x3 + b1)*v1 + (w4*x1 + w5*x2 + w6*x3 + b2)*v2 + (w7*x1 + w8*x2 + w9*x3 + b3)*v3 + (w10*x1 + w11*x2 + w12*x3 + b4)*v4 + (w13*x1 + w14*x2 + w15*x3 + b5)*v5 + (w16*x1 + w17*x2 + w18*x3 + b6) + b

float b1, b2, b3, b4, b5, b6;
//variables de salida:
float a1, a2, a3, a4, a5, a6, z;
//asignacion de los valores iniciales 
w1 = 0.5f; w2 = 0.4f; w3 = 0.25f; 
w4 = 0.7f; w5 = 0.53f; w6 = 0.8f;
w7 = 0.36f; w8 = 0.59f; w9 = 0.93f;
w10 = 0.1f; w11 = 0.33f; w12 = 0.67f;
w13 = 0.69f; w14 = 0.55f; w15 = 0.22f;
w16 = 0.83f; w17 = 0.42f; w18 = 0.99f;

v1 = 0.53f; v2 = 0.36f; v3 = 0.19f; v4 = 0.67f; v5 = 0.87f; v6 = 0.33f; //asignamos los pesos exteriores 

b1 = 0.17f; b2 = 0.82f; b3 = 0.45f; b4 = 0.91f; b5 = 0.33f; b6 = 0.68f; b = 0.12f; //asignacion de las bias

lc = 0.001; //coeficiente de aprendizaje


return 0;
}



//definicion de la funcion q va a normalizar a positivo todos los valores o darles 0 si salen negativos 
float ReLU (float z){

    if (z >= 0){
        return z;
    }
    else {
        return 0.0f;
    }
}
// Derivada de la funcion anterior definida 
float Der_ReLU (float z) {

    if(z>0){
        return 1.0f;
    }
    else{
        return 0.0f;
    }
}

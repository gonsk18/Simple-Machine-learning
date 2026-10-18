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

float datos_entrenamiento[60][4] ={ //matriz de datos para entrenar el modelo de machine learning
    //temp-med|velv|presion|lluvia
    {10.4,8.5,1015.6,0},
    {12.0,8.9,1008.1,0},
    {13.1,9.4,1002.1,1},
    {12.5,11.5,999.3,1},
    {10.0,8.3,1007.7,0},
    {6.1,8.7,1019.2,0},
    {15.9,9.3,1008.2,0},
    {15.0,10.3,1019.1,0},
    {25.2,13.4,1011.4,0},
    {17.9,18.1,1014.6,1},
    {16.1,9.0,1015.5,1},
    {18.3,13.1,1017.3,1},
    {18.5,9.7,1019.0,0},
    {19.0,15.4,1008.8,1},
    {18.8,8.9,1014.7,0},
    {18.6,8.9,1017.4,0},
    {18.3,6.7,1019.5,0},
    {23.4,11.2,1014.8,0},
    {30.1,10.4,1015.0,0},
    {29.7,13.9,1016.9,0},
    {30.9,11.6,1016.9,0},
    {32.6,10.4,1012.5,0},
    {13.4,7.5,1013.1,1},
    {12.2,9.0,1021.8,0},
    {16.8,8.3,1006.1,1},
    {15.5,7.2,1010.3,0},
    {14.9,9.3,1015.5,0},
    {12.8,10.4,1027.4,0},
    {15.8,7.8,1009.2,1},
    {16.4,7.1,1012.9,0}, 
    {9.2,9.4,1026.1,0},
    {10.0,7.2,1026.0,0},
    {8.6,8.9,1029.5,0},
    {11.6,5.1,1032.1,0},
    {13.3,7.1,1024.1,0},
    {16.1,6.4,1026.6,0},
    {16.1,5.4,1019.4,0},
    {12.9,8.8,1011.0,0},
    {18.1,5.9,1022.6,0},
    {13.8,9.1,1011.9,0}, 
    {16.9,13.4,1008.3,1},
    {16.5,19.2,1009.3,1},
    {17.9,12.3,1014.3,1},
    {14.3,6.1,1014.0,1},
    {10.2,7.3,1019.0,1},
    {12.2,9.3,1020.8,1},
    {11.4,7.0,1013.4,1},
    {7.2,10.2,1012.7,1},
    {10.2,8.1,1012.7,1},
    {13.1,9.4,1002.1,1}, //50
    {10.0,8.3,1007.7,0},
    {14.7,23.0,1006.4,1},
    {13.9,20.6,1004.1,1},
    {14.2,21.4,1015.0,1},
    {11.8,17.9,1020.0,0},
    {15.3,25.0,1011.9,1},
    {13.2,6.0,1027.4,0},
    {13.9,20.6,1004.1,1},
    {13.4,10.9,1017.4,0},
    {14.9,23.7,1003.1,1},
};
for(int x = 0; x<10000; x++){ //bucle de aprendizaje 
    for (int i = 0; i<60;i = i++){ // bucle para recorrer la matriz de datos
        
    }
}
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

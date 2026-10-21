#include <stdio.h>
#include <math.h>


float ReLU (float z);
float sig(float z);

int main(void)
{

float w1,w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18, x1, x2, x3, b;
float v1, v2, v3, v4, v5, v6;
float b1, b2, b3, b4, b5, b6;
float a1, a2, a3, a4, a5, a6,z;

printf("Introduce la temperatura media (ºC)");
scanf("%f",&x1);
printf("Introduce la velocidad del viento(Km/h)");
scanf("%f",&x2);
printf("Introduce la presión atmosferica(hPa)");
scanf("%f",&x3);
x1 = (x1 - 6.1)/(26.5);
x2 = (x2 - 5.1)/(19.9);
x3 = (x3 - 999.3)/(32.8);
w1 = 0.086949    ;
w2 = 0.903003 ;
w3 = -0.325329 ;
w4 = 0.871434 ;
w5 = 0.276499 ;
w6 = 1.017782 ;
w7 = 0.610602 ;
w8 = 0.251241 ;
w9 = 1.262333 ;
w10 = -0.213481 ;
w11 = 0.668849 ;
w12 = 0.240937 ;
w13 = -0.074558 ;
w14 = 1.491665 ;
w15 = -0.803263 ;
w16 = 1.201452 ;
w17 = -0.062123 ;
w18 = 1.450669 ;
b1 = 0.337261 ;
b2 = 0.623901 ;
b3 = 0.235035 ;
b4 = 0.987331 ;
b5 = 0.715834 ;
b6 = 0.332723 ;
v1 = 0.901375 ;
v2 = -0.559319 ;
v3 = -0.746815 ;
v4 = 0.754952 ;
v5 = 1.778692 ;
v6 = -1.192946 ;
b = 0.285673;
a1 = (w1*x1 + w2*x2 + w3*x3 + b1);
a2 = (w4*x1 + w5*x2 + w6*x3 + b2);
a3 = (w7*x1 + w8*x2 + w9*x3 + b3);
a4 = (w10*x1 + w11*x2 + w12*x3 + b4);
a5 = (w13*x1 + w14*x2 + w15*x3 + b5);
a6 = (w16*x1 + w17*x2 + w18*x3 + b6);
z = sig(ReLU(a1)*v1 + ReLU(a2)*v2 + ReLU(a3)*v3 + ReLU(a4)*v4 + ReLU(a5)*v5 + ReLU(a6)*v6 + b);

printf("La probabilidad de que llueva es de %f",z);

return 0;
}

float ReLU (float z){

    if (z >= 0){
        return z;
    }
    else {
        return 0.0f;
    }
}

float sig(float z) {
    return 1.0f / (1.0f + expf(-z));
}
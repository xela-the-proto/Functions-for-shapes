//
// Created by lukem on 03/02/2021.
//
#include <cmath>
#include "funzioni.h"
#define M_PI 3.14
void quadrato(float lato, float *pArea, float *pPerimetro)
{
    *pArea=lato*lato;
    *pPerimetro=4*lato;
}

void rettangolo(float latoMin,
                float latoMax,
                float *pArea,
                float *pPerimetro)
{
    *pArea=latoMin*latoMax;
    *pPerimetro=2*(latoMin+latoMax);
}

void cerchio(float raggio, float *pArea, float *pPerimetro)
{
    *pArea=M_PI*pow(raggio, 2);
    *pPerimetro=2*M_PI*raggio;
}

void triangoloIsoscele(float base,
                       float altezza,
                       float *pArea,
                       float *pPerimetro)
{
    float latoObliquo;

    latoObliquo = sqrt(pow(base/2, 2)+pow(altezza/2, 2));

    *pArea=(base*altezza)/2;
    *pPerimetro=base+2*latoObliquo;
}
void trapezio(float Bmaggiore, float Bminore, float h, float latobliquo1, float latobliquo2, float *parea, float *perminetro){
    *parea = (Bmaggiore+Bminore)*h/2;
    *perminetro = Bmaggiore+Bminore+latobliquo1+latobliquo2;

}
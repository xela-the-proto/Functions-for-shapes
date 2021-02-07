//
// Created by lukem on 03/02/2021.
//

#ifndef AREEEPERIMETRIFIGUREGEOMETRICHE_FUNZIONI_FUNZIONI_H
#define AREEEPERIMETRIFIGUREGEOMETRICHE_FUNZIONI_FUNZIONI_H

void quadrato(float lato, float *pArea, float *pPerimetro);
void rettangolo(float latoMin,
                float latoMax,
                float *pArea,
                float *pPerimetro);
void cerchio(float raggio, float *pArea, float *pPerimetro);
void triangoloIsoscele(float base,
                       float altezza,
                       float *pArea,
                       float *pPerimetro);
void trapezio(float Bmaggiore, float Bminore, float h, float latobliquo1, float latobliquo2, float *parea, float *perminetro);
//area bminore+bmaggiore*h/2
#endif //AREEEPERIMETRIFIGUREGEOMETRICHE_FUNZIONI_FUNZIONI_H

using namespace std;

#include <iostream>
#include "funzioni.h"

int main() {
    float var1, var2, h, latobliquo1, latobliquo2, area, perimetro;

    latobliquo1=0;
    latobliquo2=0;
    h=0;

    do {
        cout << "Inserire il lato del quadrato:";
        cin >> var1;
    } while (var1<=0.0);

    quadrato(var1, &area, &perimetro);

    cout << "Quadrato di lato " << var1 << ":" << endl;
    cout << "Area:" << area << endl;
    cout << "Perimetro:" << perimetro << endl;

    do {
        cout << "Inserire il lato minore del rettangolo:";
        cin >> var1;
    } while (var1<=0.0);

    do {
        cout << "Inserire il lato maggiore del rettangolo:";
        cin >> var2;
    } while (var2<=0.0);

    rettangolo(var1, var2, &area, &perimetro);

    cout << "Rettangolo di lati " << var1 << " e " << var2 << ":" << endl;
    cout << "Area:" << area << endl;
    cout << "Perimetro:" << perimetro << endl;

    do {
        cout << "Inserire il raggio del cerchio:";
        cin >> var1;
    } while (var1<=0.0);

    cerchio(var1, &area, &perimetro);

    cout << "Cerchio di raggio " << var1 << ":" << endl;
    cout << "Area:" << area << endl;
    cout << "Perimetro:" << perimetro << endl;

    do {
        cout << "Inserire la base del triangolo isoscele:";
        cin >> var1;
    } while (var1<=0.0);

    do {
        cout << "Inserire l'altezza del triangolo isoscele:";
        cin >> var2;
    } while (var2<=0.0);

    triangoloIsoscele(var1, var2, &area, &perimetro);

    cout << "Triangolo isoscele di base " << var1 << " ed altezza " << var2 << ":" << endl;
    cout << "Area:" << area << endl;
    cout << "Perimetro:" << perimetro << endl;

    trapezio (var1, var2, h, latobliquo1, latobliquo2, &area, &perimetro);
    do {
        cout << "inserire la base maggiore";
        cin >> var1;
        if (var1<=0.0)
            cout << "inserire un numero positivo" << endl;
    } while (var1<=0.0);
    do {
        cout << "inserire la base minore";
        cin >> var2;
        if (var2<=0.0)
            cout << "inserire un numero positivo" << endl;
    } while (var2<=0.0);
    do {
        cout << "inserire l'altezza ";
        cin >> h;
        if (h<=0.0)
            cout << "inserire un numero positivo" << endl;
    } while (h<=0.0);
    do {
        cout << "inserire il primo lato obliquo";
        cin >> latobliquo1;
        if (latobliquo1<=0.0)
            cout << "inserire un numero positivo" << endl;
    } while (latobliquo1<=0.0);
    do {
        cout << "inserire il secondo lato obliquo";
        cin >> latobliquo2;
        if (latobliquo2<=0.0)
            cout << "inserire un numero positivo" << endl;
    } while (latobliquo2<=0.0);
    cout << "l'area e' " << area << "e il perimetro e' " << perimetro;
    return 0;
}

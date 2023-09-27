#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include<iostream>
#include<conio.h>
#include<stdlib.h>

const int TAM=100;
using namespace std;

class empleado
{
        public:
        string nombre,domicilio,reportaA="Noemi";
        int clave;
        float sueldo=10000;
        empleado(){}
        empleado(int C,string N,string D){
        nombre=N;
        domicilio=D;
        clave=C;
        }
        void operator =(empleado&);
};

class Pila
{
    private:
        empleado datos[TAM];
        int ult=-1;
        int inserta(empleado, int);
        bool elimina(int);
    public:
        Pila(){}
        bool vacia()const;
        bool llena()const;
        int ultimo()const;
        void push(empleado);
        void pop();
        void top();
};



#endif // PILA_H_INCLUDED

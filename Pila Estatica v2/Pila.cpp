#include"Pila.h"

int Pila::inserta(empleado elem,int pos)
{
    cin.ignore();
    if(llena()||pos<0||pos>ult+1)
    {
        cout<<"\nError de insercion, intente nuevamente";
        getch();
        return 0;
    }
    int i=ult+1;
    while(i>pos)
    {
       datos[i]=datos[i-1];
       i--;
    }
    datos[pos]=elem;
    ult++;
    cout<<"\nEmpleado añadido";
    getch();
    return 1;
}
bool Pila::elimina(int pos)
{
    cin.ignore();
    if(vacia()||pos<0||pos>ult)
    {
        cout<<"\nError de eliminacion, intente nuevamente";
        return false;
    }
    int i=pos;
    while(i<ult)
    {
        datos[i]=datos[i+1];
        i++;
    }
    ult--;
    return true;
}

bool Pila::vacia()const
{
    if(ult==-1)
    {
        return true;
    }
    return false;
}

bool Pila::llena()const
{
    if(ult==TAM-1)
    {
        return true;
    }
    return false;
}

int Pila::ultimo()const
{
    return ult;
}

void Pila::push(empleado p)
{
    inserta(p,ult+1);
}

void Pila::pop()
{
    elimina(ultimo());
}

void Pila::top()
{
    if(vacia())
    {
        cout<<"No hay elementos en la pila.";
    }else
    {
    cout<<"\nClave: "<<datos[ult].clave<<endl;
    cout<<"Nombre: "<<datos[ult].nombre<<endl;
    cout<<"Domicilio: "<<datos[ult].domicilio<<endl;
    cout<<"Sueldo: "<<datos[ult].sueldo;
    cout<<"\tReporta a: "<<datos[ult].reportaA;
    }
}

void empleado::operator=(empleado& x)
{
    nombre=x.nombre;
    domicilio=x.domicilio;
    clave=x.clave;
}

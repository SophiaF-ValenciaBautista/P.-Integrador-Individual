//Pruebas proyecto integrador: Sistema de logística y organización en el proceso de entrega \
con las clases Compra, Paquete, Ubicacion y MetodoPago \
Autor: Sophia F. Valencia Bautista A01745091\
Fecha de creación: 30 de noviembre, 2020

#include "Compra.h"
#include "MetodoPago.h"
#include "Paquete.h"
#include "Ubicacion.h"

#include <iostream>
using namespace std;

int main(){
    cout << "\n*****Pruebas de clase Metodo de Pago"<< endl;
    cout << "\n\nPago 1" << endl; 
    MetodoPago m1;
    m1.informacionTarjeta(); 
    m1.fechaLimite(); 
    cout << m1.imprimir();

    cout << "\n\nPago 2" << endl; 
    MetodoPago m2{550,'P',"Sophia"}; 
    m2.informacionTarjeta();
    m2.fechaLimite();
    cout << m2.imprimir();

    cout << "\n\nPago 3" << endl; 
    MetodoPago m3{200,'D',"Omar"}; 
    m3.seleccion();
    m3.informacionTarjeta(); 
    m3.fechaLimite(); 
    m3.setCantidad(1200); 
    cout << m3.imprimir(); 

    cout << "\n\n*********Prueba completa" << endl;
    Compra compradef;
    compradef.solicitar(); 
    compradef.pagar(); 
    compradef.continuar(); 
 
    MetodoPago mdef{1000,'E',"Sophia"}; 
    mdef.seleccion();
    mdef.informacionTarjeta();
    mdef.fechaLimite();
    cout << mdef.imprimir();

    Ubicacion udef; 
    udef.pedirDatos(); 

    Paquete paquetedef {2312,18.123,0.700, udef}; 
    cout << paquetedef.imprimir(); 
    paquetedef.notificar(); 

    cout << udef.imprimirUbi();
    udef.clasificarPorZona(); 
    udef.darFolio(); 

    return 0;
}

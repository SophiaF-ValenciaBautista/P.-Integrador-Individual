//Programa que da opciones de metodos de pago.
//Autor: Sophia F. Valencia Bautista A01745091 
//Creado el 26/11/2020 ; ultima modificacion -/11/2020

#ifndef METODOPAGO_C
#define METODOPAGO_C
#include <string>
#include <iostream>
using namespace std;


class MetodoPago{
    private:
    int cantidad;
    char formaPago;
    string nombre;

    public:
    MetodoPago(){
        this->cantidad = 350;
        this->formaPago = 'C';
        this->nombre = "Juan";
    }
    MetodoPago(int cantidad, char formaPago, string nombre){
        this->cantidad = cantidad;
        this->formaPago = formaPago;
        this->nombre = nombre;    
    }

    void seleccion(){
    cout << "\nSelecciona el metodo de pago:\n <D>tarjeta de debito\n <C>Tarjeta de credito\n <P>Paypal\n <T>Transferencia bancaria\n <E>COD" <<endl;
    cin >> formaPago;
    }

    void setCantidad(int cant){cantidad = cant;}

    string imprimir(){
        string met(1,formaPago);
        return "\nPara su compra de " + to_string(cantidad) + " pesos el metodo de pago seleccionado fue:" + met + "\n"; 
    }

    void fechaLimite(){
        
        switch(formaPago){
            case 'D':
                cout << "\nTiene dos dias para realizar su pago." << endl;
                break;
            case 'C':
                cout << "\nTiene tres dias para realizar su pago. " << endl;
                break;
            case 'P':
                cout << "\nDebe de realizar un pago inmediato." << endl;
                break;
            case 'T':
                cout << "\nTiene un dia para realizar el pago. " << endl;
                break;
            case 'E':
                cout << "\nTiene un dia para realizar el pago. "<< endl;
                break;

            default:
                cout << "\nNo se encuentra disponible esa opción." << endl;
        }

    }

    void informacionTarjeta(){
        
        int nip{}, contrasenia{};
        string fechaV{}, correo{}, tienda{}, numTarjeta{};

        switch(formaPago){
            
            case 'D':
                cout << "\nIntroduce el numero de tarjeta: " << endl;
                getline(cin >> ws,numTarjeta);
                cout << "\nPropietario de la tarjeta: "<< endl;
                cout << nombre;
                cout << "\nFecha de vencimiento(MM-AA); "<<endl;
                cin >> fechaV;
                cout << "\nCodigo de seguridad: "<<endl;
                cin >> nip;
                cout << "\nIngreso los siguientes datos: " << numTarjeta << ", " << nombre << ", " << fechaV << ", " << to_string(nip);
                break;

            case 'C':
                cout << "\nIntroduce el numero de tarjeta: " << endl;
                getline(cin >> ws,numTarjeta);
                cout << "\nPropietario de la tarjeta: "<< endl;
                cout << nombre;
                cout << "\nFecha de vencimiento(MM-AA): "<<endl;
                cin >> fechaV;
                cout << "\nCodigo de seguridad: "<<endl;
                cin >> nip;
                cout << "\nIngreso los siguientes datos: " << numTarjeta << ", " << nombre << ", " << fechaV << ", " << to_string(nip);
                break;

            case 'P':
                cout << "\nIntroduzca su correo: " << endl;
                cin >> correo;
                cout << "\nIntroduzca su contrasenia: "<< endl;
                cin >> contrasenia;
                cout <<  "\nIngreso los siguientes datos: " << correo << " y " << to_string(contrasenia);
                break;

            case 'T':
                cout << "\nIntroduce el numero de tarjeta: " << endl;
                getline(cin >> ws,numTarjeta);
                cout << "\nPropietario de la tarjeta: "<< endl;
                cout << nombre;
                cout << "\nFecha de vencimiento(MM-AA): "<<endl;
                cin >> fechaV;
                cout << "\nCodigo de seguridad: "<<endl;
                cin >> nip;
                cout << "\nIngreso los siguientes datos: " << numTarjeta << ", " << nombre << ", " << fechaV << ", " << to_string(nip);
                break;

            case 'E':
                cout << "\nUsuario: "<< endl;
                cout << nombre;
                cout << "\nTienda: "<<endl;
                cin >> tienda;
                cout << "\nIngreso los siguientes datos: " << nombre << " y " << tienda;
                break;

            default:
                cout << "\nNo se encuentra disponible esa opción." << endl;
            
        }
    }
};
#endif

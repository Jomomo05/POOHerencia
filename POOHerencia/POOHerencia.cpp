// POOHerencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Direccion {
private:
    string Nombre, Calle, Ciudad, Estado;
    int Numero, Cp;
public:
    //Constructor
    Direccion(string nombre, string calle, int numero, int cp, string ciudad, string estado) {
        Nombre = nombre;
        Calle = calle;
        Numero = numero;
        Cp = cp;
        Ciudad = ciudad;
        Estado = estado;
    }

    //Gets
    string get_Nombre() {
        return Nombre;
    }
    string get_Calle() {
        return Calle;
    }
    string get_Ciudad() {
        return Ciudad;
    }
    string get_Estado() {
        return Estado;
    }
    int get_Numero() {
        return Numero;
    }
    int get_cp() {
        return Cp;
    }

    //Sets
    void set_Nombre(string nombre) {
        Nombre = nombre;
    }
    void set_Calle(string calle) {
        Calle = calle;
    }
    void set_Ciudad(string ciudad) {
        Ciudad = ciudad;
    }
    void set_Estado(string estado) {
        Estado = estado;
    }
    void set_Numero(int numero) {
        Numero = numero;
    }
    void set_cp(int cp) {
        Cp = cp;
    }

    //Funciones adicionales

   

};

class Envio {
private:
    Direccion Remitente;
    Direccion Destinatario; 
public:

    //Constructor
    Envio(Direccion remitente, Direccion destinatario) {
        Remitente = remitente;
        Destinatario = destinatario;
    }


    //Clases
    double calcularcosto() {

    }
};


class paquete:Envio {
private:
    float Largo, Ancho, Profundidad, Peso, Costo_por_kg;
public:
    //Constructor
    paquete(Direccion remitente, Direccion destinatario, float largo,float ancho, float profundidad, float peso, float costo_por_kg): Envio(remitente,destinatario) {
        Largo = largo;
        Ancho = ancho;
        Profundidad = profundidad;
        Peso = peso;
        Costo_por_kg = costo_por_kg;
    }

    double//Funciones
     calcularcosto() {

    }

};

class Sobre :Envio {
private:
    
public:

    //Constructor
    Sobre(Direccion remitente, Direccion destinatario) :Envio(remitente, destinatario) {

    }
    // Funciones
    double calcularcosto() {

    }
};






int main()
{
    std::cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

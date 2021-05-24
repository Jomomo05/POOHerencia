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
    Direccion();
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
    double calcularcosto() { //Incializador
        double costo = 70;
        return costo;
    }
};


class paquete:Envio {
private:
    Direccion Remitente, Destinatario;
    float Largo, Ancho, Profundidad, Peso, Costo_por_kg;
public:
    //Constructor
    paquete(Direccion remitente, Direccion destinatario, float largo,float ancho, float profundidad, float peso, float costo_por_kg): Envio(remitente,destinatario) {
        Largo = largo;
        Ancho = ancho;
        Profundidad = profundidad;
        Peso = peso;
        Costo_por_kg = costo_por_kg;
        Remitente = remitente;
        Destinatario = destinatario;
        
    }
    //Sets
    void set_Largo(float largo) {
        Largo = largo;
    }
    void set_Ancho(float ancho ) {
         Ancho = ancho;
    }
    void set_Profundidad(float profundidad) {
        Profundidad = profundidad;
    }
    void set_Peso(float peso) {
        Peso = peso;
    }
    void set_Costo(float costo) {
        Costo_por_kg = costo;
    }
    
    //Gets
    void get_Largo(float largo) {
        cout << Largo << endl;
    }
    void get_Ancho(float ancho) {
        cout << Ancho << endl;
    }
    void get_Profundidad(float profundidad) {
        cout << Profundidad << endl;
    }
    void get_Peso(float peso) {
        cout << Peso << endl;
    }
    void get_Costo(float costo) {
        cout << Costo_por_kg << endl;
    }



    //Funciones
    double calcularcosto() {
        if (Peso < 0)
        {
            cout << "Error. El peso tiene valor negativo" << endl;
            //exit;
        }
        if (Costo_por_kg < 0) 
        {
            cout << "Error. El Costo por Kg tiene valor negativo" << endl;
            //exit;
        }

        double costo = 70 + Peso * Costo_por_kg;
        return costo;

    }

};

class Sobre :Envio {
private:
    Direccion Remitente, Destinatario;
    float Largo, Ancho,Cargoadicional;
public:

    //Constructor
    Sobre(Direccion remitente, Direccion destinatario, float largo, float ancho) :Envio(remitente, destinatario) {
        Largo = largo;
        Ancho = ancho;
        Cargoadicional = 30;
        Remitente = remitente;
        Destinatario = destinatario;

    }
    //Sets
    void set_Largo(float largo) {
        Largo = largo;
    }
    void set_Ancho(float ancho) {
        Ancho = ancho;
    }
    void set_Cargo(float cargo) {
        Cargoadicional = cargo;
    }
    //Gets
    void get_Largo(float largo) {
        cout << Largo << endl;
    }
    void get_Ancho(float ancho) {
        cout << Ancho << endl;
    }
    void get_Cargo(float cargo) {
        cout << Cargoadicional << endl;
    }
    // Funciones
    double calcularcosto() { //Transformación: L
        if (Largo * Ancho > 750)
            cout << "Se aplicará un cargo adicional de " << Cargoadicional << endl;
        return 70 + Cargoadicional;
    }
};






int main()
{
    Direccion Direccion1 = Direccion("Jose", "California", 1138, 85210, "Obregon", "Sonora");
    Direccion Direccion2 = Direccion("Sofia", "Cananea", 1234, 85555, "San luis", "Chiapas");

    Envio Env1 = Envio(Direccion1, Direccion2);
    cout << Env1.calcularcosto() << endl; //Deberia print 70

    paquete Pak1 = paquete(Direccion1, Direccion2, 10, 5, 4, 20, 5);
    cout << Pak1.calcularcosto() << endl; //Deberia print 170

    Sobre sob1 = Sobre(Direccion1, Direccion2, 50, 20);
    cout << sob1.calcularcosto() << endl; //Deberia print 100

    



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

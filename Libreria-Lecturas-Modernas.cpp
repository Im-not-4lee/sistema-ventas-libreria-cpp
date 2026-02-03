// Elaborado Por: Alejandro Herrera Ballestas

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

float total_ventas = 0;        // total de ventas acumuladas
string libros[100];          // guarda nombre del libro
int precios_venta[100];      // guarda el total de ventas por libro
int contador = 0;            // cantidad de ventas registradas

// Registrar una venta
void registrarVenta() {
    string titulo;
    int cantidad;
    float precio;

    cin.ignore(); 
    cout << "Ingrese el titulo del libro: ";
    getline(cin, titulo);

    cout << "Ingrese la cantidad vendida: ";
    cin >> cantidad;

    cout << "Ingrese el precio unitario: ";
    cin >> precio;

    if (cantidad <= 0 || precio <= 0) {
        cout << "Error: La cantidad y el precio deben ser mayores a cero." << endl;
        return;
    }

    libros[contador] = titulo;
    precios_venta[contador] = cantidad * precio;
    total_ventas += cantidad * precio;

    contador++;
    cout << "Venta registrada con exito..." << endl;
}

// Mostrar total de ventas
void totalVentas() {
    cout << "El total de ventas acumuladas es: " << total_ventas << endl;
}

// Mostrar libro más vendido
void libroMasVendido() {
    if (contador == 0) {
        cout << "No hay ventas registradas.\n";
        return;
    }

    int mayor = precios_venta[0];
    int libro_mayor = 0;

    for (int i = 1; i < contador; i++) {
        if (precios_venta[i] > mayor) {
            mayor = precios_venta[i];
            libro_mayor = i;
        }
    }

    cout << "El libro mas vendido es: " << libros[libro_mayor]
         << " con un total de ventas de: " << mayor << endl;
}

void ingresoLibroEspecifico(string &libro) {
    int ingreso = 0;
    bool encontrado = false;

    for (int i = 0; i < contador; i++) {
        if (libros[i] == libro) {
            ingreso += precios_venta[i];
            encontrado = true;
        }
    }

    if (encontrado)
        cout << "El ingreso generado por el libro " << libro << " es: " << ingreso << endl;
    else
        cout << "El libro no se encuentra registrado." << endl;
}


void promedioVenta() {
    if (contador == 0) {
        cout << "No hay transacciones registradas.\n";
        return;
    }
    float promedio = (float) total_ventas / contador;
    cout << "El promedio de venta por transaccion es: " << promedio << endl;
}


int main() {
    int op;
    do {
        cout << "\t\tBienvenido a la libreria 'Lecturas Modernas'" << endl;
        cout << "\t----Menu----" << endl;
        cout << "1. Registrar Venta (titulo, cantidad y precio)." << endl;
        cout << "2. Calcular y mostrar el total de ventas acumuladas hasta el momento." << endl;
        cout << "3. Mostrar el libro mas vendido (segun cantidad de ejemplares vendidos)." << endl;
        cout << "4. Calcular y mostrar el ingreso generado por un libro especifico (consultado por el usuario)." << endl;
        cout << "5. Mostrar el promedio de venta por transaccion." << endl;
        cout << "6. Salir." << endl;
        cout << "Seleccione una opcion: ";  
        cin >> op;
        system("cls");

        switch (op) {
        case 1:
            registrarVenta();
            system("pause");
            system("cls");
            break;
        case 2:
            totalVentas();
            system("pause");
            system("cls");    
            break;
        case 3:
            libroMasVendido();
            system("pause");
            system("cls");    
            break;
        case 4: {
            string libro;
            cin.ignore();
            cout << "Ingrese el titulo del libro que desea consultar: ";
            getline(cin, libro);
            ingresoLibroEspecifico(libro);
            system("pause");
            system("cls");    
            break;
        }
        case 5:
            promedioVenta();
            system("pause");
            system("cls");    
            break;
        case 6:
            cout << "Gracias por usar el sistema de la libreria 'Lecturas Modernas'" << endl;    
            break;
        default:
            cout << "Opcion no valida, intente de nuevo." << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (op != 6);

    return 0;
}

# Sistema de Ventas de Librería en C++

Aplicación de consola desarrollada en C++ que permite registrar ventas de libros y calcular estadísticas básicas como el total de ventas, el promedio por transacción y el libro con mayor ingreso generado.

Este proyecto fue realizado con fines académicos para reforzar el uso de arreglos, funciones, validaciones y control de flujo en C++.

---

## 📌 Funcionalidades
- Registro de ventas (título del libro, cantidad y precio unitario)
- Cálculo del total de ventas acumuladas
- Identificación del libro con mayor ingreso generado
- Consulta del ingreso generado por un libro específico
- Cálculo del promedio de venta por transacción
- Menú interactivo en consola

---

## 🛠️ Tecnologías utilizadas
- Lenguaje: **C++**
- Arreglos estáticos
- Funciones
- Estructuras básicas de control (`if`, `for`, `switch`)
- Entrada y salida estándar (`cin`, `cout`)
- Programación en consola

---

⚠️ Consideraciones
- El sistema permite un máximo de 100 ventas registradas.
- El “libro más vendido” se determina según el mayor ingreso generado, no por la cantidad de ejemplares vendidos.
- No se utiliza almacenamiento persistente; los datos se pierden al cerrar el programa.

---

## ▶️ Compilación y ejecución
Desde la terminal:

```bash
g++ main.cpp -o libreria
./libreria


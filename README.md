# C++ Structures Exercises

## Descripción

Este repositorio contiene una colección de **ejercicios prácticos en C++ enfocados en el uso de estructuras (`struct`)**, uno de los conceptos fundamentales de la programación estructurada.

Los ejercicios incluyen ejemplos de:

- Definición de estructuras
- Arreglos de estructuras
- Estructuras anidadas
- Manipulación de datos ingresados por el usuario
- Búsqueda de valores máximos y mínimos
- Cálculo de promedios
- Organización de datos complejos

Estos ejercicios fueron realizados como práctica para fortalecer la comprensión de **estructuras de datos básicas en C++**.

---

## Ejercicios incluidos

### 1. Estructura Básica – Persona

Programa que define una estructura `Persona` con los campos:

- Nombre
- Edad
- Estatura

El programa solicita los datos al usuario y posteriormente los muestra en pantalla.

---

### 2. Corredor y Categoría de Competición

Se define una estructura `corredor` con los siguientes campos:

- Nombre
- Edad
- Sexo
- Club

Según la edad del corredor se asigna una categoría:

- **Juvenil** → edad ≤ 18  
- **Señor** → edad ≤ 40  
- **Veterano** → edad > 40  

Finalmente se muestran todos los datos del corredor junto con su categoría.

---

### 3. Empleados con Mayor y Menor Salario

Programa que almacena los datos de **N empleados** en un arreglo de estructuras.

Cada empleado tiene:

- Nombre
- Salario

El programa determina:

- Empleado con **mayor salario**
- Empleado con **menor salario**

---

### 4. Atleta con Más Medallas

Se crea una estructura `Atleta` con los campos:

- Nombre
- País
- Número de medallas

El programa identifica al **atleta con mayor número de medallas**.

---

### 5. Alumno con Promedio de Notas

Este ejercicio utiliza **estructuras anidadas**.

Se definen dos estructuras:

**Promedio**
- nota1
- nota2
- nota3

**Alumno**
- nombre
- sexo
- edad
- promedio (estructura anidada)

El programa calcula e imprime el **promedio de las notas del alumno**.

---

### 6. Tiempo Total de Etapas (Ciclismo)

Se define una estructura `Etapa` con:

- Horas
- Minutos
- Segundos

El programa permite ingresar **N etapas** y calcula el **tiempo total empleado** sumando correctamente horas, minutos y segundos.

---

### 7. Estructura Anidada – Empleados y Dirección

Este ejercicio utiliza **estructuras anidadas** para representar información más compleja.

**info_direccion**
- Dirección
- Ciudad
- Barrio

**empleado**
- Nombre
- Dirección (estructura anidada)
- Salario

El programa permite ingresar los datos de varios empleados e imprimirlos posteriormente.

---

## Tecnologías utilizadas

- **C++**
- Biblioteca estándar `iostream`
- Manejo de cadenas con `cstring`
- Entrada y salida por consola

---

## Conceptos de programación practicados

- `struct`
- Arreglos de estructuras
- Estructuras anidadas
- Entrada de datos con `cin` y `getline`
- Condicionales `if / else`
- Bucles `for`
- Búsqueda de valores máximos y mínimos
- Cálculo de promedios
- Manejo básico de memoria en arreglos

---

## Objetivo del repositorio

El objetivo de este repositorio es **practicar y comprender el uso de estructuras en C++**, organizando datos relacionados dentro de una misma entidad y aplicándolos en pequeños problemas prácticos.

---

## Autor

**Felipe Agudelo**  
Ingeniero Informático  
Desarrollador de Software y Videojuegos

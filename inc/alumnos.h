/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura con los datos de un alumno en particular
typedef struct alumno_s {
    //! variable designada para almacenar el apellido de un alumno en particular
    char apellidos[30];
    //! variable designada para almacenar el nombre de un alumno en particular 
    char nombres[30];
    //! variable designada para almacenar el número de documento de un alumno en particular
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/**
 * @brief Función que serializa en formato JSON la constante alumno en una cadena de caracteres, que contiene toda la información del alumno.
 * 
 * @param[out] cadena Puntero que apunta a la cadena de caracteres en donde se destina la serialización.
 * @param[in] espacio Espacio disponible de la cadena de caracteres.
 * @param[in] alumno Puntero que apunta a la estructura de datos que a su vez contiene los datos del alumno a serializar.
 * @return  La función retorna un TRUE si el proceso se realizo con éxito, mientras que un FALSE se usa para indicar que la serializacion no se realizo correctamente
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/**
 * @brief Función que se encarga de invocar a la función SerializarAlumno tantas veces como número de alumnos tenga registrado la constante ALUMNOS.
 * @param cadena Puntero que apunta a la cadena de caracteres en donde se almacenará los datos de todos los alumnos registrados en la constante ALUMNOS 
 * @param espacio Espacio disponible de la cadena de caracteres.
 * @return Indica con un TRUE si la serialización de un alumno se llevo a cabo con éxito y con un FALSE si no se pudo serializar los datos dal mismo.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */

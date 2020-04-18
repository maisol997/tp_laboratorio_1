#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void Funcionmenu(float x, float y, int flag1, int falg2);
/** \brief Muestra un menu de opciones que cambia segun el dato ingresado. Solo utilizable por este proyecto.
 *
 * \param Deja visible el primer operando en el menu.
 * \param Deja visible el segundo operando en el menu.
 * \param Bandera utilizada para definir si se indico el primer operando.
 * \param Bandera utilizada para definir si se indico el segundo operando.
 * \return Menu con sus datos correspondientes.
 *
 */

float funcionSuma (float,float);
/** \brief Realiza la suma de dos numeros
 *
 * \param Primer numero a ingresar
 * \param Segundo numero a ingresar
 * \return Resultado de la suma entre el primero y segundo numero ingresado.
 *
 */

float funcionResta (float,float);
/** \brief Realiza la resta de dos numeros
 *
 * \param Primer numero a ingresar
 * \param Segundo numero a ingresar
 * \return Resultado de la resta entre el primero y segundo numero ingresado.
 *
 */

float funcionDivision (float,float);
/** \brief Realiza la division de dos numeros
 *
 * \param Primer numero a ingresar
 * \param Segundo numero a ingresar
 * \return Resultado de la division entre el primero y segundo numero ingresado.
 * Si el segundo numero es 0 devuelve un 0.
 *
 */

float funcionMultiplicacion (float,float);
/** \brief Realiza la multiplicacion de dos numeros
 *
 * \param Primer numero a ingresar
 * \param Segundo numero a ingresar
 * \return Resultado de la multiplicacion entre el primero y segundo numero ingresado.
 *
 */

unsigned long long funcionFactorial (float);
/** \brief Convierte un numero flotante a entero y saca su factorial.
 *
 * \param Numero a ingresar
 * \return Factorial del numero ingresado. Si el numero es negativo devuelve -1, si el numero es 0 devuelve 1.
 *
 */

#endif // FUNCIONES_H_INCLUDED

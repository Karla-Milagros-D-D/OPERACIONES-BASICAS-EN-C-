/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.


KARLA MILAGROS DOMINGUEZ DOPORTO 

29 DE JULIO DE 2025   07:30PM

LENGUAJE DE PROGRAMACION 1 (Actividad#2 Operaciones Basicas en C++)

ESTE PROGRAMA SERA REALIZADO CON LA INTENCION DE REALIZAR OPERACIONES BASICAS TALES COMO SUMA,RESTA,MULTIPLICACION Y DIVISION 
CON LA INTENCION DE MEJORAR NUESTRAS CAPACIDAES EN EL USO Y APLICACION DEL LENGUAJE C++ .ESTO DADO QUE EL PROGRAMA SOLICTA DOS VALORES 
NUMERICOS LOS CUALES PUEDEN SER ENTEROS O DECIMALES,PARA CON ESTOS REALIZAR SUMA,RESTA,MULTIPLICACION Y DIVISION
PARA MOSTRAR EL RESULTADO EN PANTALLA CON UN ENUNCIADO CLARO.

NOTA: en el caso de la multiplicacion se agrego la condicion if para el numero1 y el numero2
ya que en cualquier caso al multiplicar esto da cero.


*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    float numero1, numero2;
    cout<<"ESCRIBE EL PRIMER NUMERO:";
    cin>> numero1;
    
    cout<<"ESCRIBE EL SEGUNDO NUMERO:";
    cin>> numero2;
    
    cout<<"LA SUMA ES:"<< numero1 + numero2<< endl;
    cout<<"LA RESTA ES:"<< numero1 - numero2<< endl;
    cout<<"LA MULTIPLICACION ES:"<< numero1 * numero2<< endl;
    
    if(numero1==0||numero2==0){
        cout<< "Aviso: AL MULTIPLICAR POR CERO SIEMPRE DA CERO"<<endl;
    }
    if (numero2 !=0){
        cout<<"LA DIVISION ES:"<< numero1/numero2<< endl;
    }else{
        cout<<"LA DIVISION NO ES POSIBLE(division entre cero)."<< endl;
    }
    return 0;
}
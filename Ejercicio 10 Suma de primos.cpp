#include<iostream>  
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
bool ComprobarPrimo(long num){//Funcion auxiliar para comprobar que el numero que comprobaremos posteriormente es primo
    long divisores=2;//comenzar a dividir desde el 2 ya que estamos salteando los divisores 1 y el mismo , para asi poder encontrar un divisor para saber si es primo o no 
    bool valor=true;//dedclaramos un valor booleano que se inicialice en true con el fin de iniciar como si el numero es un primo hasta que se encuentre un divisor que esta fuera del 1 y de el mismo
    if(num<2){//si el numero es 1 o menor entonces no es primo , ya  que los primos pertenecen a los naturales
        valor=false;//de cumplirse el valor de verda del  numero pasa  ser false es decir no es un primo
    }
    else{//si fuese 2 no ingresa al while por lo que el valor queda en true
        while(divisores<=sqrt(num) && valor==true ){//por una cuestion de optimizacion los divisores iniciaran desde el 2 hasta la raiz cuadrada del numero  , esto con el fin de que si el numero llega a tener raiz cuadrada exacta entonces tiene un divisor a  parte del 1 y el mismo
            if(num%divisores==0){//si al dividir este numero por el divisor que comienza en dos hasta la raiz del numero tiene un residuo 0 entonces el bucle while para ya que el valor de verdad ya no es true
                valor=false;//si se encuentra algun divisor entonces entonces el valor cambia a false
            }
            divisores+=1;//aumentaremos para seguir evaluando el siguiente numero
        }
    }
    return valor;//retornamos el valor de verdad
}
long long SumaDePrimos(long long num){//Esta funcion nos sumara aquellos primos menores a un numero dado como parametro
    long long contador=0;//Utilizaremos un contador con el fin de sumar aquellos primos que sean menores al numero dado
    for(long long i=2;i<num;i++){//la variable iteradora iniciara desde 2, ya que este es el primer primo , hasta que este llegue a el numero en cuestion , ya que en este caso no entrara al bucley sera el ultimo numero anterior al pedido
        if(ComprobarPrimo(i)==true){//de comprobarse que la variable iteradora es primo entonces se sumara al contdor iniciado en 0
            contador+=i;
        }
    }
    return contador;//me retorna la suma de los primos menores al numero limite
}
int main(){
    cout<<"La suma de los primos menores que 2000000 es "<<SumaDePrimos(2000000)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
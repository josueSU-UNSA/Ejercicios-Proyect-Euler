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
long primoNEsimo(long num){//declaramos la funcion que me busque el primo del orden que se nos pide como parametro
    long auxNum=2,auxPosicion=0;//utilizaremos dos variables una  que nos comience a probar los numeros, si son primos y otro para hacerle un seguimiento la posicion de primo que tiene
    while(auxPosicion<num){//de llegaar al numero pedido no entrara al bucle
        if(ComprobarPrimo(auxNum)==true){//de comprobarse que el numero es primo entonces sumaremos uno a la variable posicion esto con el fin de llegar al primo  n-esimo
            auxPosicion+=1;
        }
        auxNum+=1;//sumaremos uno a los numeros para que se  sigan probando
        
    }
    return auxNum-1;//le restamos uno al numero , ya que al final del while se suma 1 de mas
}
int main(){
    cout<<"El primo 10001 es "<<primoNEsimo(10001)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
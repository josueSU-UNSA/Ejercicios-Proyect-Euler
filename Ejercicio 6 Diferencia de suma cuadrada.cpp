#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
int Diferencia(int numero){
    return ((numero*(numero+1)*numero*(numero+1))/4)-((numero*(numero+1)*((2*numero)+1))/6);//para este problema evitaremos usar un bucle , por lo  que utilizaremos las formulas para ambas formas en   este  caso para (1+2+3+...+n)**2 e 1**2+2**2+...+n**2
}//(n*(n+1)/2)**2-(n*(n+1)*(2n+1)/6)
int main(){
    cout<<"Los multiplos de 3 y 5 menores que 1000 es "<<Diferencia(100)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
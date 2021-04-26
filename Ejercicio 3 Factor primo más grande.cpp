#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
long long Primo(long long numero){//declaramos la funcion para buscar el factor primo mas grande
    long long mayor;//utilizaremos una variable para guardar  este factor primo que necesitamos
    for(long long i=2;numero>1;i++){//usamos un bucle for que iniciara en dos , ya que es el primero primo hasta que el numero ingresado sea 1
        while(numero%i==0){//este bucle while nos ayudara a encontrar aquellos factores primos que necesitamos, ya que dividira el numero ingresado con el valor de la variable iteradora hasta que ya no pueda dividir entre esta y seguir con  la siguiente 
            numero/=i;//dividimos la funcion para que en un momento llegue a 1 es decir que ya se encontro el factor primo mayor
            }
        mayor=i;//el factor primo mayor sera aquel numero que por ultima vez pudo dividir al numero ingresado, por lo tanto seria el mayor
    }
    return mayor;//retornamos este factor primo mayor
}
int main(){
    cout<<"El factor primo mas grande de 600851475143 es "<<Primo(600851475143)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
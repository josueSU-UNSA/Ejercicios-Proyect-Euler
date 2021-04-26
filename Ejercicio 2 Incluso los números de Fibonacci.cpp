#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
int Fibonnacci(int numero){//usamos una funcion  auxiliar que me de los numeros de fibonacci con el fin de utilizarlos en la posterior funcion
    if(numero==1){//este fibonacci inicia en 1 y 2
        return 1;//casos bases
    }
    if(numero==2){
        return 2;
    }
    else{//caso recursivo para hallar el fibonacci
        return Fibonnacci(numero-1)+Fibonnacci(numero-2);
    }
}
int SumaParesFibonacci(int limite){//funcion para sumar los pares que son fibonacci
    int i=2,contador=0;//utilizaremos dos variables el primero para pasar por los numeros fibonacci
    while(Fibonnacci(i)<=limite){
        if(Fibonnacci(i)%2==0 ){//si el numero es par se le agrega dicho numero al contador
            contador+=Fibonnacci(i);   
        }
        i+=1;//agregamos para que siga pasando los numeros 
    }
    return contador;//retornamos el contador
}
int main(){
    cout<<"La suma de los numeros especiales de fibonacci menores a cuatro millones es "<<SumaParesFibonacci(4000000)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
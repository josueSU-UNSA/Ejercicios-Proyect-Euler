#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
int funcionMultiplos3y5(int limite){
    int contador=0;//inicializamos un contador en 0
    for (int i=3;i<limite;i++){//un bucle para encontrar aquellos numeros empezando desde el 3 ya que es el primer numero divisible por uno de estos numeros
        if(i%3==0||i%5==0){//si el numero es divisible por 3 y/o 5 sumo este numero al contador
            contador+=i;
        }
    }
    return contador;//retornamos el total del contador
}
int main(){
    cout<<"Los multiplos de 3 y 5 menores que 1000 es "<<funcionMultiplos3y5(1000)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
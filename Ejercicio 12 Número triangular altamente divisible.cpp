#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
//Este problema al pedirnos el multipli mas pequeño esta claro que debemos utilizar el algoritmo de euclides ,pero para realizar el algoritmo de euclides aplicado al minimo comun multiplo primero debemos calcular el maximo comun divisor
int numDivisores(int num){
    int count=0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            count+=2;
        }
    }
    return count+2;
}
long numTriangularDivisores(int num){
    long iterador=1;
    while(true){
        if(numDivisores(iterador*(iterador+1)/2)>num){
            return iterador*(iterador+1)/2;
        }
        iterador+=1;
    }
    //return aux;
}
int main(){
    cout<<numTriangularDivisores(500)<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
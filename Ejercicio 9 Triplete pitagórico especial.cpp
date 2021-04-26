#include<iostream>  
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;
long TripletePitagorico(){
    for (int num1=1; num1<1000;num1++){//utilizamos 3 bucles anidados para hacer la busqueda de los tres numeros que queremos encontrar
        for (int num2=1; num2<1000;num2++){
            for (int num3=1; num3<1000;num3++){
                if (num1*num1+num2*num2==num3*num3 && num1+num2+num3==1000)//no utilizo el pow ya que en mi caso particular se hizo un poco mas pesado el programa
                    return num1*num2*num3;//me retorna el producto de los tres numeros que me cumpla las propiedades del if que es que sea un triangulo pitagorico ,ademas de sumar 100
            }
        }
    }
}
int main(){
    cout<<"El producto del triplete pitagorico que suma 100 es "<<TripletePitagorico()<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
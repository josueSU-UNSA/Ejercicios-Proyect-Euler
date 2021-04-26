#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
using namespace std;
long long factCamino(int number){//utilizamos teoria de combinatoria es decir nªcaminos=(A+D)!/A!*D! , haciendo unas simplificaiones quedaria 40*39*38*...*21/20!, y por ser aun muy pesado haremos uso de simplificaciones
    long long num=1,den=1;//utilizaremos dos variables auxuliares para realizar las simplificaciones
    for(int i=2*number;i>number;i-=1){//utilizaremos un bucle que nos permita recorrer los valores para simplificarlos ya que se puede notar que el numerador tiene como varios factores , numeros que contiene el deenominador
        num=num*i;//el numerador se multiplica por el valor para causar la multiplicacion que nos ayudara posteriormente con la simplificacion
        if(num%(i-20)==0){//al restarle 20 verificamos si tiene algun factor de nuestra division entre nuestro 20!
            num=num/(i-20);//simplificamos este factor en comun entre el numerador y denominador
        }else{//de no tener ningun factor en comun para simplificar entonces solo multiplicamos el divisor de nuestra division entre 40*39*38*...*21/20!
            den=den*(i-20);//se le multiplica este factor al denominador
        }
        
    }
    return num/den;//dividimos tanto el numerador con el denominador esto con el fin e obtener nuestro resultado usando la simplificacion
}
int main(){
    cout<<factCamino(20)<<endl;
    getch();
    return 0;
}


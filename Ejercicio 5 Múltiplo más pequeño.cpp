    #include<iostream>
    #include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
    #include<math.h>//libreria para utilizar en algunas operaciones
    using namespace std;
    //Este problema al pedirnos el multipli mas pequeño esta claro que debemos utilizar el algoritmo de euclides ,pero para realizar el algoritmo de euclides aplicado al minimo comun multiplo primero debemos calcular el maximo comun divisor
    int MCD(int num1,int num2){
        int resto=1;
        while (resto !=0){
            resto=num1%num2;
            num1=num2;
            num2=resto;
        }
        return num1;
    }
    int MCM(int num1,int num2){
        int aux;
        aux=(num1*num2)/MCD(num1,num2);
        return aux;
    }
    int SmallMultiple(int num1){
        int aux=1;
        for (int i=1;i<num1;i++){
            aux=MCM(aux,i);
        }
        return aux;
    }
    int main(){
        cout<<"El multiplo mas pequeño del 1 al 20 es "<<SmallMultiple(20)<<endl;
        getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
        return 0;
    }           
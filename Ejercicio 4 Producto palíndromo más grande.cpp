#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
#include<math.h>//libreria para utilizar en algunas operaciones
using namespace std;    
bool capicua(int numero){//funcion comprueba que es polindromo
    size_t residuo;
    int valorAux=numero,palindromo=0;//utilizaremos dos variables uno para ir sacando los residuos del numero que queremos probar si es capicua
    while (valorAux>0){//si la varible llega a ser cero entonces quiere decir que y no se puede seguir sacando resto
        residuo=valorAux%10;//el residuo sera aquel que saldra de la division entre 10 de la varible auxiliar 
        valorAux=valorAux/10;//el valor de la  variable auxiliar se actualizara a la division  exacta para quedarnos con el numero sin el residuo
        palindromo=palindromo*10+residuo;//la variable que formara el capicua hara el  proceso contrario de el anterior proceso
    }
    if (palindromo==numero){
        return true;//si el  capicua es  el mismo que  el numero se puede comprobar que es palindromo de lo contrario no
    }    
    else{
        return false;
    }
}
//producto de funciones
long int capicuamax(){//esta funcion nos servira para calcular los maximos , es decir los productos  de 3 cifras
    long int aux=0;//esta variable auxiliar sera la encargada de buscarnos el mayor , ya que aqui se depositaran aquellos productos que sean capicuas y  los ira comparando entre si para  encontrar el mayor 
    for(int i=999;i>=100;i--){//utilizaremos dos variables iteradoras que nos permitan hallar los productos de los mayores de 3 cifras 
        for(int j=999;j>=100;j--){
            if(capicua(i*j) == true && i*j>aux){//si el producto cumple la propiedad de ser caapicua, ademas la segunda condicion nos serivira para ir agarrando el mayor de estos productos
                aux=i*j;//de cumplirse que el  producto es mayor que la variable auxiliar entonces cambia de valor
            }
        }
    }
    return aux;//me retornara el mayor  capicua resultado  del producto de dos numeros de 3 cifras
}
int main(){
    cout<<"El capicua maximo originario de la multiplicacion de dos numeros de tres cifras es "<<capicuamax()<<endl;
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}
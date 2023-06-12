#include <iostream>
#include <math.h> //logicamente, si queremos programar una serie matematica
#include <iomanip>
using namespace std;

int main() {
    double pi {0}; //double para que todo vaya bien con los decimales
    int decimales = 1000000;
    for(int i=0 ; i<decimales ; i++){ // "i" vendria a ser nuestra "n" de la serie de leibniz
        float numerador = pow(-1,i);
        int denominador = 2 * i + 1;
        pi += numerador/denominador;
    }
    pi*=4;
    cout << "el numero pi es igual a: " << setprecision(6) << fixed << pi << endl;

    /*El motivo por el que la variable "decimales" es un millon, es porque es el primer numero que pruebo que logra esos 6 decimales correctos. 
    Probe con 900 mil y solo eran 5 decimales correctos. El motivo de esto es porque esta serie crece muy lento!
    Como comentario personal, me encantan las matematicas, y probar esto y ver lo lento que creece fue muy enriqucedor.*/ 
    return 0;
}
#include "functions.h"

int main(){
    srand(time(0)); //semilla

    //inicializar n
    long int n = 10000000;
    //inicializar K
    long int min = 70000000;
    long int max = 90000000;

    vector<long int> arreglo1 = generar_arreglo(n,min,max);
//    cout << "Arreglo 1 desordenado:\n " << arreglo1;
//    cout <<"Arreglo 1 ordenado:\n ";
    //medir tiempo
    auto start_time = chrono::high_resolution_clock::now();
    countsort(arreglo1);
//    cout << arreglo1;
    auto end_time = chrono::high_resolution_clock::now();
    //tiempo en ms
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << boolalpha << is_sorted(arreglo1.begin(),arreglo1.end()) << endl;
    cout << "Tiempo de ejecucion para el arreglo1: " << duration.count() << " ms" <<endl << string(50,'-') << endl;
    

    //radix sort
    vector<long int> arreglo2 = generar_arreglo(n,min,max);
//    cout << "Arreglo 2 desordenado:\n " << arreglo2;
//    cout <<"Arreglo 2 ordenado:\n ";
    //medir tiempo
    auto start_time2 = chrono::high_resolution_clock::now();
    radix_sort(arreglo2);
//    cout << arreglo2;
    auto end_time2 = chrono::high_resolution_clock::now();
    //tiempo en ms
    auto duration2 = chrono::duration_cast<chrono::milliseconds>(end_time2 - start_time2);
    cout << boolalpha << is_sorted(arreglo2.begin(),arreglo2.end()) << endl;
    cout << "Tiempo de ejecucion para el arreglo2: " << duration2.count() << " ms" <<endl;
    return 0;
}

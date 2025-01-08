#include "DyV.h"
#include<vector>

int main(){

	std::vector<int> a{1, 18, 5};           //Vector de ints 
	std::vector<double> b{1.1, 2.2, 3.3};   //Vector de floats con 3 elementos
	std::vector<int> c{1, 2, 3};            //Vector de shorts con 3 elementos

	std::cout << "Busqueda Binaria Int: "<<BusquedaBinaria(18, a, 0, 2)<<"\n";
	std::cout << "Busqueda Binaria Double: "<<BusquedaBinaria(2.2, b, 0, 2)<<"\n";
	std::cout << "Busqueda Binaria Int: "<<BusquedaBinaria(2, c, 0, 2)<<"\n";


}

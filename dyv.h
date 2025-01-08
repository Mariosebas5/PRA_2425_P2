#include <iostream>
#include <vector>
template <typename T>

int BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){
        if (ini>fin){
                std::cout<<"No se ha encontrado en el array";
    		return -1;
	}
	int medio=(ini+fin)/2;
	if (v[medio]==x){
		return medio;
	}
	else if (v[medio]>x){
		return BusquedaBinaria(x,v,ini,medio-1);
	}

	else{
               return BusquedaBinaria (x,v,medio+1,fin);
	}
}

template<typename T>
int BusquedaBinariainv(T x, std::vector<T>& v, int ini, int fin){
        if (ini>fin){
                std::cout<<"No se ha encontrado en el array";
    		return -1;
	}
	int medio=(ini+fin)/2;
	if (v[medio]==x){
		return medio;
	}
	else if (v[medio]>x){
		return BUsquedaBinariainv(x,v,medio+1,fin);
	}

	else{
               return BusquedaBinariainv(x,v,ini,medio-1);
	}
}
			
template<typename T>	
int PartitionINI(std::vector<T>& v, int ini, int fin){
	T x = v[ini];
	int i = ini;
	int j ;	
	for(j = ini ;j < fin; j++){

	     if(v[j] <= x){
	       int aux = v[i];
	       v[i] = v[j];
 	       v[j] = aux;
	       i = i +1;
	     }
	}
	int aux1 = v[i];
	v[i] = v[fin];
	v[fin] = aux1;
	return i;
}
template<typename T>
void QuickSortINI(std::vector<T>& v, int ini, int fin){

	if(ini < fin){
		int pivot = PartitionINI(v, ini, fin);
		QuickSortINI(v, ini, pivot-1);
		QuickSortINI(v, pivot +1, fin);
	}
}

template<typename T>
int PartitionMED(std::vector<T>& v, int ini, int fin){
  int medio = (ini +fin) / 2;
  T x = v[medio];
	int i = ini;
	int j;	
	for(j = ini; j<=fin; j++){

	      if(v[j] < x){
	      int aux = v[i];
	      v[i] = v[j];
 	      v[j] = aux;
	      i = i +1;
	      }
	}
	int aux1 = v[i];
	v[i] = v[medio];
	v[medio] = aux1;
	return i;
}

template<typename T>
void QuickSortMED(std::vector<T>& v, int ini, int fin){
	
	if(ini < fin){
		int pivot = PartitionMED(v, ini, fin);
		QuickSortMED(v, ini, pivot -1);
		QuickSortMED(v, pivot +1, fin);
	}
}
template<typename T>
int Partition(std::vector<T>& v, int ini, int fin){
        T x = v[fin];
        int i = ini;
        int j ;
        for(j = ini ;j < fin; j++){

               if(v[j] <= x){
               int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                i = i +1;
               }
        }
        int aux1 = v[i];
        v[i] = v[j];
        v[j] = aux1;
        return i;
}

template<typename T>
void QuickSort(std::vector<T>& v, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot -1);
		QuickSort(v, pivot +1, fin);
	}
}





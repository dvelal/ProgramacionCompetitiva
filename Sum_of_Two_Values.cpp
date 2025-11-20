/*el problema dice que dado una cantidad de numeros "n" hallar dos numeros las cuales sumados den un numero "x" y imprimir el indice
del numero, como si se tratara de un arreglo, si hay varios entonces imprimir solo una solucion y si no hay solucion entonces 
imprimir impossible*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long x;
	cin>>n>>x;// n: cantidad de numeros, x: numeros deseado
	
	//segun enetendi es como una libreria en donde se guarda un valor en una clave o podiamos decir indice 
	unordered_map<long long,int> mapa;
	
	for(int h=0; h<n;h++){ //ingresamos los numeros
		long long v;
		cin>>v;
		
		//condicion para que la suma de dos numeros sea el deseado "x" , si el numero ingresado es mayor que al que queremos llegar
		//entonces no se puede sumar con ningun positivo 
		if(v<=x){
		 
		//calculamos el complemento
		long long comple=x-v;
		
		//si el complemento se encuenta en el arreglo, osea es diferente del vacio 
		if(mapa.find(comple)!=mapa.end()){
			//imprimimos el indice del for donde esta sumado mas 1 e imprimimos el complemento
			cout<<h+1<<endl;
			cout<<mapa[comple]+1;//complemento
			return 0;
		}
		//arreglo donde el valor "v" tiene la posicion del indice "h"
		mapa[v]=h;
		}
	}
	//caso de que no haya solucion
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}
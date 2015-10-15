#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numSedes;
	int kilometros, menor, mayor;
	cin>>numSedes;
	menor = 5000;
	mayor= 0;
	for(int i=0;i<numSedes;i++){
		cin>>kilometros;
		if(kilometros > mayor)
			mayor = kilometros;
		if(kilometros < menor)
			menor = kilometros;
	}
	cout<<mayor-menor<<"\n";
	return 0;
}

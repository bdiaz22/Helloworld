#include <iostream>
using namespace std;
 
void leeroracion(char& letra){
 
    do{
    cout << "Ilabra: " << endl;
    cin.get(letra);
    }while (letra!='.');
}
 
 
void contar(unsigned n){
    char letra;
    while (letra!='.'){
    unsigned cont=0;
        while (letra!=' '){
            cont++;
            cin.get(letra);
        }
        cout << cont << " ";
    }
}
 
int main(){
    unsigned n;
    char letra;
 
leeroracion (letra);
 
contar (n);
 
return 0;
}
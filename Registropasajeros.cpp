#include <iostream>
#include <string>
using namespace std;

string Nombre;
int Destino;
struct nodo {
    int Cedula;
    nodo *sig;
};
nodo *cab, *aux, *aux2;

void registrar_pasajeros(){
    aux = (struct nodo *) malloc (sizeof(nodo));
    cout<<"Nombre del pasajero: "<<endl;
    cin>>Nombre;
    cout<<"Documento del pasajero: ";
    cin>>aux->Cedula;
    aux->sig = NULL;
    if(!cab){
        cab = aux;
    } else {
        aux2=cab;
        while(aux2->sig!=NULL){
            aux2 = aux2->sig;
        }
        aux2->sig = aux;
    }
}

void mostrar_pasajeros(){
   
}

void Destinos(){
    cout<<"----------Lugares que puedes visitar---------"<<endl<<"1) La Bocana"<<endl<<"2) Pianguita"<<endl<<"3) Ladrilleros"<<endl;
}

int main(){
    int opcion;
    do {
        cout<<"Menu"<<endl<<"1) Registrar Pasajero"<<endl<<"2) Mostrar Pasajero"<<endl
        <<"3) Ver Destinos"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            registrar_pasajeros();
        break;
        case 2:
            mostrar_pasajeros();
        break;
        case 3: 
            Destinos();
        break;
        }
    }while(opcion!=5);
}

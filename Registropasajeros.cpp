#include <iostream>
#include <string>
using namespace std;

string Nombre;
struct nodo {
    int Cedula;
    nodo *sig;
    int op;
    int Destino;
    
};
nodo *cab, *aux, *aux2;

void registrar_pasajeros(){
    aux = (struct nodo *) malloc(sizeof(struct nodo));
    cout<<"Nombre del pasajero: "<<endl;
    cin>>Nombre;
    cout<<"Documento del pasajero: ";
    cin>>aux->Cedula;
    aux->sig = NULL;
    cout << "Seleccione el destino:\n";
    cout << "1: La Bocana\n";
    cout << "2: Pianguita\n";
    cout << "3: Ladrilleros\n";
    cout << "Ingrese el numero del destino: ";
    cin >> aux->Destino;
    
    while (aux->Destino < 1 || aux->Destino > 3) {
        cout << "Destino invalido. Ingrese nuevamente (1, 2, o 3): ";
        cin >> aux->Destino;
    } aux->sig = NULL;
    
    if (!cab) {
        cab = aux;  
    } else {
        aux2 = cab;
        while (aux2->sig != NULL) {
            aux2 = aux2->sig;  
        }
        aux2->sig = aux;  
    }

}


void mostrar_pasajeros(){
    aux=cab;
    while(aux!=NULL){
        cout<<"Pasajero: "<<Nombre<<endl;
        cout<<"Documento: "<<aux->Cedula<<endl;
          switch (aux->Destino) {
            case 1:
                cout << "Destino: La Bocana" << endl;
                break;
            case 2:
                cout << "Destino: Pianguita" << endl;
                break;
            case 3:
                cout << "Destino: Ladrilleros" << endl;
                break;
        }
        aux = aux->sig;
    }
    

        }
    

void Destinos(){
    cout<<"----------Lugares que puedes visitar---------"<<endl<<"1) La Bocana"<<endl<<"2) Pianguita"<<endl<<"3) Ladrilleros"<<endl;
}

void Ordenar_destino(){
int temporal_destino;
    aux2 = cab;
    while (aux2->sig != NULL) {
        aux = cab;
        while (aux->sig != NULL) {
            if (aux->Destino > aux->sig->Destino) {
                temporal_destino = aux->Destino;
                aux->Destino = aux->sig->Destino;
                aux->sig->Destino = temporal_destino;
            }
            aux = aux->sig;
        }
        aux2 = aux2->sig;
    }

}
void Ordenar_documento(){
    int temporal;
    aux2 = cab;
    while(aux2->sig!=NULL){
        aux = cab;
        while(aux->sig!=NULL){
            if(aux->Cedula>aux->sig->Cedula){
                temporal = aux->Cedula;
                aux->Cedula = aux->sig->Cedula;
                aux->sig->Cedula = temporal;
            }
            aux = aux->sig;
        }
        aux2 =aux2->sig;
    }

}
int main(){
    int opcion;
    do {
        cout<<"Menu"<<endl<<"1) Registrar Pasajero"<<endl<<"2) Mostrar Pasajero"<<endl
        <<"3) Ver Destinos"<<endl<<"4) Ordenar por documento"<<endl<<"5) Ordenar por destino"<<endl;
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
        case 4:
            Ordenar_documento();
        
        case 5:
            Ordenar_destino();
        }
    }while(opcion!=6);
}


#include "gatodomestico.cpp"
#define TAM 50

//plantillas
class Lista {
    private:
        GatoDomestico datos[TAM];
        int ult;
    public:
        Lista():ult(-1) {}

        int buscar(GatoDomestico elem) {
            int i=0;
            while(i<=ult) {
                if(elem ==datos[i]) {
                    return i;
                    }
                i++;
                }
            return -1;
            }

        void imprime() {
            if(!vacia()) {
                    cout<<"Dieta\tRaza\tANac\tLugar de Nacimiento\tDueno"<<endl;
                for(int i=0; i<=ult; i++) {
                    std::cout<<datos[i].toString()<<std::endl;
                    }
                }
            }

        bool vacia()const {
            return ult==-1;
            }
        bool llena()const {
            return ult==TAM-1;
            }

        bool inserta(GatoDomestico elem, int pos) {
            if(llena() || pos<0 || pos>ult+1) {
                cout<<"Lista LLena o Posicion Invalida"<<endl;
                return false;
                }
            int i=ult+1;
            while(i>pos) {
                datos[i]=datos[i-1];
                i--;
                }
            datos[pos]=elem;
            ult++;
            return true;
            }

        bool elimina(int pos) {
            if(vacia() || pos<0 || pos>ult) {
                cout<<"Lista vacia o Posicion Invalida"<<endl;
                return false;
                }
            int i=pos;
            while(i<ult) {
                datos[i]=datos[i+1];
                i++;
                }
            ult--;
            return true;
            }

        GatoDomestico recupera(int pos)const {
            if(vacia() || pos<0 || pos>ult-1) {
                //Manejar exceptions
                }
            else {
                return datos[pos];
                }
            }

        int primero()const {
            if(vacia()) {
                return -1;
                }
            return 0;
            }
        int ultimo()const {
            if(vacia()) {
                return -1;
                }
            return ult;
            }

        bool agregar(GatoDomestico g) {
            if(llena()) {
                cout<<"Lista LLena"<<endl;
                return false;
                }
            ult++;
            datos[ult]=g;
            return true;
            }
    };



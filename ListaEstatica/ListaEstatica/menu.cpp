#include "lista.cpp"

using namespace std;

class Menu {
    private:
        Lista l;
    public:
        Menu() {
            showMenu();
            }

        void showMenu() {
            int op;

            do {
                system("cls");
                cout<<"Ingrese una opcion: "<<endl;
                cout<<"1. Agregar un GatoDomestico "<<endl;
                cout<<"2. Buscar un GatoDomestico "<<endl;
                cout<<"3. Eliminar un GatoDomestico"<<endl;
                cout<<"4. Insertar un GatoDomestico "<<endl;
                cout<<"5. Mostrar lista "<<endl;
                cout<<"6. Salir "<<endl;
                cout<<"Opcion: ";
                cin>>op;

                switch(op) {
                    case 1:
                        add();
                        break;
                    case 2:
                        src();
                        break;
                    case 3:
                        del();
                        break;
                    case 4:
                        ins();
                        break;
                    case 5:
                        show();
                        break;
                    case 6:
                        cout<<"Saliendo....";
                        break;
                    default:
                        cout<<"Opcion Invalida"<<endl<<endl;
                    }
                }
            while(op!=6);
            }

        void add() {
            GatoDomestico g;
            string data1;
            int data2;

            cin.ignore();
            cout<<"Ingrese la dieta: ";
            getline(cin,data1);
            g.setDieta(data1);
            cout<<"Ingrese la raza: ";
            getline(cin,data1);
            g.setRaza(data1);
            cout<<"Ingrese el año de nacimiento: ";
            cin>>data2;
            g.setAn(data2);
            cout<<"Ingrese el lugar de Nacimiento: ";
            cin.ignore();
            getline(cin,data1);
            g.setLugarN(data1);
            cout<<"Ingrese el nombre del dueño: ";
            getline(cin,data1);
            g.setDueno(data1);
            if(l.agregar(g)){
                cout<<"Con Exito"<<endl;
                system("pause");
            }else{
                cout<<"Sin Exito"<<endl;
                system("pause");
            }


            }

        void src() {
            GatoDomestico g;
            string data1;
            int data2;

            cin.ignore();
            cout<<"Ingrese la dieta: ";
            getline(cin,data1);
            g.setDieta(data1);
            cout<<"Ingrese la raza: ";
            getline(cin,data1);
            g.setRaza(data1);
            cout<<"Ingrese el año de nacimiento: ";
            cin>>data2;
            g.setAn(data2);
            cout<<"Ingrese el lugar de Nacimiento: ";
            cin.ignore();
            getline(cin,data1);
            g.setLugarN(data1);
            cout<<"Ingrese el nombre del dueño: ";
            getline(cin,data1);
            g.setDueno(data1);
            data2 = l.buscar(g);
            if(data2<0) {
                cout<<"El gato no esta registrado"<<endl;
                }
            else {
                cout<<"El Gato se encuentra en al posicion: "<<data2<<endl;
                }
            system("pause");


            }

        void ins() {
            GatoDomestico g;
            string data1;
            int data2;

            cin.ignore();
            cout<<"Dame el GatoDomestico a insertar"<<endl;
            cout<<"Ingrese la dieta: ";
            getline(cin,data1);
            g.setDieta(data1);
            cout<<"Ingrese la raza: ";
            getline(cin,data1);
            g.setRaza(data1);
            cout<<"Ingrese el año de nacimiento: ";
            cin>>data2;
            g.setAn(data2);
            cout<<"Ingrese el lugar de Nacimiento: ";
            cin.ignore();
            getline(cin,data1);
            g.setLugarN(data1);
            cout<<"Ingrese el nombre del dueño: ";
            getline(cin,data1);
            g.setDueno(data1);
            cout<<"Ingrese la posicion en la lista: ";
            cin>>data2;

            if(l.inserta(g,data2)){
                cout<<"Con Exito"<<endl;
                system("pause");
            }else{
                cout<<"Sin Exito"<<endl;
                system("pause");
            }
            }

        void del() {
            int data;
            cout<<"Dame la posicion del GatoDomestico a eliminar: ";
            cin>>data;

            if(l.elimina(data)){
                cout<<"Con Exito"<<endl;
                system("pause");
            }else{
                cout<<"Sin Exito"<<endl;
                system("pause");
            }
            }

        void show() {
            l.imprime();
            system("pause");
            }


    };





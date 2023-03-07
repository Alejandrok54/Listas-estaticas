#include <iostream>
#include <string>

using namespace std;

class Mamifero{
private:
    //Dieta
    string dieta;
    //Raza
    string raza;
    //año y lugar de nacimiento
    int an;
    string lugarN;
public:
    Mamifero(){}
    Mamifero(const string& d,const string& r,const int& a,const string& l):dieta(d),raza(r),an(a),lugarN(l){}
    //Constructor copia
    Mamifero(const Mamifero& m){
        this->dieta = m.getDieta();
        this->raza = m.getRaza();
        this->an = m.getAn();
        this->lugarN = m.getLugarN();
    }
    //==
    friend bool operator==(Mamifero& x,Mamifero& y){
        if(x.dieta.compare(y.dieta)==0 && x.raza.compare(y.raza)==0 && x.an == y.an && x.lugarN.compare(y.lugarN)==0 ){
            return 1;
        }else{
            return 0;
        }

    }
    //!=
    friend bool operator!=(Mamifero& x,Mamifero& y){
        if(x.dieta.compare(y.dieta)==0 && x.raza.compare(y.raza)==0 && x.an == y.an && x.lugarN.compare(y.lugarN)==0 ){
            return 0;
        }else{
            return 1;
        }
    }
    //<
    friend bool operator<(Mamifero& x,Mamifero& y){
        if(x.an < y.an){
            return 1;
        }else{
            return 0;
        }

    }
    //>
    friend bool operator>(Mamifero& x,Mamifero& y){
         if(x.an > y.an){
            return 1;
        }else{
            return 0;
        }

    }
    //+
    friend Mamifero& operator+(Mamifero& x,Mamifero& y){
        x.dieta = "\nDieta Minino: "+x.dieta+"\nDieta EstrellaCirco: "+y.dieta;
        x.raza = "\nRaza Minino: "+x.raza +" \nRaza EstrellaCirco: "+ y.raza;
        x.lugarN = "\nLugar de Nacimiento Minino: "+x.lugarN + "\n Lugar de Nacimiento EstrellaCirco: "+y.lugarN;
        return x;
    }

    //=
    Mamifero& operator=(const Mamifero& m){
        this->dieta = m.getDieta();
        this->raza = m.getRaza();
        this->an = m.getAn();
        this->lugarN = m.getLugarN();
        return *this;
    }

    string getDieta() const{
        return dieta;
    }


    string getRaza() const{
        return raza;
    }

    int getAn() const{
        return an;
    }

    string getLugarN() const{
        return lugarN;
    }

    void setDieta(const string& d){
        dieta = d;
    }

    void setRaza(const string& r){
        raza = r;
    }

    void setAn(const int& a){
        an = a;
    }

    void setLugarN(const string& l){
        lugarN = l;
    }
};

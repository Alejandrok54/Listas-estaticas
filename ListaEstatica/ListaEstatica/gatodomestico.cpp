#include "mamifero.cpp"

class GatoDomestico : public Mamifero{
private:
    //Dueño
    string dueno;
    void copyObj(const GatoDomestico& g){
        //dieta = g.getDieta();
        dueno = g.dueno;
    }
public:
    GatoDomestico(){};
    GatoDomestico(const string& d,const string& r,const int& a,const string& l,const string& du):Mamifero(d,r,a,l),dueno(du){};

    GatoDomestico(const GatoDomestico& g){
        setDieta(g.getDieta());
        setRaza(g.getRaza());
        setAn(g.getAn());
        setLugarN(g.getLugarN());
        dueno = g.dueno;
    }

     string getDueno(){
        return dueno;
    }

    void setDueno(const string& d){
        dueno = d;
    }

    string toString(){
        return getDieta()+"\t"+getRaza()+"\t"+to_string(getAn())+"\t"+getLugarN()+"\t"+dueno+"\n";
    }

    GatoDomestico& operator=(const GatoDomestico& g){
        setDieta(g.getDieta());
        setRaza(g.getRaza());
        setAn(g.getAn());
        setLugarN(g.getLugarN());
        dueno = g.dueno;
        return *this;
    }

    bool operator==(const GatoDomestico& g){
        return getDieta().compare(g.getDieta())==0 && getRaza().compare(g.getRaza())==0 && getAn() == g.getAn() && getLugarN().compare(g.getLugarN())==0 && dueno.compare(g.dueno)==0;
    }

};

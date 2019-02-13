#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
//recolectado por pasaporte

  int rNinos=0;
     int rElemental=0;
    int rZafiro=0;
    int rGold=0;
     int rPlatino=0;

     int edad;
     //personas que compraron ese pasaporte

      int ninos=0;
      int elemental=0;
      int zafiro=0;
      int gold=0;
      int platino=0;

int Pasaporte(int pasaporte,int pPlatino){
    int precio;
    switch(pasaporte){


    case 1:
        precio=pPlatino;
        break;
    //precio de gold
    case 2:
        precio=(pPlatino)*80/100;
        break;
     //precio de zafiro
    case 3:
        precio=(pPlatino)*60/100;
        break;
     //precio de elemental y ninos
    case 4:
        precio=(pPlatino)*40/100;
        break;


    return precio;
    }
}
void Entrar(int pPlatino){

    int recolectado,pasaporte;

        cout<<"ingrese su edad"<<endl;
        cin>>edad;
        if(edad>0&&edad<=6){
            cout<<"tiene pasaporte niños"<<endl;
            ninos+=1;
            rNinos+=Pasaporte(4,pPlatino);
        }
        else if(edad>6 && edad < 100){
            cout<<"que pasaporte desea"<<endl;
            cout<<"1.platino"<<endl;
            cout<<"2.gold"<<endl;
            cout<<"3.zafiro"<<endl;
            cout<<"4.elemental"<<endl;
            cin>>pasaporte;
            switch(pasaporte){
                case 1:
                    platino+=1;
                    rPlatino+=Pasaporte(1,pPlatino);
                    break;
                case 2:
                    gold+=1;
                    rGold+=Pasaporte(2,pPlatino);
                    break;
                case 3:
                    zafiro+=1;
                    rZafiro+=Pasaporte(3,pPlatino);
                    break;
                case 4:
                    elemental+=1;
                    rElemental+=Pasaporte(4,pPlatino);
                    break;
                default:
                    cout<<"ingrese valor valido"<<endl;
                    break;
            }


        }
        else{
            cout<<"ingrese valor valido"<<endl;
        }






}

int main(){



    int entrada;
    int nEntradas=0;
    int pPlatino;



    int pasaporte;

    cout<<"ingrese el precio del pasaporte platino"<<endl;
    cin>>pPlatino;
    cout<<"ingrese cualquier numero para entrar, 0 para cerrar el parque"<<endl;
    cin>>entrada;

    while(entrada!=0){

        nEntradas+=1;
        Entrar(pPlatino);
        cout<<"ingrese cualquier numero para entrar, 0 para cerrar el parque"<<endl;
        cin>>entrada;
    };


    cout<<nEntradas;
    cout<<"rNinos "<<rNinos<<endl;
    cout<<"rElemental "<<rElemental<<endl;
    cout<<"rZafiro "<<rZafiro<<endl;
    cout<<"rGold "<<rGold<<endl;
    cout<<"rPlatino "<<rPlatino<<endl;
    int pTotales=ninos+elemental+zafiro+gold+platino;
    int dTotal= rNinos+rElemental+rZafiro+rGold+rPlatino;
    cout<<"personas que entraron "<<pTotales<<endl;
    cout<<"dinero que se recaudo "<<dTotal<<endl;




    return 0;
}

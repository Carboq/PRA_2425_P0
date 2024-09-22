#include<iostream>
#include "clase.h"
using namespace std;

int main(){
    BrazoRobotico brazo1(3,0,5,false);
    cout<<"Coordenadas x: "<<brazo1.cordx()<< " y: "<< brazo1.cordy()<< " z: "<< brazo1.cordz()<<endl;
    cout<<"Objeto: "<<brazo1.obje()<<endl;
    brazo1.mover(3,3,3);
    cout<<"Moviendo Brazo..."<<endl;
    cout<<"Coordenadas x: "<<brazo1.cordx()<< " y: "<< brazo1.cordy()<< " z: "<< brazo1.cordz()<<endl;
    brazo1.mover(3,3,2);
    cout<<"Moviendo Brazo..."<<endl;
    cout<<"Coordenadas x: "<<brazo1.cordx()<< " y: "<< brazo1.cordy()<< " z: "<< brazo1.cordz()<<endl;
    brazo1.coger();
    cout<<"Cogiendo objeto..."<<endl;
    cout<<"Objeto: "<<brazo1.obje()<<endl;
}

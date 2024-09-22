#include <iostream>
#include "clase.h"
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool obj){
        this->x=x;
        this->y=y;
        this->z=z;
        this->obj=obj;
}
BrazoRobotico::BrazoRobotico(){
        x=0;
        y=0;
        z=0;
        obj=false;
}
BrazoRobotico::~BrazoRobotico(){
        cout<<"Destructor"<<endl;
}
double BrazoRobotico::cordx(){
        return x;
}
double BrazoRobotico::cordy(){
        return y;
}
double BrazoRobotico::cordz(){
        return z;
}
bool BrazoRobotico::obje(){
        return obj;
}
void BrazoRobotico::coger(){
        obj=true;
}
void BrazoRobotico::soltar(){
        obj=false;
}
void BrazoRobotico::mover(double x, double y, double z){
        this->x=x;
        this->y=y;
        this->z=z;
}

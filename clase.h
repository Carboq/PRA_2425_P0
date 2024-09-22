#include <iostream>
using namespace std;

class BrazoRobotico {
        private:
                double x,y,z;
                bool obj;
        public:
        BrazoRobotico(double x, double y, double z, bool obj);
        BrazoRobotico();//Constructor por defecto
        ~BrazoRobotico();//Destructor
        double cordx ();
        double cordy ();
        double cordz ();
        bool obje ();
        void coger();
        void soltar();
        void mover(double x, double y, double z);
};  

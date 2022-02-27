#include <iostream>
#include <string>

using namespace std;

class Processor
{
    private:
        /* atribut private */
        string name;
        int price;
    public:
        Processor(){
        }

        Processor(string n, int p){
            name = n;
            price = p;
        }

        //setter
        void setName(string n){
            name = n;
        }
        void setProcessorPrice(int p){
            price = p;
        }

        //getter
        string getName(){
            return name;
        }
        int getProcessorPrice(){
            return price;
        }

        //print atribute
        void showProcessor(){
            cout << "Processor Name  : " << name << endl;
            cout << "Processor Price : Rp. " << price << endl;
        }

        ~Processor(){}
};
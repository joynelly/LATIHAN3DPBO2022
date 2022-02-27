#include <iostream>
#include <string>

using namespace std;

class Ram
{
    private:
        /* atribute */
        int capacity;
        int price;
    public:
        Ram(){
        }

        Ram(int c, int p){
            capacity = c;
            price = p;
        }

        //setter
        void setRamCapacity(int c){
            capacity = c;
        }

        void setRamPrice(int p){
            price = p;
        }

        //getter
        int getRamCapacity(){
            return capacity;
        }

        int getRamPrice(){
            return price;
        }

        //print atribute
        void showRam(){
            cout << "Ram Capacity    : " << capacity << " Gb" << endl;
            cout << "Ram Price       : Rp. " << price << endl;
        }

        ~Ram(){}
};
#include <iostream>
#include <string>

using namespace std;

class Disk
{
    private:
        /* private atribute */
        string type;
        int capacity;
        int price;
    public:
        Disk(){
        }

        Disk(string t, int p, int c){
            type = t;
            capacity = c;
            price = p;
        }

        //setter
        void setType(string t){
            type = t;
        }

        void setDiskCapacity(int c){
            capacity = c;
        }

        void setDiskPrice(int p){
            price = p;
        }

        //getter
        string getType(){
            return type;
        }

        int getDiskCapacity(){
            return capacity;
        }

        int getDiskPrice(){
            return price;
        }

        //print atribute
        void showDisk(){
            cout << "Disk Type       : " << type << endl;
            cout << "Disk Capacity   : " << capacity << " Gb" << endl;
            cout << "Disk Price      : Rp. " << price << endl;
        }

        ~Disk(){}
};
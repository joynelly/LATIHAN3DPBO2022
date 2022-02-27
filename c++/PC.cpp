#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

class PC
{
    private:
        /* atribute */
        int totalPrice;
        Processor procObj;
        Disk diskObj;
        Ram ramObj;
    public:
        PC(){
        }

        PC(Processor p, Disk d, Ram r){
            this->procObj = p;
            this->diskObj = d;
            this->ramObj = r;
            this->totalPrice = procObj.getProcessorPrice() + diskObj.getDiskPrice() + ramObj.getRamPrice();
        }

        //setter
        void setProcessor(Processor p){
            this->procObj = p;
        }
        void setDisk(Disk d){
            this->diskObj = d;
        }
        void setRam(Ram r){
            this->ramObj = r;
        }
        void setTotalPrice(){
            this->totalPrice = procObj.getProcessorPrice() + diskObj.getDiskPrice() + ramObj.getRamPrice();
        }

        //getter
        Processor getProcessor(){
            return this->procObj;
        }
        Disk getDisk(){
            return this->diskObj;
        }
        Ram getRam(){
            return this->ramObj;
        }
        int getTotalPrice(){
            return this->totalPrice;
        }

        //print
        void showPC(){
            procObj.showProcessor();
            diskObj.showDisk();
            ramObj.showRam();
            cout << "Total Price     : Rp. " << totalPrice << endl;
        }

        ~PC(){}
};
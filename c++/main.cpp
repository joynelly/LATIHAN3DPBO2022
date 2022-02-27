#include "PC.cpp"

int main() {

    cout<<"\nLATIHAN 3 DPBO - COMPOSITION"<< endl;
    cout<<"============================\n"<< endl;

    //membuat variabel tampungan
    int i, n, price, capacity;
    string name;
    string type;

    //meminta masukan awal jumlah PC
    cout<<"Masukkan Jumlah PC yang mau di input :"<< endl;
    cin>>n;

    //Membuat array class PC dan atriut objek didalamnya
    PC arrayPC[n];
    Processor arrayProc[n];
    Disk arrayDisk[n];
    Ram arrayRam[n];

    // Perulangan untuk input data PC
    for (i = 0; i < n; i++)
    {
        /* Meminta inputan Atribut PC */
        cout << "\nMasukkan data PC " << (i+1) << endl;

        // meminta data Processor PC
        cout << "Processor (nama, harga) :" << endl;
        cin >> name;
        cin >> price;

        // Menyimpan data Processor PC yang diinput
        arrayProc[i].setName(name);
        arrayProc[i].setProcessorPrice(price);

        //Meminta data Disk PC
        cout << "Disk (tipe, kapasitas, harga) :" << endl;
        cin >> name;
        cin >> capacity;
        cin >> price;

        // Menyimpan data Disk PC yang diinput
        arrayDisk[i].setType(type);
        arrayDisk[i].setDiskCapacity(capacity);
        arrayDisk[i].setDiskPrice(price);

        // Meminta data RAM PC
        cout << "RAM (kapasitas, harga) :" << endl;
        cin >> capacity;
        cin >> price;

        // Menyimpan data Ram PC yang diinput
        arrayRam[i].setRamCapacity(capacity);
        arrayRam[i].setRamPrice(price);

        // Menyimpan semua objek Inputan pada kelas PC
        arrayPC[i].setProcessor(arrayProc[i]);
        arrayPC[i].setDisk(arrayDisk[i]);
        arrayPC[i].setRam(arrayRam[i]);
        arrayPC[i].setTotalPrice();
    }

    //Perulangan Menampilkan hasil data PC
    cout << "\n======================" << endl;
    cout << "DATA PC YANG TERDAFTAR" << endl;
    cout << "======================" << endl;
    for (i = 0; i < n; i++)
    {
        /* menampilkan data PC menggunakan method */
        cout << "\n>> PC " << (i+1) << " Specification <<" << endl;
        arrayPC[i].showPC();
    }

    

    /*mengisi kelas
    Processor proc1("Intel i5", 150000);
    Disk disk1("SSD", 250000, 512);
    Ram ram1(6, 235000);

    //membuat kelas base
    PC pc1(proc1, disk1, ram1);

    //menampilkan hasil
    pc1.showPC();*/

    return 0;
}
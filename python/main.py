from Processor import Processor
from Disk import Disk
from Ram import Ram
from PC import PC

print("\nLATIHAN 3 DPBO - COMPOSITION")
print("============================\n")

# Meminta inputan jumlah Data tim
print("Masukkan Jumlah PC yang mau di input : ")
n = int(input())

# Deklarasi dan instansiasi objek
arrayPC = [PC() for i in range(n)]
arrayProc = [Processor() for i in range(n)]
arrayDisk = [Disk() for i in range(n)]
arrayRam = [Ram() for i in range(n)]

# Perulangan meminta inputan objek DataTim
i = 0
for i in range(n):
    # Meminta data PC
    print("\nMasukkan data PC", (i+1))

    # Meminta data Processor
    print("Processor (nama, harga) :")
    nama = input()
    harga = int(input())

    # Menyimpan data Processor yang diinput
    arrayProc[i].setName(nama)
    arrayProc[i].setPrice(harga)

    # Meminta data Disk
    print("Disk (tipe, kapasitas, harga) :")
    tipe = input()
    kap = int(input())
    harga = int(input())

    # Menyimpan data Disk
    arrayDisk[i].setType(tipe)
    arrayDisk[i].setCapacity(kap)
    arrayDisk[i].setPrice(harga)

    # Meminta data RAM
    print("RAM (kapasitas, harga) :")
    kap = int(input())
    harga = int(input())

    # Menyimpan data RAM
    arrayRam[i].setCapacity(kap)
    arrayRam[i].setPrice(harga)

    # Menyimpan semua inputan ke kelas PC
    arrayPC[i].setProcessor(arrayProc[i])
    arrayPC[i].setDisk(arrayDisk[i])
    arrayPC[i].setRam(arrayRam[i])
    arrayPC[i].setTotalPrice()

# Perulangan menampilkan hasil inputan
print("\n======================")
print("DATA PC YANG TERDAFTAR")
print("======================")
i = 0
for i in range(n):
    # Menampilkan data tim menggunakan method dalam class
    print("\n>> PC ", (i+1), " Specification <<")
    arrayPC[i].showPC()
import java.util.*;

public class Main {
    public static void main(String[] args) {

        // Variabel untuk menampung inputan
        int n, i, cap, harga;
        String name;
        String type;
        
        System.out.println("\nLATIHAN 3 DPBO - COMPOSITION");
        System.out.println("============================\n");

        Scanner sc  = new Scanner(System.in);
        System.out.println("Masukkan jumlah PC yang mau di input");
        n = sc.nextInt();

        //mengalokasikan objek PC dan composite dari PC
        PC arrayPc[] = new PC[n];
        Processor arrayProcessor[] = new Processor[n];
        Disk arrayDisk[] = new Disk[n];
        Ram arrayRam[] = new Ram[n]; 

        //Perulangan untuk input data PC
        i = 0;
        for (i = 0; i < n; i++) {
            System.out.println("\nMasukkan data PC " + (i+1));

            // Meminta data processor
            System.out.println("Processor (nama, harga) :");
            name = sc.next();
            harga = sc.nextInt();

            //simpan data processor
            arrayProcessor[i] = new Processor(name, harga);

            // Meminta data Disk
            System.out.println("Disk (tipe, kapasitas, harga) :");
            type = sc.next();
            cap = sc.nextInt();
            harga = sc.nextInt();

            //Menyimpan data disk
            arrayDisk[i] = new Disk(type, cap, harga);

            // Meminta data Ram
            System.out.println("RAM (kapasitas, harga) :");
            cap = sc.nextInt();
            harga = sc.nextInt();

            //Menyimpan data Ram
            arrayRam[i] = new Ram(cap, harga);

            // Menyimpan data inputan padaa arrayPC
            arrayPc[i] = new PC(arrayProcessor[i], arrayDisk[i], arrayRam[i]);

        }

        //perulangan menampilkan hasil dataTim
        System.out.println("\n======================");
        System.out.println("DATA PC YANG TERDAFTAR");
        System.out.println("======================");
        i = 0;
        for (i = 0; i < n; i++) {
            //menampilkan data tim menggunakan method pada class
            System.out.println("\n>> PC " + (i+1) + " Specification <<");
            arrayPc[i].showPC();
        }
    }
}

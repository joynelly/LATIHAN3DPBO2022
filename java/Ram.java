public class Ram {
    
    private int capacity;
    private int price;

    // Constructor
    Ram(){
    }
    Ram(int c, int p){
        capacity = c;
        price = p;
    }

    // Getter and Setter
    public int getCapacity() {
        return capacity;
    }
    public int getPrice() {
        return price;
    }
    public void setPrice(int price) {
        this.price = price;
    }
    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    //Menampilkan atribut kelas Ram
    public void showRam() {
        System.out.println("Ram Capacity    : " + capacity + " Gb" );
        System.out.println("Ram Price       : Rp. " + price);
    }
    
}

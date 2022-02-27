public class Processor {
    
    private String name;
    private int price;
    
    // constructor
    Processor(){
    }

    Processor(String n, int p){
        name = n;
        price = p;
    }

    // Getter and Setter 
    public String getName() {
        return name;
    }
    public int getPrice() {
        return price;
    }
    public void setPrice(int price) {
        this.price = price;
    }
    public void setName(String name) {
        this.name = name;
    }

    // Prosedur untuk menampilkan atribut kelas Processor
    public void showProcessor() {
        System.out.println("Processor Name  : " + name);
        System.out.println("Processor Price : Rp. " + price);
    }
}

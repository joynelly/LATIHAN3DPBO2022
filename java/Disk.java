public class Disk {

    private String type;
    private int capacity;
    private int price;

    // konstruktor
    Disk(){
    }

    Disk(String t, int c, int p){
        type = t;
        capacity = c;
        price = p;

        
    }

    // Getter and setter for atribute
    public String getType() {
        return type;
    }
    public int getPrice() {
        return price;
    }
    public void setPrice(int price) {
        this.price = price;
    }
    public int getCapacity() {
        return capacity;
    }
    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }
    public void setType(String type) {
        this.type = type;
    }

    public void showDisk() {
        System.out.println("Disk Type       : " + type);
        System.out.println("Disk Capacity   : " + capacity + " Gb");
        System.out.println("Disk Price      : Rp. " + price);
    }
    
}
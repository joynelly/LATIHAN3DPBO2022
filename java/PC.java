public class PC {
    
    private int totalPrice;
    private Processor procObj;
    private Disk diskObj;
    private Ram ramObj;

    // Constructor
    PC(){
    }
    PC(Processor p, Disk d, Ram r){
        this.procObj = p;
        this.diskObj = d;
        this.ramObj = r;
        this.totalPrice = procObj.getPrice() + diskObj.getPrice() + ramObj.getPrice();
    }

    //Getter and Setter
    public int getTotalPrice() {
        return totalPrice;
    }

    public Ram getRam() {
        return ramObj;
    }

    public void setRam(Ram ramObj) {
        this.ramObj = ramObj;
    }

    public Disk getDisk() {
        return diskObj;
    }

    public void setDisk(Disk diskObj) {
        this.diskObj = diskObj;
    }

    public Processor getProcessor() {
        return procObj;
    }

    public void setProcessor(Processor procObj) {
        this.procObj = procObj;
    }

    public void setTotalPrice() {
        this.totalPrice = procObj.getPrice() + diskObj.getPrice() + ramObj.getPrice();
    }

    // Menampilkan atribut PC
    public void showPC() {
        procObj.showProcessor();
        diskObj.showDisk();
        ramObj.showRam();
        System.out.println("Total Price     : Rp. " + totalPrice);
    }

}

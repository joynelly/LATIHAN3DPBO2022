class Ram():

    # Constructor
    def __init__(self):
        self.capacity = 0
        self.price = 0
    
    # Setter and Getter
    def setCapacity(self, capacity):
        self.capacity = capacity
    
    def getCapacity(self):
        return self.capacity
    
    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price
    
    # Menampilkan atribut kelas
    def showRam(self):
        print("Ram Capacity    : " + str(self.capacity) + " Gb" )
        print("Ram Price       : Rp. " + str(self.price))
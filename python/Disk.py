class Disk():

    # Constructor
    def __init__(self):
        self.type = ""
        self.capacity = 0
        self.price = 0
    
    # Setter and Getter
    def setType(self, type):
        self.type = type
    
    def getType(self):
        return self.type

    def setCapacity(self, capacity):
        self.capacity = capacity

    def getCapacity(self):
        return self.capacity
    
    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price
    
    # Menampilkan isi Kelas
    def showDisk(self):
        print("Disk Type       : " + str(self.type))
        print("Disk Capacity   : " + str(self.capacity) + " Gb")
        print("Disk Price      : Rp. " + str(self.price))
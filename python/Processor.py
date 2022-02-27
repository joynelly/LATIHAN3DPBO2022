from unicodedata import name


class Processor():

    # Constructor
    def __init__(self):
        self.name = ""
        self.price = 0
    
    # Setter and Getter
    def setName(self, name):
        self.name = name
    
    def getName(self):
        return self.name
    
    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price
    
    # Menampilkan isi atribut
    def showProcessor(self):
        print("Processor Name  : " + str(self.name))
        print("Processor Price : Rp. " + str(self.price))
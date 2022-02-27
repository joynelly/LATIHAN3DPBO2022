from Processor import Processor
from Disk import Disk
from Ram import Ram

class PC():

    # Constructor
    def __init__(self):
        self.procObj = Processor()
        self.diskObj = Disk()
        self.ramobj = Ram()
        self.totalPrice = self.procObj.getPrice() + self.diskObj.getPrice() + self.ramobj.getPrice()

    # Setter and Getter
    def setProcessor(self, procObj):
        self.procObj = procObj
    
    def getProcessor(self):
        return self.procObj
    
    def setDisk(self, diskObj):
        self.diskObj = diskObj
    
    def getDisk(self):
        return self.diskObj

    def setRam(self, ramObj):
        self.ramobj = ramObj
    
    def getRam(self):
        return self.ramobj

    def setTotalPrice(self):
        self.totalPrice = self.procObj.getPrice() + self.diskObj.getPrice() + self.ramobj.getPrice()
    
    def getTotalPrice(self):
        return self.totalPrice

    # Menampilkan atribut kelas
    def showPC(self):
        self.procObj.showProcessor()
        self.diskObj.showDisk()
        self.ramobj.showRam()
        print("Total Price     : Rp. " + str(self.totalPrice))
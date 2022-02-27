<?php

class PC
{
    private $procObj;
    private $diskObj;
    private $ramObj;
    private $totalPrice;

    # Constructor
    public function __construct(Processor $p, Disk $d, Ram $r)
    {
        $this->procObj = $p;
        $this->diskObj = $d;
        $this->ramObj = $r;
        $this->totalPrice = $p->getPrice() + $d->getPrice() + $r->getPrice();
    }

    # Setter and Getter
    public function setProcessor(Processor $p)
    {
        $this->procObj = $p;
    }

    public function getProcessor()
    {
        return $this->procObj;
    }

    public function setDisk(Disk $d)
    {
        $this->diskObj = $d;
    }

    public function getDisk()
    {
        return $this->diskObj;
    }

    public function setRam(Ram $r)
    {
        $this->ramObj = $r;
    }

    public function getRam()
    {
        return $this->ramObj;
    }

    public function setTotalPrice()
    {
        $this->totalPrice = $this->procObj->getPrice() + $this->diskObj->getPrice() + $this->ramObj->getPrice();
    }

    public function getTotalPrice()
    {
        return $this->totalPrice;
    }

    # Menampilkan isi kelas
    public function showPC()
    {
        $this->procObj->showProcessor();
        $this->diskObj->showDisk();
        $this->ramObj->showRam();
        echo "Total Price     : Rp. " . $this->totalPrice . "<br>";
    }
}

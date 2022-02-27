<?php

class Disk
{
    private $type = "";
    private $price = 0;
    private $capacity = 0;

    # Constructor
    public function __construct($t="", $c=0, $p=0)
    {
        $this->type = $t;
        $this->price = $p;
        $this->capacity = $c;
    }

    # Setter and Getter
    public function setType($ty="")
    {
        $this->type = $ty;
    }

    public function getType()
    {
        return $this->type;
    }

    public function setPrice($p=0)
    {
        $this->price = $p;
    }

    public function getPrice()
    {
        return $this->price;
    }

    public function setCapacity($c=0)
    {
        $this->capacity = $c;
    }

    public function getCapacity()
    {
        return $this->capacity;
    }

    # Menampilkan isi kelas
    public function showDisk()
    {
        echo "Disk Type       : " . $this->type . "<br>";
        echo "Disk Capacity   : " . $this->capacity . " Gb<br>";
        echo "Disk Price      : Rp. " . $this->price . "<br>";
    }
}

?>
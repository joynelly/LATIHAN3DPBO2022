<?php

class Ram
{
    private $price = 0;
    private $capacity = 0;

    # Constructor
    public function __construct($c=0, $p=0)
    {
        $this->price = $p;
        $this->capacity = $c;
    }

    # Setter and Getter
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
    public function showRam()
    {
        echo "Ram  Capacity   : " . $this->capacity . " Gb<br>";
        echo "Ram Price      : Rp. " . $this->price . "<br>";
    }
}

?>
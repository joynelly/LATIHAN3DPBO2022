<?php

class Processor
{
    private $name = "";
    private $price = 0;

    # Constructor
    public function __construct($n="", $p=0)
    {
        $this->name = $n;
        $this->price = $p;
    }

    # Setter and Getter
    public function setName($na="")
    {
        $this->name = $na;
    }

    public function getName()
    {
        return $this->name;
    }

    public function setPrice($p=0)
    {
        $this->price = $p;
    }

    public function getPrice()
    {
        return $this->price;
    }

    # Menampilkan isi kelas
    public function showProcessor()
    {
        echo "Processor Name  : " . $this->name . "<br>";
        echo "Processor Price : Rp. " . $this->price . "<br>";
    }
}

?>
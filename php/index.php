<?php

include "Processor.php";
include "Disk.php";
include "Ram.php";
include "PC.php";

# Memasukkan data PC

# PC1
$Proc1 = new Processor("Intel", 800000);
$Disk1 = new Disk("SSD", 256, 700000);
$Ram1 = new Ram(512, 258000);
$PC1 = new PC($Proc1, $Disk1, $Ram1);

# PC2
$Proc2 = new Processor("AMD", 758000);
$Disk2 = new Disk("HDD", 1024, 512000);
$Ram2 = new Ram(512, 258000);
$PC2 = new PC($Proc2, $Disk2, $Ram2);

echo "<h2> LATIHAN 3 DPBO - COMPOSITION </h2>";

# Menampilkan Data
$arrayPC = array($PC1, $PC2);

foreach ($arrayPC as $pc) {
    # code...
    echo "<br> >> PC Specification << <br>";
    $pc->showPC();
}

?>
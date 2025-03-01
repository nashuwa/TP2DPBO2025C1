<?php

require_once('Aksesoris.php');

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    public function __construct($untuk = "", $size = "", $merk = "") {
        parent::__construct();
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    // Getter Methods
    public function getUntuk() {
        return $this->untuk;
    }

    public function getSize() {
        return $this->size;
    }

    public function getMerk() {
        return $this->merk;
    }

    // Setter Methods
    public function setUntuk($untuk) {
        $this->untuk = $untuk;
        return $this;
    }

    public function setSize($size) {
        $this->size = $size;
        return $this;
    }

    public function setMerk($merk) {
        $this->merk = $merk;
        return $this;
    }
}
?>
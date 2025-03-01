<?php

require_once('Petshop.php');

class Aksesoris extends Petshop {
    protected $jenis;
    protected $bahan;
    protected $warna;

    public function __construct($jenis = "", $bahan = "", $warna = "") {
        parent::__construct();
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    // Getter Methods
    public function getJenis() {
        return $this->jenis;
    }

    public function getBahan() {
        return $this->bahan;
    }

    public function getWarna() {
        return $this->warna;
    }

    // Setter Methods
    public function setJenis($jenis) {
        $this->jenis = $jenis;
        return $this;
    }

    public function setBahan($bahan) {
        $this->bahan = $bahan;
        return $this;
    }

    public function setWarna($warna) {
        $this->warna = $warna;
        return $this;
    }
}
?>
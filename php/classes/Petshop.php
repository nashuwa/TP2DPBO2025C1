<?php
class Petshop {
    protected $id;
    protected $name;
    protected $kategori;
    protected $harga;
    protected $stok;
    protected $foto;

    public function __construct($id = 0, $name = "", $kategori = "", $harga = 0, $stok = 0, $foto = "") {
        $this->id = $id;
        $this->name = $name;
        $this->kategori = $kategori;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->foto = $foto;
    }

    // Getter Methods
    public function getId() {
        return $this->id;
    }

    public function getName() {
        return $this->name;
    }

    public function getKategori() {
        return $this->kategori;
    }

    public function getHarga() {
        return $this->harga;
    }

    public function getStok() {
        return $this->stok;
    }

    public function getFoto() {
        return $this->foto;
    }

    // Setter Methods
    public function setId($id) {
        $this->id = $id;
        return $this;
    }

    public function setName($name) {
        $this->name = $name;
        return $this;
    }

    public function setKategori($kategori) {
        $this->kategori = $kategori;
        return $this;
    }

    public function setHarga($harga) {
        $this->harga = $harga;
        return $this;
    }

    public function setStok($stok) {
        $this->stok = $stok;
        return $this;
    }

    public function setFoto($foto) {
        $this->foto = $foto;
        return $this;
    }
}
?>
<?php
include 'classes/Baju.php';
session_start();

function addProduk($id, $name, $kategori, $harga, $jenis, $bahan, $warna, $untuk, $size, $merk, $foto) {
    if (!isset($_SESSION['products'])) {
        $_SESSION['products'] = [];
    }

    // Cek apakah ID sudah ada
    if (isset($_SESSION['products'][$id])) {
        echo "<script>alert('Error: ID sudah ada. Gunakan ID lain!'); window.history.back();</script>";
        exit;
    }

    $produk = new Baju($untuk, $size, $merk);
    $produk->setId($id);
    $produk->setName($name);
    $produk->setKategori($kategori);
    $produk->setHarga($harga);
    $produk->setJenis($jenis);
    $produk->setBahan($bahan);
    $produk->setWarna($warna);
    $produk->setFoto($foto);

    $_SESSION['products'][$id] = $produk;
}

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $id = uniqid();  // Auto-generate ID
    $name = $_POST['name'];
    $kategori = $_POST['kategori'];
    $harga = $_POST['harga'];
    $jenis = $_POST['jenis'];
    $bahan = $_POST['bahan'];
    $warna = $_POST['warna'];
    $untuk = $_POST['untuk'];
    $size = $_POST['size'];
    $merk = $_POST['merk'];

    // Upload gambar
    $target_dir = "uploads/";
    $target_file = $target_dir . basename($_FILES["foto"]["name"]);

    if (move_uploaded_file($_FILES["foto"]["tmp_name"], $target_file)) {
        // Tambahkan produk menggunakan fungsi dari index.php atau functions.php
        addProduk($id, $name, $kategori, $harga, $jenis, $bahan, $warna, $untuk, $size, $merk, $target_file);
        
        // Redirect kembali ke halaman utama
        header('Location: index.php');
        exit;
    } else {
        echo "Gagal mengupload gambar.";
    }
}
?>

<h2>Tambah Produk</h2>
<form action="add_product.php" method="post" enctype="multipart/form-data">
    <label>Nama:</label><input type="text" name="name" required><br>
    <label>Kategori:</label><input type="text" name="kategori" required><br>
    <label>Harga:</label><input type="number" name="harga" required><br>
    <label>Foto:</label><input type="file" name="foto" required><br>
    <label>Jenis:</label><input type="text" name="jenis" required><br>
    <label>Bahan:</label><input type="text" name="bahan" required><br>
    <label>Warna:</label><input type="text" name="warna" required><br>
    <label>Untuk:</label><input type="text" name="untuk" required><br>
    <label>Size:</label><input type="text" name="size" required><br>
    <label>Merk:</label><input type="text" name="merk" required><br><br>
    <button type="submit">Tambah Produk</button>
</form>

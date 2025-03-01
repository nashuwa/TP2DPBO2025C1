<?php
require_once "classes/Baju.php";
session_start(); // Mulai session

// Cek apakah produk sudah ada di session
if (!isset($_SESSION['products']) || empty($_SESSION['products'])) {
    $_SESSION['products'] = [];

    $baju1 = new Baju();
    $baju1->setId("B001")->setFoto("uploads/baju1.jpeg")->setName("hohoho")->setKategori("Aksesoris")->setHarga(10000)->setStok(1)->setJenis("Baju")->setBahan("Polyester")->setWarna("Merah")->setUntuk("Kucing")->setSize("L")->setMerk("yoy");

    $baju2 = new Baju();
    $baju2->setId("B002")->setFoto("uploads/baju2.jpeg")->setName("hahaha")->setKategori("Aksesoris")->setHarga(20000)->setStok(1)->setJenis("Baju")->setBahan("Katun")->setWarna("Pink")->setUntuk("Anjing")->setSize("M")->setMerk("yay");

    $baju3 = new Baju();
    $baju3->setId("B003")->setFoto("uploads/baju3.jpeg")->setName("hihihi")->setKategori("Aksesoris")->setHarga(30000)->setStok(1)->setJenis("Baju")->setBahan("Sutra")->setWarna("Biru")->setUntuk("Hamster")->setSize("S")->setMerk("yiy");

    $baju4 = new Baju();
    $baju4->setId("B004")->setFoto("uploads/baju4.jpeg")->setName("hehehe")->setKategori("Aksesoris")->setHarga(40000)->setStok(1)->setJenis("Baju")->setBahan("Katun jepang")->setWarna("Ungu")->setUntuk("Ikan")->setSize("XS")->setMerk("yey");

    $baju5 = new Baju();
    $baju5->setId("B005")->setFoto("uploads/baju5.jpeg")->setName("huhuhu")->setKategori("Aksesoris")->setHarga(500000)->setStok(1)->setJenis("Baju")->setBahan("Wol")->setWarna("Hijau")->setUntuk("Domba")->setSize("XL")->setMerk("yuy");

    // Simpan langsung sebagai array objek di session
    $_SESSION['products'] = [$baju1, $baju2, $baju3, $baju4, $baju5];
}

// Ambil daftar produk dari session
$products = $_SESSION['products'];

?>

<!DOCTYPE html>
<html>
<head>
    <title>Daftar Produk Petshop</title>
</head>
<body>
    <h1>Daftar Produk Petshop</h1>
    <a href="add_product.php">Tambah Produk</a>
    <br><br>

    <?php if (!empty($products)): ?>
        <table border="1">
            <thead>
                <tr>
                    <th>Foto</th>
                    <th>Nama</th>
                    <th>Kategori</th>
                    <th>Harga</th>
                    <th>Stok</th>
                    <th>Jenis</th>
                    <th>Bahan</th>
                    <th>Warna</th>
                    <th>Untuk</th>
                    <th>Ukuran</th>
                    <th>Merk</th>
                </tr>
            </thead>
            <tbody>
                <?php foreach ($products as $produk): ?>
                    <tr>
                        <td>
                            <?php if ($produk->getFoto()): ?>
                                <img src="<?php echo htmlspecialchars($produk->getFoto()); ?>" width="100" alt="Foto Produk">
                            <?php else: ?>
                                <span>No Image</span>
                            <?php endif; ?>
                        </td>
                        <td><?php echo htmlspecialchars($produk->getName()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getKategori()); ?></td>
                        <td>Rp <?php echo number_format($produk->getHarga()); ?></td>
                        <td><?php echo number_format($produk->getStok()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getJenis()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getBahan()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getWarna()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getUntuk()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getSize()); ?></td>
                        <td><?php echo htmlspecialchars($produk->getMerk()); ?></td>
                    </tr>
                <?php endforeach; ?>
            </tbody>
        </table>
    <?php else: ?>
        <p>Belum ada produk yang ditambahkan.</p>
    <?php endif; ?>
</body>
</html>

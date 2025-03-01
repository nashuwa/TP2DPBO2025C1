from Baju import Baju

# List untuk menyimpan daftar produk
daftarproduk = []

def addProduk(id, name, kategori, harga, stok, jenis, bahan, warna, untuk, size, merk, input_user=False):
    global daftarproduk
    # Membuat objek Baju
    produk = Baju()
    
    # Mengatur atribut class Petshop
    produk.set_id(id)
    produk.set_name(name)
    produk.set_kategori(kategori)
    produk.set_harga(harga)
    produk.set_stok(stok)
    
    # Mengatur atribut class Aksesoris
    produk.set_jenis(jenis)
    produk.set_bahan(bahan)
    produk.set_warna(warna)
    
    # Mengatur atribut class Baju
    produk.set_untuk(untuk)
    produk.set_size(size)
    produk.set_merk(merk)
    
    daftarproduk.append(produk)

    if input_user:
        print("Produk berhasil ditambahkan.\n")

def showProduk():
    if not daftarproduk:
        print("Tidak ada produk.\n")
        return

    # Menentukan lebar kolom secara dinamis
    headers = ["ID", "Nama", "Kategori", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk"]
    max_lengths = [len(header) for header in headers]

    for produk in daftarproduk:
        data = [
            str(produk.get_id()), 
            produk.get_name(), 
            produk.get_kategori(), 
            str(produk.get_harga()), 
            str(produk.get_stok()),
            produk.get_jenis(), 
            produk.get_bahan(), 
            produk.get_warna(), 
            produk.get_untuk(), 
            produk.get_size(), 
            produk.get_merk()
        ]
        max_lengths = [max(old, len(new)) for old, new in zip(max_lengths, data)]

    # Cetak header tabel
    border = "+-" + "-+-".join("-" * length for length in max_lengths) + "-+"
    print(border)
    print("| " + " | ".join(header.ljust(length) for header, length in zip(headers, max_lengths)) + " |")
    print(border)

    # Cetak isi tabel
    for produk in daftarproduk:
        row = [
            str(produk.get_id()), 
            produk.get_name(), 
            produk.get_kategori(), 
            str(produk.get_harga()),
            str(produk.get_stok()),
            produk.get_jenis(), 
            produk.get_bahan(), 
            produk.get_warna(), 
            produk.get_untuk(), 
            produk.get_size(), 
            produk.get_merk()
        ]
        print("| " + " | ".join(cell.ljust(length) for cell, length in zip(row, max_lengths)) + " |")
    
    print(border)

def main():
    # Parameter disesuaikan dengan urutan yang benar: id, name, kategori, harga, stok, jenis, bahan, warna, untuk, size, merk
    addProduk(1, "hohoho", "Aksesoris", 10000, 5, "Baju", "Polyester", "Merah", "Kucing", "L", "yoy")
    addProduk(2, "hahaha", "Aksesoris", 20000, 8, "Baju", "Katun", "Pink", "Anjing", "M", "yay")
    addProduk(3, "hihihi", "Aksesoris", 30000, 12, "Baju", "Sutra", "Biru", "Hamster", "S", "yiy")
    addProduk(4, "hehehe", "Aksesoris", 40000, 3, "Baju", "Katun jepang", "Ungu", "Ikan", "XS", "yey")
    addProduk(5, "huhuhu", "Aksesoris", 500000, 1, "Baju", "Wol", "Hijau", "Domba", "XL", "yuy")

    while True:
        print(">U<) MENUUUUUUU~~~")
        print("+==================+")
        print("| 1. Lihat produk  |")
        print("| 2. Tambah produk |")
        print("| 3. Keluar        |")
        print("+==================+")
        pilihan = input("Pilih menu: ").strip()

        if pilihan == "1":
            showProduk()
        elif pilihan == "2":
            while True:
                try:
                    id = int(input("Masukkan ID: "))
                    if any(produk.get_id() == id for produk in daftarproduk):
                        print("Error: ID sudah ada, masukkan ID lain.")
                    else:
                        break
                except ValueError:
                    print("ID harus berupa angka!")

            name = input("Masukkan Nama: ")
            kategori = input("Masukkan Kategori: ")

            while True:
                try:
                    harga = int(input("Masukkan Harga: "))
                    break
                except ValueError:
                    print("Harga harus berupa angka!")
            
            while True:
                try:
                    stok = int(input("Masukkan Stok: "))
                    break
                except ValueError:
                    print("Stok harus berupa angka!")

            jenis = input("Masukkan Jenis: ")
            bahan = input("Masukkan Bahan: ")
            warna = input("Masukkan Warna: ")
            untuk = input("Masukkan Untuk (Hewan): ")
            size = input("Masukkan Size: ")
            merk = input("Masukkan Merk: ")

            addProduk(id, name, kategori, harga, stok, jenis, bahan, warna, untuk, size, merk, input_user=True)

        elif pilihan == "3":
            print("Bye bye :>\n")
            break
        else:
            print("Pilihan tidak valid!\n")

if __name__ == "__main__":
    main()
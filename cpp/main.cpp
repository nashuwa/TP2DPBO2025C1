#include <bits/stdc++.h>
#include "Baju.cpp"

using namespace std;

list<Baju> daftarproduk;

void addProduk(int id, string name, string kategori, int harga, string jenis, string bahan, string warna, string untuk, string size, string merk, bool input = false)
{   
    // Membuat objek Baju kosong
    Baju produk;
    
    // Mengatur atribut class Petshop
    produk.set_id(id);
    produk.set_name(name);
    produk.set_kategori(kategori);
    produk.set_harga(harga);
    
    // Mengatur atribut class Aksesoris
    produk.set_jenis(jenis);
    produk.set_bahan(bahan);
    produk.set_warna(warna);
    
    // Mengatur atribut class Baju
    produk.set_untuk(untuk);
    produk.set_size(size);
    produk.set_merk(merk);
    
    // Menambahkan ke daftar produk
    daftarproduk.push_back(produk);

    if (input) { // Hanya tampil jika input dari user
        cout << "Produk berhasil ditambahkan\n";
    }
}


void showProduk()
{
    if (daftarproduk.empty())
    {
        cout << "Tidak ada produk\n";
        return;
    }

    size_t max_id = 2, max_name = 4, max_kategori = 8, max_harga = 5;
    size_t max_jenis = 5, max_bahan = 5, max_warna = 5, max_untuk = 5, max_size = 4, max_merk = 4;

    for (const auto &produk : daftarproduk)
    {
        max_id = max(max_id, to_string(produk.get_id()).size());
        max_name = max(max_name, produk.get_name().size());
        max_kategori = max(max_kategori, produk.get_kategori().size());
        max_harga = max(max_harga, to_string(produk.get_harga()).size());
        max_jenis = max(max_jenis, produk.get_jenis().size());
        max_bahan = max(max_bahan, produk.get_bahan().size());
        max_warna = max(max_warna, produk.get_warna().size());
        max_untuk = max(max_untuk, produk.get_untuk().size());
        max_size = max(max_size, produk.get_size().size());
        max_merk = max(max_merk, produk.get_merk().size());
    }

    // Header tabel
    cout << "+" << string(max_id + 2, '-') << "+" << string(max_name + 2, '-') 
        << "+" << string(max_kategori + 2, '-') << "+" << string(max_harga + 2, '-')
        << "+" << string(max_jenis + 2, '-') << "+" << string(max_bahan + 2, '-')
        << "+" << string(max_warna + 2, '-') << "+" << string(max_untuk + 2, '-')
        << "+" << string(max_size + 2, '-') << "+" << string(max_merk + 2, '-') << "+\n";

    cout << "| " << setw(max_id) << left << "ID" << " | " 
        << setw(max_name) << left << "Nama" << " | " 
        << setw(max_kategori) << left << "Kategori" << " | " 
        << setw(max_harga) << left << "Harga" << " | " 
        << setw(max_jenis) << left << "Jenis" << " | " 
        << setw(max_bahan) << left << "Bahan" << " | " 
        << setw(max_warna) << left << "Warna" << " | " 
        << setw(max_untuk) << left << "Untuk" << " | " 
        << setw(max_size) << left << "Size" << " | " 
        << setw(max_merk) << left << "Merk" << " |\n";

    cout << "+" << string(max_id + 2, '-') << "+" << string(max_name + 2, '-') 
        << "+" << string(max_kategori + 2, '-') << "+" << string(max_harga + 2, '-')
        << "+" << string(max_jenis + 2, '-') << "+" << string(max_bahan + 2, '-')
        << "+" << string(max_warna + 2, '-') << "+" << string(max_untuk + 2, '-')
        << "+" << string(max_size + 2, '-') << "+" << string(max_merk + 2, '-') << "+\n";

    // Isi tabel
    for (const auto &produk : daftarproduk)
    {
        cout << "| " << setw(max_id) << left << produk.get_id() << " | " 
            << setw(max_name) << left << produk.get_name() << " | " 
            << setw(max_kategori) << left << produk.get_kategori() << " | " 
            << setw(max_harga) << left << produk.get_harga() << " | " 
            << setw(max_jenis) << left << produk.get_jenis() << " | " 
            << setw(max_bahan) << left << produk.get_bahan() << " | " 
            << setw(max_warna) << left << produk.get_warna() << " | " 
            << setw(max_untuk) << left << produk.get_untuk() << " | " 
            << setw(max_size) << left << produk.get_size() << " | " 
            << setw(max_merk) << left << produk.get_merk() << " |\n";
    }

    cout << "+" << string(max_id + 2, '-') << "+" << string(max_name + 2, '-') 
        << "+" << string(max_kategori + 2, '-') << "+" << string(max_harga + 2, '-')
        << "+" << string(max_jenis + 2, '-') << "+" << string(max_bahan + 2, '-')
        << "+" << string(max_warna + 2, '-') << "+" << string(max_untuk + 2, '-')
        << "+" << string(max_size + 2, '-') << "+" << string(max_merk + 2, '-') << "+\n";
}


int main()
{   
    addProduk(1, "hohoho", "Aksesoris", 10000, "Baju", "Polyester", "Merah", "Kucing", "L", "yoy");
    addProduk(2, "hahaha", "Aksesoris", 20000, "Baju", "Katun", "Pink", "Anjing", "M", "yay");
    addProduk(3, "hihihi", "Aksesoris", 30000, "Baju", "Sutra", "Biru", "Hamster", "S", "yiy");
    addProduk(4, "hehehe", "Aksesoris", 40000, "Baju", "Katun jepang", "Ungu", "Ikan", "XS", "yey");
    addProduk(5, "huhuhu", "Aksesoris", 500000, "Baju", "Wol", "Hijau", "Domba", "XL", "yuy");

    int pilihan;
    do
    {
        cout << ">U<) MENUUUUUUU~~~\n";
        cout << "+==================+\n";
        cout << "| 1. Lihat produk  |\n";
        cout << "| 2. Tambah produk |\n";
        cout << "| 3. Keluar        |\n";
        cout << "+==================+\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan)
        {
            case 1:
                showProduk();
                break;
            case 2:
            {
                int id, harga;
                string name, kategori, jenis, bahan, warna, untuk, size, merk;

                while (true) {
                    cout << "Masukkan ID: "; 
                    cin >> id;
                    cin.ignore();
            
                    // Cek apakah ID sudah ada
                    bool id_exist = false;
                    for (const auto &produk : daftarproduk) {
                        if (produk.get_id() == id) {
                            id_exist = true;
                            break;
                        }
                    }
            
                    if (id_exist) {
                        cout << "Error: ID sudah ada, masukkan ID lain.\n";
                    } else {
                        break; // Keluar dari loop jika ID belum ada
                    }
                }
                
                cout << "Masukkan Nama: "; 
                getline(cin, name);
                cout << "Masukkan Kategori: "; 
                getline(cin, kategori);
                cout << "Masukkan Harga: "; cin >> harga;
                cin.ignore();
                cout << "Masukkan Jenis: "; 
                getline(cin, jenis);
                cout << "Masukkan Bahan: "; 
                getline(cin, bahan);
                cout << "Masukkan Warna: "; 
                getline(cin, warna);
                cout << "Masukkan Untuk (Hewan): "; 
                getline(cin, untuk);
                cout << "Masukkan Size: "; 
                getline(cin, size);
                cout << "Masukkan Merk: "; 
                getline(cin, merk);

                addProduk(id, name, kategori, harga, jenis, bahan, warna, untuk, size, merk, true);
                break;
            }
            case 3:
                cout << "Bye bye :>\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    } while (pilihan != 3);


    return 0;
}

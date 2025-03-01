import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    // Membuat ArrayList untuk menyimpan daftar produk petshop
    static ArrayList<Baju> daftarProduk = new ArrayList<Baju>();

    // Scanner untuk membaca input dari pengguna
    static Scanner scanner = new Scanner(System.in);

    public static void addProduk(int id, String name, String kategori, int harga, int stok, String jenis, String bahan, String warna, String untuk, String size, String merk, boolean input) {
        // Membuat objek Baju
        Baju produk = new Baju();

        // Mengatur atribut class Petshop
        produk.setId(id);
        produk.setName(name);
        produk.setKategori(kategori);
        produk.setHarga(harga);
        produk.setStok(stok);

        // Mengatur atribut class Aksesoris
        produk.setJenis(jenis);
        produk.setBahan(bahan);
        produk.setWarna(warna);

        // Mengatur atribut class Baju
        produk.setUntuk(untuk);
        produk.setSize(size);
        produk.setMerk(merk);

        // Menambahkan ke daftar produk
        daftarProduk.add(produk);

        if (input) {
            System.out.println("Produk berhasil ditambahkan\n");
        }
    }

    public static void showProduk() {
        if (daftarProduk.isEmpty()) {
            System.out.println("Tidak ada produk\n");
            return;
        }

        int maxId = 2, maxName = 4, maxKategori = 8, maxHarga = 5, maxStok = 4;
        int maxJenis = 5, maxBahan = 5, maxWarna = 5, maxUntuk = 5, maxSize = 4, maxMerk = 4;

        for (Baju produk : daftarProduk) {
            maxId = Math.max(maxId, String.valueOf(produk.getId()).length());
            maxName = Math.max(maxName, produk.getName().length());
            maxKategori = Math.max(maxKategori, produk.getKategori().length());
            maxHarga = Math.max(maxHarga, String.valueOf(produk.getHarga()).length());
            maxStok = Math.max(maxStok, String.valueOf(produk.getStok()).length());
            maxJenis = Math.max(maxJenis, produk.getJenis().length());
            maxBahan = Math.max(maxBahan, produk.getBahan().length());
            maxWarna = Math.max(maxWarna, produk.getWarna().length());
            maxUntuk = Math.max(maxUntuk, produk.getUntuk().length());
            maxSize = Math.max(maxSize, produk.getSize().length());
            maxMerk = Math.max(maxMerk, produk.getMerk().length());
        }

        printLine(maxId, maxName, maxKategori, maxHarga, maxStok, maxJenis, maxBahan, maxWarna, maxUntuk, maxSize, maxMerk);
        printRow("ID", "Nama", "Kategori", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk",
                maxId, maxName, maxKategori, maxHarga, maxStok, maxJenis, maxBahan, maxWarna, maxUntuk, maxSize, maxMerk);
        printLine(maxId, maxName, maxKategori, maxHarga, maxStok, maxJenis, maxBahan, maxWarna, maxUntuk, maxSize, maxMerk);

        for (Baju produk : daftarProduk) {
            printRow(String.valueOf(produk.getId()), produk.getName(), produk.getKategori(),
                    String.valueOf(produk.getHarga()), String.valueOf(produk.getStok()),
                    produk.getJenis(), produk.getBahan(), produk.getWarna(), produk.getUntuk(), produk.getSize(),
                    produk.getMerk(),
                    maxId, maxName, maxKategori, maxHarga, maxStok, maxJenis, maxBahan, maxWarna, maxUntuk, maxSize, maxMerk);
        }

        printLine(maxId, maxName, maxKategori, maxHarga, maxStok, maxJenis, maxBahan, maxWarna, maxUntuk, maxSize, maxMerk);
    }

    private static void printLine(int... widths) {
        for (int width : widths) {
            System.out.print("+" + "-".repeat(width + 2));
        }
        System.out.println("+");
    }

    private static void printRow(String id, String name, String kategori, String harga, String stok, String jenis, String bahan,
            String warna, String untuk, String size, String merk,
            int maxId, int maxName, int maxKategori, int maxHarga, int maxStok,
            int maxJenis, int maxBahan, int maxWarna, int maxUntuk,
            int maxSize, int maxMerk) {
        System.out.printf("| %-" + maxId + "s | %-" + maxName + "s | %-" + maxKategori + "s | %-" + maxHarga + "s "
                + "| %-" + maxStok + "s | %-" + maxJenis + "s | %-" + maxBahan + "s | %-" + maxWarna + "s | %-" + maxUntuk + "s "
                + "| %-" + maxSize + "s | %-" + maxMerk + "s |\n",
                id, name, kategori, harga, stok, jenis, bahan, warna, untuk, size, merk);
    }

    public static void main(String[] args) {
        // Menambahkan produk awal
        addProduk(1, "hohoho", "Aksesoris", 10000, 5, "Baju", "Polyester", "Merah", "Kucing", "L", "yoy",
                false);
        addProduk(2, "hahaha", "Aksesoris", 20000, 8, "Baju", "Katun", "Pink", "Anjing", "M", "yay", false);
        addProduk(3, "hihihi", "Aksesoris", 30000, 12, "Baju", "Sutra", "Biru", "Hamster", "S", "yiy",
                false);
        addProduk(4, "hehehe", "Aksesoris", 40000, 3, "Baju", "Katun Jepang", "Ungu", "Ikan", "XS", "yey",
                false);
        addProduk(5, "huhuhu", "Aksesoris", 500000, 1, "Baju", "Wol", "Hijau", "Domba", "XL", "yuy", false);

        int pilihan;
        do {
            System.out.println(">U<) MENUUUUUUU~~~");
            System.out.println("+==================+");
            System.out.println("| 1. Lihat produk  |");
            System.out.println("| 2. Tambah produk |");
            System.out.println("| 3. Keluar        |");
            System.out.println("+==================+");
            System.out.print("Pilih menu: ");

            pilihan = scanner.nextInt();
            scanner.nextLine(); // Membersihkan buffer

            switch (pilihan) {
                case 1:
                    showProduk();
                    break;
                case 2:
                    int id, harga, stok;
                    String name, kategori, jenis, bahan, warna, untuk, size, merk;

                    while (true) {
                        System.out.print("Masukkan ID: ");
                        id = scanner.nextInt();
                        scanner.nextLine(); // Membersihkan buffer

                        // Cek apakah ID sudah ada
                        boolean idExist = false;
                        for (Baju produk : daftarProduk) {
                            if (produk.getId() == id) {
                                idExist = true;
                                break;
                            }
                        }

                        if (idExist) {
                            System.out.println("Error: ID sudah ada, masukkan ID lain.");
                        } else {
                            break; // Keluar dari loop jika ID belum ada
                        }
                    }

                    System.out.print("Masukkan Nama: ");
                    name = scanner.nextLine();
                    System.out.print("Masukkan Kategori: ");
                    kategori = scanner.nextLine();
                    System.out.print("Masukkan Harga: ");
                    harga = scanner.nextInt();
                    scanner.nextLine(); // Membersihkan buffer
                    System.out.print("Masukkan Stok: ");
                    stok = scanner.nextInt();
                    scanner.nextLine(); // Membersihkan buffer
                    System.out.print("Masukkan Jenis: ");
                    jenis = scanner.nextLine();
                    System.out.print("Masukkan Bahan: ");
                    bahan = scanner.nextLine();
                    System.out.print("Masukkan Warna: ");
                    warna = scanner.nextLine();
                    System.out.print("Masukkan Untuk (Hewan): ");
                    untuk = scanner.nextLine();
                    System.out.print("Masukkan Size: ");
                    size = scanner.nextLine();
                    System.out.print("Masukkan Merk: ");
                    merk = scanner.nextLine();

                    addProduk(id, name, kategori, harga, stok, jenis, bahan, warna, untuk, size, merk, true);
                    break;

                case 3:
                    System.out.println("Bye bye :>");
                    break;
                default:
                    System.out.println("Pilihan tidak valid!\n");
                    break;
            }
        } while (pilihan != 3);
    }
}
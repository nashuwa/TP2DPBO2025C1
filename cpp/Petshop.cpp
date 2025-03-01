#include <iostream>
#include <string>
#include <list>

using namespace std;

class Petshop
{
    private:
        int id;
        string name;
        string kategori;
        int harga;
    // menunjukkan bahwa atribut tersebut adalah private

    public:
        Petshop() // default constructor untuk inisialisasi atribut ke nilai default, contoh Petshop produk1;
        {
            this->id = 0;
            this->name = "";
            this->kategori = "";
            this->harga = 0;
        }

        int get_id() const// membaca id
        {
            return this->id;
        }
        
        void set_id(int id)// mengubah id
        {
            this->id = id;
        }

        string get_name() const// membaca nama
        {
            return this->name;
        }
        
        void set_name(string name) // mengubah nama
        {
            this->name = name;
        }

        string get_kategori() const// membaca kategori
        {
            return this->kategori;
        }
        
        void set_kategori(string kategori) // mengubah kategori
        {
            this->kategori = kategori;
        }

        int get_harga() const// membaca harga
        {
            return this->harga;
        }
        
        void set_harga(int harga) // mengubah harga
        {
            this->harga = harga;
        }

        ~Petshop() // destruktor untuk mengosongkan alokasi memory
        {
            
        }
};
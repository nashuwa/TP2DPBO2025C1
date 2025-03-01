#include <iostream>
#include <string>
#include <list>
#include "Petshop.cpp"

using namespace std;

class Aksesoris: public Petshop
{
    private:
        string jenis;
        string bahan;
        string warna;
    public:
        Aksesoris()
        {
            this->jenis = "";
            this->bahan = "";
            this->warna = "";
        }

        string get_jenis() const// membaca nama
        {
            return this->jenis;
        }
        
        void set_jenis(string jenis) // mengubah nama
        {
            this->jenis = jenis;
        }

        string get_bahan() const// membaca bahan
        {
            return this->bahan;
        }
        
        void set_bahan(string bahan) // mengubah bahan
        {
            this->bahan = bahan;
        }

        string get_warna() const// membaca warna
        {
            return this->warna;
        }
        
        void set_warna(string warna) // mengubah warna
        {
            this->warna = warna;
        }

        ~Aksesoris()
        {
            
        }
};
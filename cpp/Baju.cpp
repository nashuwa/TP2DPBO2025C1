#include <iostream>
#include <string>
#include <list>
#include "Aksesoris.cpp"

using namespace std;

class Baju: public Aksesoris
{
    private:
        string untuk;
        string size;
        string merk;
    public:

        Baju()
        {
            this->untuk = "";
            this->size = "";
            this->merk = "";
        }

        string get_untuk() const// membaca nama
        {
            return this->untuk;
        }
        
        void set_untuk(string untuk) // mengubah nama
        {
            this->untuk = untuk;
        }

        string get_size() const// membaca size
        {
            return this->size;
        }
        
        void set_size(string size) // mengubah size
        {
            this->size = size;
        }

        string get_merk() const// membaca merk
        {
            return this->merk;
        }
        
        void set_merk(string merk) // mengubah merk
        {
            this->merk = merk;
        }

        ~Baju()
        {
            
        }
};
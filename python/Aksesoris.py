from Petshop import Petshop

class Aksesoris(Petshop):
    __jenis = ""
    __bahan = ""
    __warna = ""
    
    def __init__(self, jenis = "", bahan = "", warna = ""):
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna
        
    def get_jenis(self): return self.__jenis
    def set_jenis(self, jenis): self.__jenis = jenis
        
    def get_bahan(self): return self.__bahan
    def set_bahan(self, bahan): self.__bahan = bahan
        
    def get_warna(self): return self.__warna
    def set_warna(self, warna): self.__warna = warna
from Aksesoris import Aksesoris

class Baju(Aksesoris):
    __untuk = ""
    __size = ""
    __merk = ""
    
    def __init__(self, untuk = "", size = "", merk = ""):
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk
        
    def get_untuk(self): return self.__untuk
    def set_untuk(self, untuk): self.__untuk = untuk
        
    def get_size(self): return self.__size
    def set_size(self, size): self.__size = size
        
    def get_merk(self): return self.__merk
    def set_merk(self, merk): self.__merk = merk
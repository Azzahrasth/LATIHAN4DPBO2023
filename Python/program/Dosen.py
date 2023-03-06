# import class sivitas dari file sivitas
from Sivitas import Sivitas

# class declaration


class Dosen (Sivitas):
    # atribut private
    __nip = ""
    __fakultas = ""
    __pend_terakhir = ""
    __keahlian = ""

   # kons truktor
    def __init__(self, nik="", nama="", jenis_kelamin="", asal_univ="", email_edu="", nip="", fakultas="", pend_terakhir="", keahlian=""):
        super().__init__(nik, nama, jenis_kelamin, asal_univ, email_edu)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian

    # Getter and Setter

    def get_nip(self):
        return self.__nip

    def set_nip(self, nip):
        self.__nip = nip

    def get_fakultas(self):
        return self.__fakultas

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

    def get_pend_terakhir(self):
        return self.__pend_terakhir

    def set_pend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    def get_keahlian(self):
        return self.__keahlian

    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian

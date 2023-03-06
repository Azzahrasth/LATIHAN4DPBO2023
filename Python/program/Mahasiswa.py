# import class sivitas file sivitas
from Sivitas import Sivitas

# class declaration


class Mahasiswa (Sivitas):

    # atribut private
    __nim = ""
    __fakultas = ""

   # konstruktor
    def __init__(self, nik="", nama="", jenis_kelamin="", asal_univ="", email_edu="", nim="", fakultas=""):
        super().__init__(nik, nama, jenis_kelamin, asal_univ, email_edu)
        self.__nim = nim
        self.__fakultas = fakultas

    # Getter and Setter
    def get_nim(self):
        return self.__nim

    def set_nim(self, nim):
        self.__nim = nim

    def get_fakultas(self):
        return self.__fakultas

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

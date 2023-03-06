# import class dosen dari file dosen
from Dosen import Dosen

# deklarasi class course


class Course:

    # atribut private
    __nama_matakuliah = ""
    # composite kelas dosen dan mahasiswa
    __dosen = Dosen()
    __mhs = []  # array of object mahasiswa

   # konstruktor
    def __init__(self, nama_matakuliah="",  dosen=Dosen(), mhs=[]):
        self.__nama_matakuliah = nama_matakuliah
        self.__dosen = dosen
        self.__mhs = mhs

    # Getter and Setter

    def get_nama_matakuliah(self):
        return self.__nama_matakuliah

    def set_nama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    def get_dosen(self):
        return self.__dosen

    def set_dosen(self, dosen):
        self.__dosen = dosen

    def get_mhs(self):
        return self.__mhs

    def set_mhs(self, mhs):
        self.__mhs = mhs

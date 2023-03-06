# class declaration
class Prodi:
    # atribut private
    __nama_prodi = ""
    __kode = ""
    # composite kelas course
    __Course = []  # array of object course

   # konstruktor
    def __init__(self, nama_prodi="", kode="",  Course=[]):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__Course = Course

    # Getter and Setter
    def get_nama_prodi(self):
        return self.__nama_prodi

    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def get_kode(self):
        return self.__kode

    def set_kode(self, kode):
        self.__kode = kode

    def get_Course(self):
        return self.__Course

    def set_Course(self, Course):
        self.__Course = Course

# import class human dari file human
from Human import Human

# class declaration


class Sivitas (Human):

    # atribut private
    __asal_univ = ""
    __email_edu = ""

   # konstruktor
    def __init__(self, nik="", nama="", jenis_kelamin="", asal_univ="", email_edu=""):
        super().__init__(nik, nama, jenis_kelamin)
        self.__asal_univ = asal_univ
        self.__email_edu = email_edu

    # Getter and Setter

    def get_asal_univ(self):
        return self.__asal_univ

    def set_asal_univ(self, asal_univ):
        self.__asal_univ = asal_univ

    def get_email_edu(self):
        return self.__email_edu

    def set_email_edu(self, email_edu):
        self.__email_edu = email_edu

// import file header
#include "header.hh"

// konstruktor tanpa parameter
Human::Human()
{
    // set isi atribut secara default
    this->nik = "";
    this->nama = "";
    this->jenis_kelamin = "";
}

// konstruktor dengan parameter
Human::Human(string nik, string nama, string jenis_kelamin)
{
    // set isi atribut berdasarkan isi parameter
    this->nik = nik;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

/* Getter dan Setter*/

// Get nik
string Human::get_nik()
{
    return this->nik;
}

// Set nik
void Human::set_nik(string nik)
{
    this->nik = nik;
}
// Get nama
string Human::get_nama()
{
    return this->nama;
}

// Set nama
void Human::set_nama(string nama)
{
    this->nama = nama;
}

// Get jenis_kelamin
string Human::get_jenis_kelamin()
{
    return this->jenis_kelamin;
}

// Set jenis_kelamin
void Human::set_jenis_kelamin(string jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

/* desktruktor */

// default
Human::~Human() // desktruktor
{
}

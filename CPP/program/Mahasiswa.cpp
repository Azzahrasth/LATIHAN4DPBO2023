// import file header
#include "header.hh"

// konstruktor tanpa parameter
Mahasiswa::Mahasiswa()
{
    // set isi atribut secara default
    this->nim = "";
    this->fakultas = "";
}
// konstruktor dengan parameter
Mahasiswa::Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nim, string fakultas) : Sivitas(nik, nama, jenis_kelamin, asal_univ, email_edu)
{
    // set isi atribut berdasarkan isi parameter
    this->nim = nim;
    this->fakultas = fakultas;
}

/* Getter dan Setter*/

// Get nim
string Mahasiswa::get_nim()
{
    return this->nim;
}

// Set nim
void Mahasiswa::set_nim(string nim)
{
    this->nim = nim;
}

// Get fakultas
string Mahasiswa::get_fakultas()
{
    return this->fakultas;
}

// Set fakultas
void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

/* desktruktor */

// default
Mahasiswa::~Mahasiswa() // desktruktor
{
}

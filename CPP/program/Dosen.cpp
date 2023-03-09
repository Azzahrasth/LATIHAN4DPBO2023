// import file header
#include "header.hh"

/* konstruktor */

// konstruktor tanpa parameter
Dosen::Dosen()
{
    // set isi atribut secara default
    this->nip = "";
    this->fakultas = "";
    this->pend_terakhir = "";
    this->keahlian = "";
}
// konstruktor dengan parameter
Dosen::Dosen(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian) : Sivitas(nik, nama, jenis_kelamin, asal_univ, email_edu)
{
    // set isi atribut berdasarkan isi parameter
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

/* Getter dan Setter*/

// Get nip
string Dosen::get_nip()
{
    return this->nip;
}

// Set nip
void Dosen::set_nip(string nip)
{
    this->nip = nip;
}

// Get fakultas
string Dosen::get_fakultas()
{
    return this->fakultas;
}

// Set fakultas
void Dosen::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}
// Get pend_terakhir
string Dosen::get_pend_terakhir()
{
    return this->pend_terakhir;
}

// Set pend_terakhir
void Dosen::set_pend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}
// Get keahlian
string Dosen::get_keahlian()
{
    return this->keahlian;
}

// Set keahlian
void Dosen::set_keahlian(string keahlian)
{
    this->keahlian = keahlian;
}

/* desktruktor */

// default
Dosen::~Dosen() // desktruktor
{
}

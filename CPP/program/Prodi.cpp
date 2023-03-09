// import file header
#include "header.hh"

/* konstruktor */

// konstruktor tanpa parameter
Prodi::Prodi()
{
    // set isi atribut secara default

    this->nama_prodi = "";
    this->kode = "";
}

// konstruktor dengan parameter
Prodi::Prodi(string nama_prodi, string kode, Course matkul)
{
    // set isi atribut berdasarkan isi parameter
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->matkul.push_back(matkul);
}

/* Getter dan Setter*/

// Get nama_prodi
string Prodi::get_nama_prodi()
{
    return this->nama_prodi;
}

// Set nama_prodi
void Prodi::set_nama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}
// Get kode
string Prodi::get_kode()
{
    return this->kode;
}

// Set kode
void Prodi::set_kode(string kode)
{
    this->kode = kode;
}

// Get MataKuliah
list<Course> Prodi::get_matkul()
{
    return this->matkul;
}

// Set MataKuliah
void Prodi::set_matkul(list<Course> matkul)
{
    this->matkul = matkul;
}
// add list objek MataKuliah
void Prodi::add_matkul(Course matkul)
{
    this->matkul.push_back(matkul);
}

/* desktruktor */

// default
Prodi::~Prodi() // desktruktor
{
}

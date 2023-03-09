// import file header
#include "header.hh"

/* konstruktor */

// konstruktor tanpa parameter
Course::Course()
{
    // set isi atribut secara default
    this->nama_matakuliah = "";
}

// konstruktor dengan parameter
Course::Course(string nama_matakuliah, Dosen dosen, Mahasiswa mhs)
{
    // set isi atribut berdasarkan isi parameter
    this->nama_matakuliah = nama_matakuliah;
    this->dosen = dosen;
    this->mhs.push_back(mhs);
}

/* Getter dan Setter*/

// Get nama_matakuliah
string Course::get_nama_matakuliah()
{
    return this->nama_matakuliah;
}

// Set nama_matakuliah
void Course::set_nama_matakuliah(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}
// Get dosen
Dosen Course::get_dosen()
{
    return this->dosen;
}

// Set dosen
void Course::set_dosen(Dosen dosen)
{
    this->dosen = dosen;
}
// Get Mahasiswa
list<Mahasiswa> Course::get_mhs()
{
    return this->mhs;
}

// Set Mahasiswa
void Course::set_mhs(list<Mahasiswa> mhs)
{
    this->mhs = mhs;
}
// Add list objek Mahasiswa
void Course::add_mhs(Mahasiswa mhs)
{
    this->mhs.push_back(mhs);
}

/* desktruktor */

// default
Course::~Course() // desktruktor
{
}

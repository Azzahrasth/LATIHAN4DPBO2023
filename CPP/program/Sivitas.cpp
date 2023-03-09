// import file header
#include "header.hh"

// konstruktor tanpa parameter
Sivitas::Sivitas() : Human()
{
    // set isi atribut secara default
    this->asal_univ = "";
    this->email_edu = "";
}
// konstruktor dengan parameter
Sivitas::Sivitas(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu) : Human(nik, nama, jenis_kelamin)
{
    // set isi atribut berdasarkan isi parameter
    this->asal_univ = asal_univ;
    this->email_edu = email_edu;
}

/* Getter dan Setter*/

// Get asal_univ
string Sivitas::get_asal_univ()
{
    return this->asal_univ;
}

// Set asal_univ
void Sivitas::set_asal_univ(string asal_univ)
{
    this->asal_univ = asal_univ;
}

// Get email_edu
string Sivitas::get_email_edu()
{
    return this->email_edu;
}

// Set email_edu
void Sivitas::set_email_edu(string email_edu)
{
    this->email_edu = email_edu;
}

/* desktruktor */

// default
Sivitas::~Sivitas() // desktruktor
{
}

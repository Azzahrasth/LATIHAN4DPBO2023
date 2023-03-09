// declare library
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// deklarasi kelas Human
class Human
{
    // atribut private
private:
    string nik, nama;
    string jenis_kelamin;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Human();

    // konstruktor dengan parameter
    Human(string nik, string nama, string jenis_kelamin);

    /* Getter dan Setter*/

    // Get nik
    string get_nik();

    // Set nik
    void set_nik(string nik);
    // Get nama
    string get_nama();

    // Set nama
    void set_nama(string nama);

    // Get jenis_kelamin
    string get_jenis_kelamin();

    // Set jenis_kelamin
    void set_jenis_kelamin(string jenis_kelamin);

    /* desktruktor */

    // default
    ~Human(); // desktruktor
};

// deklarasi kelas Sivitas, child kelas human
class Sivitas : public Human
{
    // atribut private
private:
    string asal_univ, email_edu;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Sivitas();
    // konstruktor dengan parameter
    Sivitas(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu);
    /* Getter dan Setter*/

    // Get asal_univ
    string get_asal_univ();

    // Set asal_univ
    void set_asal_univ(string asal_univ);

    // Get email_edu
    string get_email_edu();

    // Set email_edu
    void set_email_edu(string email_edu);

    /* desktruktor */

    // default
    ~Sivitas(); // desktruktor
};
// deklarasi kelas mahasiswa, child kelas sivitas
class Mahasiswa : public Sivitas
{
    // atribut private
private:
    string nim, fakultas;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Mahasiswa();
    // konstruktor dengan parameter
    Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nim, string fakultas);

    /* Getter dan Setter*/

    // Get nim
    string get_nim();
    // Set nim
    void set_nim(string nim);

    // Get fakultas
    string get_fakultas();

    // Set fakultas
    void set_fakultas(string fakultas);

    /* desktruktor */

    ~Mahasiswa();
};

// deklarasi kelas Dosen, child kelas sivitas
class Dosen : public Sivitas
{
    // atribut private
private:
    string nip, fakultas, pend_terakhir, keahlian;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Dosen();
    // konstruktor dengan parameter
    Dosen(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian);

    /* Getter dan Setter*/

    // Get nip
    string get_nip();

    // Set nip
    void set_nip(string nip);

    // Get fakultas
    string get_fakultas();

    // Set fakultas
    void set_fakultas(string fakultas);
    // Get pend_terakhir
    string get_pend_terakhir();

    // Set pend_terakhir
    void set_pend_terakhir(string pend_terakhir);
    // Get keahlian
    string get_keahlian();

    // Set keahlian
    void set_keahlian(string keahlian);

    /* desktruktor */

    ~Dosen();
};

// deklarasi kelas Course
class Course
{
    // atribut private
private:
    string nama_matakuliah;
    // komposite cobjek dosen dan mahasiswa
    Dosen dosen;
    list<Mahasiswa> mhs;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Course();

    // konstruktor dengan parameter
    Course(string nama_matakuliah, Dosen dosen, Mahasiswa mhs);

    /* Getter dan Setter*/

    // Get nama_matakuliah
    string get_nama_matakuliah();

    // Set nama_matakuliah
    void set_nama_matakuliah(string nama_matakuliah);
    // Get dosen
    Dosen get_dosen();

    // Set dosen
    void set_dosen(Dosen dosen);
    // Get Mahasiswa
    list<Mahasiswa> get_mhs();

    // Set Mahasiswa
    void set_mhs(list<Mahasiswa> mhs);
    // Add list objek Mahasiswa
    void add_mhs(Mahasiswa mhs);

    /* desktruktor */

    // default
    ~Course();
};

// deklarasi kelas Prodi
class Prodi
{
    // atribut private
private:
    string nama_prodi, kode;
    // komposite kelas course
    list<Course> matkul;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Prodi();

    // konstruktor dengan parameter
    Prodi(string nama_prodi, string kode, Course matkul);

    /* Getter dan Setter*/

    // Get nama_prodi
    string get_nama_prodi();

    // Set nama_prodi
    void set_nama_prodi(string nama_prodi);
    // Get kode
    string get_kode();
    // Set kode
    void set_kode(string kode);

    // Get MataKuliah
    list<Course> get_matkul();

    // Set MataKuliah
    void set_matkul(list<Course> matkul);
    // add list objek MataKuliah
    void add_matkul(Course matkul);

    /* desktruktor */

    // default
    ~Prodi();
};

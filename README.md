# LATIHAN4DPBO2023
Latihan Praktikum 4 DPBO - Composite

# LATIHAN 4 DPBO 2023

## -- Janji --
Saya Azzahra SIti Hadjar NIM 2100901 mengerjakan soal Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## -- Desain Program --
Program berbasis OOP dengan menerapkan konsep Multi-level Inheritance. 

Terdapat 3 Kelas yaitu kelas Human, Sivitas Akademik, dan Mahasiswa

![lat 4 prak](https://user-images.githubusercontent.com/100898963/223083753-ca36767d-d3e0-4767-9973-14ac616a8a52.jpg)


#### 1. Kelas Human 
- memiliki private atribut betipe data string untuk menyimpan data nik, nama dan char untuk menyimpan data jenis kelamin. 
- memiliki public method kontruktor, setter, dan getter untuk nik, nama, dan jenis kelamin. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Human ini menjadi super/base class, yaitu parent dari kelas sivitas akademik 

#### 2. Kelas Sivitas (Sivitas Akademik) 
- memiliki private atribut betipe data string untuk menyimpan data asal universitas dan email edu. 
- memiliki public method kontruktor, setter, dan getter untuk nik, nama, dan jenis kelamin. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Sivitas ini menjadi derived class 1/Intermediary Class, yaitu child dari kelas Human dan parent dari kelas Mahasiswa 

#### 3. Kelas Mahasiswa 
- memiliki private atribut betipe data string untuk menyimpan data nim, fakultas, dan prodi. 
- memiliki public method kontruktor, setter, dan getter untuk nik, nama, dan jenis kelamin. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Mahasiswa ini menjadi derived class 2, yaitu child dari kelas Sivitas


## -- Penjelasan Alur --
- Pertama, import library dan file kelas yang digunakan
- Membuat list of objek mahasiswa.
- Instansiasi objek mahasiswa
- inisialisasi objek mahasiswa dengan menggunakan method setter yang ada padal kelas mahasiswa dan kelas parent nya (sivitas dan)
- masukan objek ke dalam list mahasiswa
- menampilkan isi list mahasiswa

## -- Dokumentasi saat Program  di Jalankan --
### Program dengan Java
![1](https://user-images.githubusercontent.com/100898963/220070615-6b9de5ad-583a-4da5-9d10-4c3e3a5fcfb1.jpg)

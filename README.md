# LATIHAN4DPBO2023
Latihan Praktikum 4 DPBO - Composite

# LATIHAN 4 DPBO 2023

## -- Janji --
Saya Azzahra SIti Hadjar NIM 2100901 mengerjakan soal Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## -- Desain Program --
Program berbasis OOP dengan menerapkan konsep Multi-level Inheritance. 

Terdapat 6 Kelas yaitu kelas Human, Sivitas Akademik, Mahasiswa, Dosen, Course, Prodi

![lat 4 prak](https://user-images.githubusercontent.com/100898963/223083753-ca36767d-d3e0-4767-9973-14ac616a8a52.jpg)


#### 1. Kelas Human 
- memiliki private atribut betipe data string untuk menyimpan data nik, nama dan char untuk menyimpan data jenis kelamin. 
- memiliki public method kontruktor, setter, dan getter untuk nik, nama, dan jenis kelamin. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Human ini menjadi super/base class, yaitu parent dari kelas sivitas akademik 

#### 2. Kelas Sivitas (Sivitas Akademik) 
- memiliki private atribut betipe data string untuk menyimpan data asal universitas dan email edu. 
- memiliki public method kontruktor, setter, dan getter untuk asal universitas dan email edu. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Sivitas ini menjadi derived class 1/Intermediary Class, yaitu child dari kelas Human dan parent dari kelas Mahasiswa 

#### 3. Kelas Mahasiswa 
- memiliki private atribut betipe data string untuk menyimpan data nim, dan fakultas. 
- memiliki public method kontruktor, setter, dan getter untuk nim dan fakultas. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Mahasiswa ini menjadi derived class 2, yaitu child dari kelas Sivitas

#### 4. Kelas Dosen 
- memiliki private atribut betipe data string untuk menyimpan data nip, fakultas, pendidikan terakhirm dan keaahlian. 
- memiliki public method kontruktor, setter, dan getter untuk setiap atribut nya. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas
- kelas Dosen ini menjadi derived class 2, yaitu child dari kelas Sivitas

#### 5. Kelas Course
- memiliki private atribut betipe data string untuk menyimpan data nama kuliah. Lalu memiliki atribut bertipe data objek yaitu dosen dan list mahasiswa 
- memiliki public method kontruktor, setter, dan getter untuk setiap atribut nya. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas. Lalu ada method add untuk menambahkan objek pada list mahasiswa

#### 5. Kelas Prodi
- memiliki private atribut betipe data string untuk menyimpan data nama prodi dan kode. Lalu memiliki atribut bertipe data objek yaitu list mata kuliah
- memiliki public method kontruktor, setter, dan getter untuk setiap atribut nya. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas. Lalu ada method add untuk menambahkan objek pada list mata kuliah

## -- Penjelasan Alur --
- Pertama, import library dan file kelas yang digunakan
- Instansiasi objek mahasiswa dan dosen
- Instansiasi objek mata kuliah dengan mengcomposite objek dosen pengampu dan list mahasiswa yang mengontrak
- Instansiasi objek prodi dengan mengcomposite objek matakuliah yang ada pada prodi
- memasukan objek prodi ke list_prodi
- menampilkan isi data objek prodi pada list_prodi

## -- Dokumentasi saat Program  di Jalankan --
### Program dengan CPP

<img width="299" alt="Screenshot 2023-03-09 235345" src="https://user-images.githubusercontent.com/100898963/224105770-d508748f-12cf-4555-9870-90ec791a1ddb.png">

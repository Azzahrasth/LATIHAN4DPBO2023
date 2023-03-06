# Saya Azzahra Siti Hadjar NIM 2100901 mengerjakan soal Latihan 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan
# seperti yang telah dispesifikasikan. Aamiin. 

# import class file
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course
from Prodi import Prodi

# instansiasi objek mahasiswa
ara = Mahasiswa("11111", "Azzahra Siti Hadjar", "Perempuan",
                "UPI", "azzahrasth@upi.edu", "2100901", "FPMIPA")

anan = Mahasiswa("22222", "Anandita Kusuma Mulyadi", "Perempuan",
                 "UPI", "ananditakm@upi.edu", "2101214", "FPMIPA")

ami = Mahasiswa("33333", "Amida Zulfa Laila", "Perempuan",
                "UPI", "amidazlf@upi.edu", "2101351", "FPMIPA")

yeonjun = Mahasiswa("44444", "Yeonjun Mbayang", "Laki - laki",
                    "UPI", "yawnzznn@upi.edu", "2100123", "FPMIPA")

taehyung = Mahasiswa("55555", "Taehyung Syahreza",
                     "Laki - laki", "UPI", "thv@upi.edu", "2107777", "FPMIPA")

# instansiasi objek dosen
bu_ani = Dosen("66666", "Ani Anisyah S.Pd., M.T.", "Perempuan", "UPI",
               "anianisyah@upi.edu", "92020041", "FPMIPA", "S3", "Machine Learning")
bu_rani = Dosen("77777", "Dr. Rani Megasari M.T.", "Perempuan", "UPI",
                "ranimegasari@upi.edu", "89202211", "FPMIPA", "S3", "Data")
bu_rosa = Dosen("88888", "Rosa Ariana Sukamto M.T.", "Perempuan", "UPI",
                "anianisyah@upi.edu", "88021231", "FPMIPA", "S3", "Programming")
pak_tatang = Dosen("88888", "Tatang Sukesna M.T.", "Laki - laki", "UPI",
                   "tatangs@upi.edu", "850123231", "FPMIPA", "S3", "Kalkulus")

# instansiasi objek course
dpbo = Course("Desain Pemrograman Berbasis Objek",
              bu_rosa, [ara, ami, yeonjun])
ml = Course("Machine Learning", bu_ani, [ara, ami, yeonjun])
stat_ilkom = Course("Statistika", bu_rani, [ara, yeonjun])
stat_mtk = Course("Statistika", bu_rani, [anan, taehyung])
kalkulus_ilkom = Course("Kalkulus", pak_tatang, [ara, yeonjun])
kalkulus_mtk = Course("Kalkulus", pak_tatang, [anan, taehyung])

# bikin list of object prodi
list_prodi = []

# instansiasi objek prodi
ilkom = Prodi("Ilmu Komputer", "IK", [dpbo, ml, stat_ilkom, kalkulus_ilkom])
list_prodi.append(ilkom)
mtk = Prodi("Matematika", "MTK", [stat_mtk, kalkulus_mtk])
list_prodi.append(mtk)

# menampilkan list prodi
print("==>", "List Program Studi".center(60), "<==\n")

# looping objek prodi pada list_prodi
for i, prodi in enumerate(list_prodi):
    # print nama dan kode prodi
    print(f"""{i+1}.
Nama Program Studi : {prodi.get_nama_prodi()}
Kode Program Studi : {prodi.get_kode()}
List Mata Kuliah : """)
    # looping list objek matkul yang dimiliki prodi tersebut
    # print nama matkul, dan nama dosen pengampu dari matkul tersebut
    for j, matkul in enumerate(prodi.get_Course()):
        print(f"""
    {j+1}.
    Nama Matkul     : {matkul.get_nama_matakuliah()}
    Dosen Pengampu  : {matkul.get_dosen().get_nama()}
    Profil Dosen Pengampu :
        Nama          : {matkul.get_dosen().get_nama()}
        NIK           : {matkul.get_dosen().get_nik()}
        Jenis Kelamin : {matkul.get_dosen().get_jenis_kelamin()}
        NIP           : {matkul.get_dosen().get_nip()}
        Pend Terakhir : {matkul.get_dosen().get_pend_terakhir()}
        Keahlian      : {matkul.get_dosen().get_keahlian()}
        Fakultas      : {matkul.get_dosen().get_fakultas()}
        Asal_Univ     : {matkul.get_dosen().get_asal_univ()}
        Email_Edu     : {matkul.get_dosen().get_email_edu()}
    
    List Mahasiswa yang mengontrak matakuliah {matkul.get_nama_matakuliah()} : """)
        # looping list objek mahasiswa yang mengontrak matkul tersebut
        # print profil mahasiswa
        for k, mhs in enumerate(matkul.get_mhs()):
            print(f"""
        {k+1}.
        {mhs.get_nama()}
        Profil Mahasiswa :
            Nama          : {mhs.get_nama()}
            NIK           : {mhs.get_nik()}
            Jenis_Kelamin : {mhs.get_jenis_kelamin()}
            NIM           : {mhs.get_nim()}
            Fakultas      : {mhs.get_fakultas()} 
            Asal_Univ     : {mhs.get_asal_univ()}
            Email_Edu     : {mhs.get_email_edu()}""")

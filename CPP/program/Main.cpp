/* Saya Azzahra Siti Hadjar NIM 2100901 mengerjakan soal Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin. */

// import file header

#include "header.hh"

int main()
{
    // instansiasi objek mahasiswa
    Mahasiswa ara("11111", "Azzahra Siti Hadjar", "Perempuan",
                  "UPI", "azzahrasth@upi.edu", "2100901", "FPMIPA");

    Mahasiswa anan("22222", "Anandita Kusuma Mulyadi", "Perempuan",
                   "UPI", "ananditakm@upi.edu", "2101214", "FPMIPA");

    Mahasiswa ami("33333", "Amida Zulfa Laila", "Perempuan",
                  "UPI", "amidazlf@upi.edu", "2101351", "FPMIPA");

    Mahasiswa yeonjun("44444", "Yeonjun Mbayang", "Laki - laki",
                      "UPI", "yawnzznn@upi.edu", "2100123", "FPMIPA");

    Mahasiswa taehyung("55555", "Taehyung Syahreza",
                       "Laki - laki", "UPI", "thv@upi.edu", "2107777", "FPMIPA");

    // instansiasi objek dosen
    Dosen bu_ani("66666", "Ani Anisyah S.Pd., M.T.", "Perempuan", "UPI",
                 "anianisyah@upi.edu", "92020041", "FPMIPA", "S3", "Machine Learning");
    Dosen bu_rani("77777", "Dr. Rani Megasari M.T.", "Perempuan", "UPI",
                  "ranimegasari@upi.edu", "89202211", "FPMIPA", "S3", "Data");
    Dosen bu_rosa("88888", "Rosa Ariana Sukamto M.T.", "Perempuan", "UPI",
                  "rosa@upi.edu", "88021231", "FPMIPA", "S3", "Programming");
    Dosen pak_tatang("88888", "Tatang Sukesna M.T.", "Laki - laki", "UPI",
                     "tatangs@upi.edu", "850123231", "FPMIPA", "S3", "Kalkulus");

    // instansiasi objek mata kuliah
    Course dpbo("Desain Pemrograman Berbasis Objek",
                bu_rosa, ara);
    // menambah mahasiswa pada list mahasiswa di objek matkul
    dpbo.add_mhs(yeonjun);
    Course ml("Machine Learning", bu_ani, ami);
    Course stat("Statistika", bu_rani, anan);
    stat.add_mhs(taehyung);
    Course kalkulus("Kalkulus", pak_tatang, taehyung);

    // instansiasi objek prodi
    list<Prodi> list_prodi;
    Prodi ilkom("Ilmu Komputer", "IK", dpbo);
    // menambah matkul pada list matkul di objek prodi
    ilkom.add_matkul(ml);
    list_prodi.push_back(ilkom);
    Prodi mtk("Matematika", "MTK", stat);
    mtk.add_matkul(kalkulus);
    list_prodi.push_back(mtk);

    // menampilkan list objek prodi
    cout << "            ==== List Program Studi ====" << endl;

    int no_i = 1;
    // looping objek prodi pada list_prodi
    for (list<Prodi>::iterator i = list_prodi.begin(); i != list_prodi.end(); i++)
    {
        cout << no_i << ". " << i->get_nama_prodi() << endl;
        no_i++;
        // print kode dan nama prodi
        cout << "Kode Program Studi : " << i->get_kode() << endl;
        cout << "Nama Program Studi : " << i->get_nama_prodi() << endl;
        // membuat list matkul yang dimiliki prodi
        list<Course> list_matkul = i->get_matkul();
        int no_j = 1;
        cout << "\nList Mata Kuliah pada Program Studi " << i->get_nama_prodi() << endl;
        // looping list matkul yang dimiliki prodi tersebut
        for (list<Course>::iterator j = list_matkul.begin(); j != list_matkul.end(); j++)
        {
            cout << "\n   " << no_j << ". " << j->get_nama_matakuliah() << endl;
            no_j++;
            // print nama matkul, dan profil dosen pengampu dari matkul tersebut
            cout << "   Nama Matkul :" << j->get_nama_matakuliah() << endl;
            cout << "   Profil Dosen Pengampu :" << endl;
            cout << "       Nama            :" << j->get_dosen().get_nama() << endl;
            cout << "       NIK             :" << j->get_dosen().get_nik() << endl;
            cout << "       Jenis_Kelamin   :" << j->get_dosen().get_jenis_kelamin() << endl;
            cout << "       NIP             :" << j->get_dosen().get_nip() << endl;
            cout << "       Pend Terakhir   :" << j->get_dosen().get_pend_terakhir() << endl;
            cout << "       Keahlian        :" << j->get_dosen().get_pend_terakhir() << endl;
            cout << "       Fakultas        :" << j->get_dosen().get_fakultas() << endl;
            cout << "       Asal_Univ       :" << j->get_dosen().get_asal_univ() << endl;
            cout << "       Email_Edu       :" << j->get_dosen().get_email_edu() << endl;
            // membuat list mahasiswa yang mengontrak matkul
            list<Mahasiswa> list_mhs = j->get_mhs();
            int no_k = 1;
            cout << "\n   List Mahasiswa yang mengontrak matakuliah " << j->get_nama_matakuliah() << endl;
            // looping list mahasiswa yang mengontrak matkul tersebut
            for (list<Mahasiswa>::iterator k = list_mhs.begin(); k != list_mhs.end(); k++)
            {
                cout << "\n       " << no_k << ". " << k->get_nama() << endl;
                no_k++;
                // print profil mahasiswa
                cout << "       Profil Mahasiswa :" << endl;
                cout << "           Nama            :" << k->get_nama() << endl;
                cout << "           NIK             :" << k->get_nik() << endl;
                cout << "           Jenis_Kelamin   :" << k->get_jenis_kelamin() << endl;
                cout << "           NIM             :" << k->get_nim() << endl;
                cout << "           Fakultas        :" << k->get_fakultas() << endl;
                cout << "           Asal_Univ       :" << k->get_asal_univ() << endl;
                cout << "           Email_Edu       :" << k->get_email_edu() << endl;
            }
        }
    }

    return 0;
}
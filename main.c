#include <stdio.h>
#include <string.h>

// struct mahasiswa
typedef struct
{
    char npm[16];
    char nama[50];
    char prodi[20];
    float ipk;
} Mahasiswa;

// tamppilkan data mahassiwa sebeluk disorting
void tampilkanData(Mahasiswa mhs[], int n)
{
    printf("NPM\tNama\tProdi\tIPK\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s, %s, %s, %.2f\n", mhs[i].npm, mhs[i].nama, mhs[i].prodi, mhs[i].ipk);
    }
}

// fungsi bubbleSort
void bubbleSort(Mahasiswa mhs[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            // compare
            if (strcmp(mhs[j].npm, mhs[j + 1].npm) > 0)
            {
                // tukar posisi jika npm lebih besar
                Mahasiswa temp = mhs[j];
                mhs[j] = mhs[j + 1];
                mhs[j + 1] = temp;
            }
        }
    }
}

int main()
{
    Mahasiswa mahasiswa[] = {
        {"23081010110", "Aril", "Informatika", 4},
        {"23081010121", "Bobby", "Informatika", 3.5},
        {"23081010132", "Asep", "Informatika", 3.8},
        {"23081010102", "Jarwo", "Informatika", 2.5},
        {"23081010100", "Evan", "Informatika", 3}};

    int jumlahMahasiswa = sizeof(mahasiswa) / sizeof(mahasiswa[0]);

    printf("Data Sebelum Disorting:\n");
    tampilkanData(mahasiswa, jumlahMahasiswa);

    bubbleSort(mahasiswa, jumlahMahasiswa);

    printf("Data Setelah Disorting berdasarkan NPM\n");
    tampilkanData(mahasiswa, jumlahMahasiswa);

    return 0;
}
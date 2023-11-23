#include <iostream>

using namespace std;

int main()
{
    //Latihan Studi Kasus 2
    //Mencari jumlah dan rata rata nilai
    //Maziya Ats Tsaqofi
    //23 November 2023

    float sum, average, bilangan, a;

    //mencari total nilainya
    for (a=1; a<=5; a++){
        cout << "Bilangan ke-" << a << "= ";
        cin >> bilangan;
        sum+=bilangan; //untuk menjumlahkan bilangan yang telah di inputkan
    }

    cout << "Total penjumlahan nilainya: " << sum <<endl;

    //mencari rata rata
    average = sum/5;
    cout << "Total rata-rat nilainya: " <<average<<endl;


    return 0;
}

#include <iostream>
#include<string>
using namespace std;

    //struct : data yang dibentuk beberapa data

    struct buah{
        string warna;
        float berat;
        int harga;
        string rasa;

    };

int main(){
     char yt;
    string pilih;
    buah apel;
    buah jeruk;
    buah mangga;
    buah pepaya;
    float kg,hargapokok;
    int diskon,totalharga,uang,kembali;

    apel.warna = "merah";
    apel.harga = 2500;
    apel.berat = 200;
    apel.rasa = "manis";

    jeruk.warna = "orange";
    jeruk.harga = 2000;
    jeruk.berat = 210.5f;
    jeruk.rasa = "asam manis";

    mangga.warna = "hijau";
    mangga.harga = 3000;
    mangga.berat = 300.10f;
    mangga.rasa = "manis";

    pepaya.warna = "hijau";
    pepaya.harga = 8000;
    pepaya.berat = 1.10f;
    pepaya.rasa = "manis";


cout<<"==========================================================="<<endl;
cout<<"||              Toko Buah ZeraFruit                      ||"<<endl;
cout<<"||          Bumi Sawangan Indah 2 Blok H2 No.141         ||"<<endl;
cout<<"==========================================================="<<endl;

    beli:
    cout << "   silahkan di pilih buah buah nya   " <<endl;

    cout<<"==========================================================="<<endl;
    cout << " Buah Apel "<<endl;
    cout << "Warna buah apel     : "<<apel.warna <<endl;
    cout << "Berat buah apel     : "<<apel.berat << " gram" <<endl;
    cout << "rasa dari buah apel : "<< apel.rasa <<endl;
    cout << "Harga buah apel     : "<<"Rp."<<apel.harga<<endl;
    cout<<"==========================================================="<<endl;
    cout << " Buah Jeruk "<<endl;
    cout << "Warna buah jeruk     : "<<jeruk.warna <<endl;
    cout << "Berat buah jeruk     : "<<jeruk.berat << " gram" <<endl;
    cout << "rasa dari buah jeruk : "<< jeruk.rasa <<endl;
    cout << "Harga buah jeruk     : "<<"Rp."<<jeruk.harga<<endl;
    cout<<"==========================================================="<<endl;
    cout << " Buah Mangga "<<endl;
    cout << "Warna buah mangga     : "<<mangga.warna <<endl;
    cout << "Berat buah mangga     : "<<mangga.berat << " gram" <<endl;
    cout << "rasa dari buah mangga : "<< mangga.rasa <<endl;
    cout << "Harga buah mangga     : "<<"Rp."<<mangga.harga<<endl;
    cout<<"==========================================================="<<endl;
    cout << " Buah pepaya "<<endl;
    cout << "Warna buah mangga     : "<<pepaya.warna <<endl;
    cout << "Berat buah mangga     : "<<pepaya.berat << " kg" <<endl;
    cout << "rasa dari buah mangga : "<< pepaya.rasa <<endl;
    cout << "Harga buah mangga     : "<<"Rp."<<pepaya.harga<<endl;
    cout<<"==========================================================="<<endl;
    cout << endl;

   
    cout << "Mau beli buah yang mana apel,jeruk,mangga,atau pepaya : " ;
    cin >> pilih;

    cout<<endl;
    if (pilih =="apel"){
        cout <<  "harganya : " <<"Rp."<<apel.harga << endl;
        cout <<  "Masukan berapa Kg apel yang ingin anda beli : ";
        cin >> kg;
        if (kg >=15){
           hargapokok = apel.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl; 
        }else if (kg >= 10) {
            hargapokok = apel.harga*kg;
           diskon =(hargapokok*10)/100;
           cout << hargapokok <<endl;
        }else if (kg >= 5) {
            hargapokok = apel.harga*kg;
           diskon =(hargapokok*5)/100;
           cout << hargapokok <<endl;
        }else{
           hargapokok = apel.harga*kg;
           diskon = 0; 
           cout << hargapokok <<endl;
        }
        
    }else if(pilih == "jeruk"){
        cout <<  "Harganya : " << "Rp." << jeruk.harga <<endl;
        cout <<  "Masukan berapa Kg jeruk yang ingin anda beli : ";
        cin >> kg;
        if (kg >=15){
           hargapokok = jeruk.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl;
        }else if (kg >=15){
           hargapokok = jeruk.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl;
        }else if (kg >=10){
           hargapokok = jeruk.harga*kg;
           diskon =(hargapokok*10)/100;
           cout << hargapokok <<endl;
        }else if (kg >=5){
           hargapokok = jeruk.harga*kg;
           diskon =(hargapokok*5)/100;
           cout << hargapokok <<endl;
        }else{
            hargapokok = jeruk.harga*kg;
            diskon = 0;
            cout << hargapokok <<endl;
        }
    }else if(pilih == "mangga"){
        cout <<  "Harganya : " << "Rp." << mangga.harga <<endl;
        cout <<  "Masukan berapa Kg mangga yang ingin anda beli : ";
        cin >> kg;
        if (kg >=15){
           hargapokok = mangga.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl;
        }else if (kg >=15){
           hargapokok = mangga.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl;
        }else if (kg >=10){
           hargapokok = mangga.harga*kg;
           diskon =(hargapokok*10)/100;
           cout << hargapokok <<endl;
        }else if (kg >=5){
           hargapokok = mangga.harga*kg;
           diskon =(hargapokok*5)/100;
           cout << hargapokok <<endl;
        }else{
            hargapokok = mangga.harga*kg;
            diskon = 0;
            cout << hargapokok <<endl;
        }
    }else if(pilih == "pepaya"){
        cout <<  "Harganya : " << "Rp." << pepaya.harga <<endl;
        cout <<  "Masukan berapa Kg mangga yang ingin anda beli : ";
        cin >> kg;
        if (kg >=15){
           hargapokok = pepaya.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl;
        }else if (kg >=15){
           hargapokok = pepaya.harga*kg;
           diskon =(hargapokok*15)/100;
           cout << hargapokok <<endl;
        }else if (kg >=10){
           hargapokok = pepaya.harga*kg;
           diskon =(hargapokok*10)/100;
           cout << hargapokok <<endl;
        }else if (kg >=5){
           hargapokok = pepaya.harga*kg;
           diskon =(hargapokok*5)/100;
           cout << hargapokok <<endl;
        }else{
            hargapokok = pepaya.harga*kg;
            diskon = 0;
            cout << hargapokok <<endl;
        }
    }else{
     cout << "Pilihan hanya apel,jeruk,& mangga silakan input sesuai buah yang ada "<<endl;
       
        cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
        cin>>yt;
        cout<<endl;

        if(yt=='Y' || yt=='y')
        {goto beli;}
        if(yt=='T' || yt=='t')
        {goto selesai;}
  
        cout<< " Program Selesai "<<endl;
    }
    char pilihan;
    cout<<"==========================================================="<<endl;
    cout<<"Harga Pokok = Rp."<<hargapokok<<endl;
    cout<<"   Diskon   = Rp."<<diskon<<endl;
    totalharga=hargapokok-diskon;
    cout<<"==========================================================="<<endl;
    cout<<"Total Harga = Rp."<<totalharga<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"Masukkan Jumlah Uang Yang Dibayar = Rp."; cin>>uang;
    kembali=uang-totalharga;
    cout<<"==========================================================="<<endl;
    if(kembali<0){
    cout<<"Uang Anda Kurang = "<<kembali<<endl;
    }else{
    cout<<" Kembalian = Rp."<<kembali<<endl;
    cout<<"==========================================================="<<endl;
    }
   
     cout<<"Apakah anda ingin membeli lagi?  : ";
     cout<<"Pilih (Y/N) = ";
        cin>>yt;
        cout<<endl;

        if(yt=='Y' || yt=='y')
        {goto beli;}
        if(yt=='T' || yt=='t')
        {goto selesai;}

        selesai:
    
    cout<<"--------------Terima Kasih Sudah Berbelanja----------------"<<endl;
    

    return 0;
}
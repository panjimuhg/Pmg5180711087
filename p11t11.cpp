#include <iostream>
using namespace std;

main(){
string no[5]={"A001","A002","A003","A007","A008"};
string nma[5]={"Bayu","Irvan","Susiati","Diana","Roni"};

    string mbr,nama,brng,cari,nam,y,Y,T,t;
    int nmr,msk;
    float hrga,jmlh,ttl=0,ttl1=0,ttl2=0;
   {
   cout<<"Apakah anda member (y/t) : ";
    cin>>mbr;
    if (mbr==y||mbr==Y)
        cout<<"masukkan";
        cout<<"Masukkan no : ";cin>>cari;
            for(int w=0;w<5;w++)
            if (cari==no[w])
                {
                nama=nma[w];
                }
        cout<<"\nIdentitas : "<<cari;
        cout<<"\nNama      : "<<nama;
   if (mbr==t||mbr==T){
        cout<<"Masukan";
        cin>>msk;
        cout<<"Nama Pembeli : ";
        cin>>nam;}
        cout<<"\nJumlah Barang : ";cin>>jmlh;
    for (int a=0;a<jmlh;a++){
    cout<<"Nama Barang ke-"<<a<<" : ";cin>>brng;
    cout<<"harga barang ke-"<<a<<" : ";cin>>hrga;
    ttl1=ttl1+hrga;
    cout<<endl;}
    cout<<"Total Harga : "<<ttl1;
    cout<<"\nAnda mendapatkan diskon 5%";
    ttl2=ttl1*0.05;
    cout<<"\ntotal setelah Diskon : "<<ttl2;
    ttl=ttl1-ttl2;
    cout<<"\nTotal Bayar : "<<ttl;
}
}

#include <iostream>
using namespace std;

main(){
string no[5]={"A001","A002","A003","A007","A008"};
string nma[5]={"Bayu","Irvan","Susiati","Diana","Roni"};

    string mbr,nama,brng,cari,nam,y,Y,T,t;
    int nmr;
    float hrga,jmlh,ttl=0;
   {
   cout<<"Apakah anda member (y/t) : ";
    cin>>mbr;
    if (mbr==y||mbr==Y){
        cout<<"masukkan";
        cout<<"Masukkan no : ";cin>>cari;
            for(int w=0;w<5;w++)
            if (cari==no[w])
                {
                nama=nma[w];
                }
        cout<<"\nIdentitas : "<<cari;
        cout<<"\nNama      : "<<nama;}
    else if (mbr==t||mbr==T)
        cout<<"Masukan";
        cout<<"Nama Pembeli : ";
        cin>>nam;

        cout<<"\nJumlah Barang : ";cin>>jmlh;
    for (int a=0;a<jmlh;a++){
    cout<<"Nama Barang ke-"<<a<<" : ";cin>>brng;
    cout<<"harga barang ke-"<<a<<" : ";cin>>hrga;
    ttl=ttl+hrga;
    cout<<endl;}
    cout<<"Total Harga : "<<ttl;
    cout<<"\nAnda mendapatkan diskon 5%";
    ttl=ttl*0.05;
    cout<<"\ntotal setelah Diskon : "<<ttl;
}
}

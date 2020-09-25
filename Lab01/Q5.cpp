#include <iostream>
using namespace std;

int main (){
int polajam1 = 1400,polajam2 = 2100;

// masukkan variabel

cout <<"Waktu pertama dalam pola24jam: " <<polajam1 <<endl;
cout <<"Waktu kedua dalam pola24jam " << polajam2 <<endl;

int jam1,menit1,jam2,menit2;

//variabel untuk memisahkan jam dan menit waktu pertama  
  
jam1=polajam1/100;
menit1=polajam1%100;

cout <<"Waktu pertama dalam pola 12jam: ";
//Kondisi
if(jam1==0 && jam1!=12){ //apabila jam sama dengan 0 atau jam tidak sama dengan 12
  jam1=12; //jika jam sama dengan 12
  printf("%.2d:%.2d AM\n",jam1,menit1); 
}

else if(jam1==12 && jam1!=0){ //apabila jam sama dengan 12 atau jam tidak sama dengan 0
  jam1=12; //jika jam sama dengan 12
  printf("%.2d:%.2d PM\n",jam1,menit1);
}

else if(jam1<12 && jam1!=0){ // apabila  kurang dari 12 tidak sama dengan 0
  jam1=jam1;
  menit1=menit1;
  printf("%.2d:%.2d AM\n",jam1,menit1);
}

else if(jam1>12 && jam1!=0){
  jam1=jam1-12;
  menit1=menit1;
  printf("%.2d:%.2d PM\n",jam1,menit1);
}

// variabel memisahkan jam dan menit untuk waktu kedua
jam2=polajam2/100;
menit2=polajam2%100;

cout <<"Waktu kedua dalam pola 12jam: ";
//Kondisi
if(jam2==0 && jam2!=12){
  jam2=12;
  printf("%.2d:%.2d AM\n",jam2,menit2);
}

else if(jam2==12 && jam2!=0){
  jam2=12;
  printf("%.2d:%.2d PM\n",jam2,menit2);
}

else if(jam2<12 && jam2!=0){
  jam2=jam2;
  menit2=menit2;
  printf("%.2d:%.2d AM\n",jam2,menit2);
}

else if(jam2>12 && jam2!=0){
  jam2=jam2-12;
  menit2=menit2;
  printf("%.2d:%.2d PM\n",jam2,menit2);
}

return 0;
}
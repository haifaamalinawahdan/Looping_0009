#include <iostream>
#include <ctime>
using namespace std;

int main (){
    int x;

    //Perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka acak yang berbeda
    srand(time(0));
    
    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }

    cout<<"Bilangan acak while yang terakhir ="<<x <<endl;
    cout<<endl;


}

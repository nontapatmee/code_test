#include <iostream>//use cout command
using namespace std; //std standard

int main(){
  std::cout <<"Hello World\n";

  //local variable use in main function only
  int a; a=0; //4bytes
  double b; b=0.0;//8bytes

  double c;
  c=double(a)+b;//importance fot typecast
  
  cout << "c=" <<c<< "\n";
  
  //array
  int nx =10;//sometime maybe change
  double phi[nx];//array long 10 = 8bytes *10 , begin wit phi[1] phi[2]....
  phi[0]=1.0;
  phi[1]=1.0;
  phi[2]=1.0;
  phi[3]=1.0;
  phi[4]=1.0;
  phi[5]=1.0;
  phi[6]=1.0;
  phi[7]=1.0;
  phi[9]=1.0;

  int ny =10;
  double phi3[nx][ny]; //array m*n
  
  //loop
  for(int i = 0; i <= nx-1; i++){// if ++i +before in loop,++i +after doing loop
    phi[i] = double(i);
    cout << "phi["<<i<<"] = "<<phi[i] << "\n";
  }

  //nested loop
  for(int i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage
     for(int j = 0; j <= ny-1; j++){
      phi3[i][j] = double(i*j);
       cout << "phi3["<<i<<"" <<j<<"] = "<<phi3[i][j] << "\n";
     }
 }

  

  
 }

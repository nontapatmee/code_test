#include <iostream>//use cout command                                                          #include <cmath> 
#include <cmath>
using namespace std; //std standard

int i,j;
int i_c,j_c;
const int nx =31;
const int ny =31;
double phi[nx][ny]; //array m*n

void initialize(){
  for(int i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage    
     for(int j = 0; j <= ny-1; j++){
      phi[i][j] = double(0.0);
     }
  }
}


void visualize(){
  for(int i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage 
     for(int j = 0; j <= ny-1; j++){
       cout <<phi[i][j] <<" ";
     }
     cout <<"\n";
  }

}

void set_phi(){
  //circal radius 15
  //diff nx and diff ny =1 assume space between nx or ny always called dx dy
  //principle check every unit that have distance away from radius than 15? give it 0 and inside 1
  double radius = 10.;
  i_c=(nx-1)/2;//set center
  j_c=(ny-1)/2;
  for(int i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage    
     for(int j = 0; j <= ny-1; j++){
       if(sqrt(pow(i-i_c,2)+pow(j-j_c,2))<radius){
	   phi[i][j] = 1.;
	 }
       else {phi[i][j]=0.;{
	 }
     }
     }
  }
}

  
int main(){

  initialize();
  set_phi();
  visualize();
  
}

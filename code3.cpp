#include <iostream>//use cout command  input output via screen
#include <cmath> 
#include <fstream>// file input output
using namespace std; //std standard

int i,j;
int i_c,j_c;
const int nx =31;
const int ny =31;
double phi[nx][ny]; //array m*n

//declare variable name myfileI myfileO
ofstream myfileO;//object output file stream
ifstream myfileI;



// void initialize(){
//   for(i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage    
//      for(j = 0; j <= ny-1; j++){
//       phi[i][j] = double(0.0);
//      }
//   }
// }


// void visualize(){
//   for(i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage 
//      for(j = 0; j <= ny-1; j++){
//        cout <<phi[i][j] <<" ";
//      }
//      cout <<"\n";
//   }

// }

// void set_phi(){
//   //circal radius 15
//   //diff nx and diff ny =1 assume space between nx or ny always called dx dy
//   //principle check every unit that have distance away from radius than 15? give it 0 and inside 1
//   double radius = 10.;
//   i_c=(nx-1)/2;//set center
//   j_c=(ny-1)/2;
//   for(i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage    
//      for(j = 0; j <= ny-1; j++){
//        if(sqrt(pow(i-i_c,2)+pow(j-j_c,2))<radius){
// 	   phi[i][j] = 1.;
// 	 }
//        else {phi[i][j]=0.;{
// 	 }
//      }
//      }
//   }
// }


// //routine(different from function(return variable)) for what ualways do
// void save_restartfile (){
//   myfileO.open("file.dat");
//   //want to save phi
//   for(i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage    
//      for(j = 0; j <= ny-1; j++){
//        myfileO <<phi[i][j] <<" ";
//      }
//      myfileO <<"\n";
//   }
//   myfileI.close();
// }


// void read_restartfile (){
//   myfileI.open("file.dat");
//   //want to save phi                                                                            
//   for(i = 0; i <= nx-1; i++){//in real life use i j as global so use just 1 time storage   \
                                                                                                
//      for(j = 0; j <= ny-1; j++){
//        myfileI >> phi[i][j] ;
//      }
//   }
//   myfileI.close();
// }

void summation(int a, int b);

int main(){
  int i,j;
  int i_c,j_c;
  const int nx =31;
  const int ny =31;
  double phi[nx][ny]; //array m*n  
  //initialize();
  // set_phi();
  // visualize();
  // save_restartfile();
  //read_restartfile();
  //visualize();
  summation(nx,ny);
}


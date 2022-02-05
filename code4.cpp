#include <iostream>//use cout command  input output via screen
#include <cmath> 
#include <fstream>// file input output
using namespace std; //std standard

// int i,j;
// int i_c,j_c;
// const int nx =31;
// const int ny =31;
// double phi[nx][ny]; //array m*n

// //declare variable name myfileI myfileO
// ofstream myfileO;//object output file stream
// ifstream myfileI;



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


//nx in main isnt change but phi is change, this must know pointer
// void test(int nx,int ny,double phi[nx],double phi2D[nx][ny]){
//   phi[0] = phi[1]+ phi[2];
//   nx = nx + 1;
// }



// int main(){
//   const int nx= 10;
//   const int ny= 10;
//   double phi[nx];
//   for(int i=0; i <nx; i++){
//     phi[i] =double(i);
//     cout << "phi["<<i<<"]="<< phi[i] << "\n";
//   }
//   cout << "\n";
//   test(nx,phi);
//   cout << "phi[0] = "<<
//   phi[0] << "\n";
//   cout<< "\n";
//   cout << "nx =" << nx <<"\n";

//   double phi2D[nx][ny];
//   test(nx,ny,phi,phi2D);
  
// }



// void summation(int a, int b);



void test(int nx,double *p){
  for(int i =0; i<nx; i++){
    cout <<"phi["<< i << "]="<< p[i] ;
    cout <<" "<<&p[i]<<"\n"; 
  }
  
}

void test2D(int nx ,int ny,double **p){
  for( int i =0; i<nx ;i++){
    for(int j= 0; j,ny ; j++){
      cout << "phi=" << p[i][j];
      
    }
  }
  
}

int main(){

  // 2-d arrays
  const int nx = 10;
  const int ny = 10;
  //double phi[nx][ny]

  double **phi2d;//pointer to pointer
  phi2d = (double **) malloc(nx* sizeof(double));
  for(int i = 0; i<nx; i++){
    phi2d[i] = (double *) malloc(ny * sizeof(double));
  }

  //  test2D(nx,ny,phi);


  double *phi;
  phi = (double *) malloc(nx* sizeof(double));
  test(nx,phi);
  
  cout <<"&phi = " <<&phi<< " phi = " << phi << "\n";
  cout <<"*phi = "<<*phi << "\n";

  // 1-d array  
  //phi sol1
  //double phi[nx];
 
  //phi sol2 ;for deep understanding
  // double *phi;
  // phi = (double *) malloc(nx*sizeof(double)); // === phi[nx]

  // for(int i =0; i<nx; i++){
  //   phi[i] = double(i);
  // }

  // test(nx,phi);





  
  // int a = 10; //decimal
  // cout << "a = " << a <<"\n";

  // //show variable address
  // cout<< "&a ="<< &a << "\n";//referancing
  // // &a = 0x7ffebd075634 > 0x =>hexadecimal
  // //                      address
  // //                7 f f e b d 0 7 5 6 3 4                         hexadecimal
  // // 0111 1111 1111 1110 1011 1101 0000 0111 0101 0110 0011 0100    binary
  

  // // 10 <> 1010 (binary) 4bits
  // // so int 32 bits 0000 .... 000000001010 only in RAM
  
  // //binary decimal ( content data in RAM )
  // // 0 0,1 1, 10 2, 11 3, 100 4,101 5 ,110 6,111 7, 1000 8,1001 9,1010 10
  

  // cout <<"\n";

  // int array[10];
  // for( int i = 0; i< 10; i++){
  //   array[i] =double(i);
  //   cout << "array ["<< i <<"] = "<< array[i] <<", stored at "<<&array[i]<< "\n";
  // }
  //   cout << "\n";


  //   int *p; //pointer contain address that address contain integer
  //   p = &a;
  //   cout << "p=" <<p<< "\n";
  //   cout << "*p=" << *p << "\n";
  //   cout << "&p=" << &p << "\n";
    


  


















  

  



  // int i,j;
  // int i_c,j_c;
  // const int nx =31;
  // const int ny =31;
  // double phi[nx][ny]; //array m*n  
  // //initialize();
  // // set_phi();
  // // visualize();
  // // save_restartfile();
  // //read_restartfile();
  // //visualize();
  // summation(nx,ny);
}


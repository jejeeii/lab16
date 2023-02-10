#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);  

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z){
   int n[] = {*w,*x,*y,*z};
   int m[4];
   int p[4] = {1,1,1,1};
   int i = 0;
   while(i < 4){
      int r = rand()%4;
         if(p[r] == 1){
         m[i] = n[r];
         p[r] = 0;
         i++;
         }
    }
    *w = m[0];
    *x = m[1];
    *y = m[2];
    *z = m[3];
} 
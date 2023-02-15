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
void shuffle(int *A,int *B,int *C,int *D){
	int x,y,z[] = {*A,*B,*C,*D};

	for(int i = 0; i < 4; i++){
		x = z[i];
		y = rand()%4;
		z[i] = z[y];
		z[y] = x;
	}
	*A = z[0];
	*B = z[1];
	*C = z[2];
	*D = z[3];
}


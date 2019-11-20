/********************************
	Este programa fué hecho por: Héctor Robles Martínez
		Fecha de Incio: 6 - Noviembre - 2019
		Fecha de publicación de la primera versión: 19 - Noviembre - 2019
		Probado en:
			Ubuntu 18.04.3 LTS
			
		Compilador:
			g++ (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
*********************************/
#ifdef __linux__
	#define LIMPIAR "clear"
#endif
#ifdef __MINGW3232__
	#define LIMPIAR "cls"
#endif
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void mostrar();
void seleccionar();
void ingresar(int sel);
void verificar(int sel);

int a1[3][3] = {{2,5,0}, {3,0,9}, {0,0,1}};
int a2[3][3] = {{0,0,3}, {0,0,0}, {0,0,6}};
int a3[3][3] = {{0,9,1}, {7,2,0}, {3,0,0}};
int a4[3][3] = {{0,0,0}, {0,1,0}, {6,0,3}};
int a5[3][3] = {{0,6,8}, {0,4,0}, {0,0,0}};
int a6[3][3] = {{0,0,3}, {0,0,0}, {0,5,0}};
int a7[3][3] = {{1,3,2}, {0,0,0}, {7,6,4}};
int a8[3][3] = {{0,0,0}, {0,0,4}, {0,1,0}};
int a9[3][3] = {{0,7,0}, {0,6,0}, {0,0,0}};

int main(){
	system(LIMPIAR);
	seleccionar();
}

void seleccionar(){
	int sel;
	cout<<"Las casillas del sudoku se seleccionan de la siguiente manera:\n";
	cout<<"\033[1;30m"<<"|00|01|02|"<<"\033[1;31m"<<"|03|04|05|"<<"\033[1;32m"<<"|06|07|08|\n";
	cout<<"\033[1;30m"<<"|10|11|12|"<<"\033[1;31m"<<"|13|14|15|"<<"\033[1;32m"<<"|16|17|18|\n";
	cout<<"\033[1;30m"<<"|20|21|22|"<<"\033[1;31m"<<"|23|24|25|"<<"\033[1;32m"<<"|26|27|28|\n";
	cout<<"\033[1;33m"<<"|30|31|32|"<<"\033[1;34m"<<"|33|34|35|"<<"\033[1;35m"<<"|36|37|38|\n";
	cout<<"\033[1;33m"<<"|40|41|42|"<<"\033[1;34m"<<"|43|44|45|"<<"\033[1;35m"<<"|46|47|48|\n";
	cout<<"\033[1;33m"<<"|50|51|52|"<<"\033[1;34m"<<"|53|54|55|"<<"\033[1;35m"<<"|56|57|58|\n";
	cout<<"\033[1;36m"<<"|60|61|62|"<<"\033[1;37m"<<"|63|64|65|"<<"\033[1;30m"<<"|66|67|68|\n";
	cout<<"\033[1;36m"<<"|70|71|72|"<<"\033[1;37m"<<"|73|74|75|"<<"\033[1;30m"<<"|76|77|78|\n";
	cout<<"\033[1;36m"<<"|80|81|82|"<<"\033[1;37m"<<"|83|84|85|"<<"\033[1;30m"<<"|86|87|88|\n";
	system(LIMPIAR);
	cout<<"Seleccione una coordenada del sudoku:\n";
	mostrar();
	cin>>sel;
	cout<<sel<<"\n";
	ingresar(sel);
}

void mostrar(){
	int j, i;
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"\033[1;30m"<<"|"<<a1[i][j]<<"|";
			//cout<<"|"<<a1[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"\033[1;31m"<<"|"<<a2[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"\033[1;32m"<<"|"<<a3[i][j]<<"|";
		}
		cout<<"\n";
	}
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"\033[1;33m"<<"|"<<a4[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"\033[1;34m"<<"|"<<a5[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"\033[1;35m"<<"|"<<a6[i][j]<<"|";
		}
		cout<<"\n";
	}
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"\033[1;36m"<<"|"<<a7[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"\033[1;37m"<<"|"<<a8[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"\033[1;30m"<<"|"<<a9[i][j]<<"|";
		}
		cout<<"\n";
	}
}

void ingresar(int sel){
	int x = (int) sel / 10;
	int y = sel - (x * 10);
	int i = 0, j = 0;
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;30m";
				if(i == x && j == y){
					cout<<"\033[5;30m"<<"|"<<a1[i][j]<<"|";
				}else{
					cout<<"|"<<a1[i][j]<<"|";
				}
			}else{
				cout<<"\033[1;30m"<<"|"<<a1[i][j]<<"|";
			}
		}
		for(j = 3; j < 6; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;31m";
				if(i == x && j == y){
					cout<<"\033[5;31m"<<"|"<<a2[i][j-3]<<"|";
				}else{
					cout<<"|"<<a2[i][j-3]<<"|";
				}
			}else{
				cout<<"\033[1;31m"<<"|"<<a2[i][j-3]<<"|";
			}
		}
		for(j = 6; j < 9; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;32m";
				if(i == x && j == y){
					cout<<"\033[5;32m"<<"|"<<a3[i][j-6]<<"|";
				}else{
					cout<<"|"<<a3[i][j-6]<<"|";
				}
			}else{
				cout<<"\033[1;32m"<<"|"<<a3[i][j-6]<<"|";
			}
		}
		cout<<"\n";
	}
	for(i = 3; i <6; i++){
		for(j = 0; j < 3; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;33m";
				if(i == x && j == y){
					cout<<"\033[5;33m"<<"|"<<a4[i-3][j]<<"|";
				}else{
					cout<<"|"<<a4[i-3][j]<<"|";
				}
			}else{
				cout<<"\033[1;33m"<<"|"<<a4[i-3][j]<<"|";
			}
		}
		for(j = 3; j < 6; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;34m";
				if(i == x && j == y){
					cout<<"\033[5;34m"<<"|"<<a5[i-3][j-3]<<"|";
				}else{
					cout<<"|"<<a5[i-3][j-3]<<"|";
				}
			}else{
				cout<<"\033[1;34m"<<"|"<<a5[i-3][j-3]<<"|";
			}
		}
		for(j = 6; j < 9; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;35m";
				if(i == x && j == y){
					cout<<"\033[5;35m"<<"|"<<a6[i-3][j-6]<<"|";
				}else{
					cout<<"|"<<a6[i-3][j-6]<<"|";
				}
			}else{
				cout<<"\033[1;35m"<<"|"<<a6[i-3][j-6]<<"|";
			}
		}
		cout<<"\n";
	}
	for(i = 6; i <9; i++){
		for(j = 0; j < 3; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
			cout<<"\033[7;36m";
				if(i == x && j == y){
					cout<<"\033[5;36m"<<"|"<<a7[i-6][j]<<"|";
				}else{
					cout<<"|"<<a7[i-6][j]<<"|";
				}
			}else{
				cout<<"\033[1;36m"<<"|"<<a7[i-6][j]<<"|";
			}
		}
		for(j = 3; j < 6; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y){
				cout<<"\033[7;37m";
				if(i == x && j == y){
					cout<<"\033[5;37m"<<"|"<<a8[i-6][j-3]<<"|";
				}else{
					cout<<"|"<<a8[i-6][j-3]<<"|";
				}
			}else{
				cout<<"\033[1;37m"<<"|"<<a8[i-6][j-3]<<"|";
			}
		}
		for(j = 6; j < 9; j++){
			cout<<"\033[1;0m";
			if(i == x || j == y ){
				cout<<"\033[7;30m";
				if(i == x && j == y ){
					cout<<"\033[5;30m"<<"|"<<a9[i-6][j-6]<<"|";
				}else{
					cout<<"|"<<a9[i-6][j-6]<<"|";
				}
			}else{
				cout<<"\033[1;30m"<<"|"<<a9[i-6][j-6]<<"|";
			}
		}
		cout<<"\n"<<"\033[1;0m";
	}
	cout<<x<<","<<y<<"\n"<<"\033[1;0m";
	verificar(sel);
}

void verificar(int sel){
	int x = (int) sel / 10;
	int y = sel - (x * 10);
	int i = 0, j = 0;
	int num = 0, zn = 0;
	switch(x){
		case 0:
			switch(y){
				case 0:
					zn = 1;
				break;
				case 1:
					zn = 1;
				break;
				case 2:
					zn = 1;
				break;
				case 3:
					zn = 2;
				break;
				case 4:
					zn = 2;
				break;
				case 5:
					zn = 2;
				break;
				case 6:
					zn = 3;
				break;
				case 7:
					zn = 3;
				break;
				case 8:
					zn = 3;
				break;
			}
		break;
		case 1:
			switch(y){
				case 0:
					zn = 1;
				break;
				case 1:
					zn = 1;
				break;
				case 2:
					zn = 1;
				break;
				case 3:
					zn = 2;
				break;
				case 4:
					zn = 2;
				break;
				case 5:
					zn = 2;
				break;
				case 6:
					zn = 3;
				break;
				case 7:
					zn = 3;
				break;
				case 8:
					zn = 3;
				break;
			}
		break;
		case 2:
			switch(y){
				case 0:
					zn = 1;
				break;
				case 1:
					zn = 1;
				break;
				case 2:
					zn = 1;
				break;
				case 3:
					zn = 2;
				break;
				case 4:
					zn = 2;
				break;
				case 5:
					zn = 2;
				break;
				case 6:
					zn = 3;
				break;
				case 7:
					zn = 3;
				break;
				case 8:
					zn = 3;
				break;
			}
		break;
		case 3:
			switch(y){
				case 0:
					zn = 4;
				break;
				case 1:
					zn = 4;
				break;
				case 2:
					zn = 4;
				break;
				case 3:
					zn = 5;
				break;
				case 4:
					zn = 5;
				break;
				case 5:
					zn = 5;
				break;
				case 6:
					zn = 6;
				break;
				case 7:
					zn = 6;
				break;
				case 8:
					zn = 6;
				break;
			}
		break;
		case 4:
			switch(y){
				case 0:
					zn = 4;
				break;
				case 1:
					zn = 4;
				break;
				case 2:
					zn = 4;
				break;
				case 3:
					zn = 5;
				break;
				case 4:
					zn = 5;
				break;
				case 5:
					zn = 5;
				break;
				case 6:
					zn = 6;
				break;
				case 7:
					zn = 6;
				break;
				case 8:
					zn = 6;
				break;
			}
		break;
		case 5:
			switch(y){
				case 0:
					zn = 4;
				break;
				case 1:
					zn = 4;
				break;
				case 2:
					zn = 4;
				break;
				case 3:
					zn = 5;
				break;
				case 4:
					zn = 5;
				break;
				case 5:
					zn = 5;
				break;
				case 6:
					zn = 6;
				break;
				case 7:
					zn = 6;
				break;
				case 8:
					zn = 6;
				break;
			}
		break;
		case 6:
			switch(y){
				case 0:
					zn = 7;
				break;
				case 1:
					zn = 7;
				break;
				case 2:
					zn = 7;
				break;
				case 3:
					zn = 8;
				break;
				case 4:
					zn = 8;
				break;
				case 5:
					zn = 8;
				break;
				case 6:
					zn = 9;
				break;
				case 7:
					zn = 9;
				break;
				case 8:
					zn = 9;
				break;
			}
		break;
		case 7:
			switch(y){
				case 0:
					zn = 7;
				break;
				case 1:
					zn = 7;
				break;
				case 2:
					zn = 7;
				break;
				case 3:
					zn = 8;
				break;
				case 4:
					zn = 8;
				break;
				case 5:
					zn = 8;
				break;
				case 6:
					zn = 9;
				break;
				case 7:
					zn = 9;
				break;
				case 8:
					zn = 9;
				break;
			}
		break;
		case 8:
			switch(y){
				case 0:
					zn = 7;
				break;
				case 1:
					zn = 7;
				break;
				case 2:
					zn = 7;
				break;
				case 3:
					zn = 8;
				break;
				case 4:
					zn = 8;
				break;
				case 5:
					zn = 8;
				break;
				case 6:
					zn = 9;
				break;
				case 7:
					zn = 9;
				break;
				case 8:
					zn = 9;
				break;
			}
		break;
	}
	cout<<"Dame el número que quieras ingresar\n";
	cin>>num;
	cout<<"num = "<<num<<"\n"<<"zn"<<zn<<"\n";
	switch(zn){
		case 1:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a1[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x == i && y == j){
							a1[x][y] = num;
						}
					}
				}
			}
		break;
		case 2:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a2[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x == i && y-3 == j){
							a2[x][y-3] = num;
						}
					}
				}
			}
		break;
		case 3:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a3[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x == i && y-6 == j){
							a3[x][y-6] = num;
						}
					}
				}
			}
		break;
		case 4:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a4[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x-3 == i && y == j){
							a4[x-3][y] = num;
						}
					}
				}
			}
		break;
		case 5:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a5[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x-3 == i && y-3 == j){
							a5[x-3][y-3] = num;
						}
					}
				}
			}
		break;
		case 6:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a6[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x-3 == i && y-6 == j){
							a3[x-3][y-6] = num;
						}
					}
				}
			}
		break;
		case 7:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a7[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x-6 == i && y == j){
							a7[x-6][y] = num;
						}
					}
				}
			}
		break;
		case 8:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a8[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x-6 == i && y-3 == j){
							a8[x-6][y-3] = num;
						}
					}
				}
			}
		break;
		case 9:
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(a9[i][j] == num){
						cout<<"El numero ya existe en este recuadro\n";
					}else{
						if(x-6 == i && y-6 == j){
							a9[x-6][y-6] = num;
						}
					}
				}
			}
		break;
	}

	for(i = 0; i <3; i++){//Primer renglón de regiones
		for(j = 0; j < 3; j++){//región 1
			if(i == x || j == y){
				if(i != x && y != j){
					if (a1[i][j] == num){
						a1[x][y] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
		for(j = 3; j < 6; j++){//región 2
			if(i == x || j == y){
				if(i != x && y != j){
					if(a2[i][j] == num){
						a2[x][y-3] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
		for(j = 6; j < 9; j++){//región 3
			if(i == x || j == y){
				if(i != x && y != j){
					if (a3[i][j] == num){
						a3[x][y-6] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
	}
	for(i = 3; i <6; i++){//Segundo renglón de regiones 
		for(j = 0; j < 3; j++){//región 4
			if(i == x || j == y){
				if(i != x && y != j){
					if (a4[i][j] == num){
						a4[x-3][y] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
		for(j = 3; j < 6; j++){//región 5
			if(i == x || j == y){
				if(i != x && y != j){
					if (a5[i][j] == num){
						a5[x-3][y-3] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
		for(j = 6; j < 9; j++){//región 6
			if(i == x || j == y){
				if(i != x && y != j){
					if (a6[i][j] == num){
						a6[x-3][y-6] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
	}
	for(i = 6; i <9; i++){//Tercer renglón de regiones
		for(j = 0; j < 3; j++){//región 7
			if(i == x || j == y){
				if(i != x && y != j){
					if (a7[i][j] == num){
						a7[x-6][y] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
		for(j = 3; j < 6; j++){//región 8
			if(i == x || j == y){
				if(i != x && y != j){
					if (a8[i][j] == num){
						a8[x-6][y-3] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
		for(j = 6; j < 9; j++){//región 9
			if(i == x || j == y ){
				if(i != x && y != j){
					if (a9[i][j] == num){
						a9[x-6][y-6] = 0;
						cout<<"Ese número ya está en la cruz\n";
					}
				}
			}
		}
	}
	seleccionar();
}

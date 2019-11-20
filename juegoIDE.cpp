#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void mostrar();
void seleccionar();
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
	seleccionar();
}

void seleccionar(){
	int sel;
	cout<<"Las casillas del sudoku se seleccionan de la siguiente manera:\n";
	cout<<"|00|01|02|"<<"|03|04|05|"<<"|06|07|08|\n";
	cout<<"|10|11|12|"<<"|13|14|15|"<<"|16|17|18|\n";
	cout<<"|20|21|22|"<<"|23|24|25|"<<"|26|27|28|\n";
	cout<<"|30|31|32|"<<"|33|34|35|"<<"|36|37|38|\n";
	cout<<"|40|41|42|"<<"|43|44|45|"<<"|46|47|48|\n";
	cout<<"|50|51|52|"<<"|53|54|55|"<<"|56|57|58|\n";
	cout<<"|60|61|62|"<<"|63|64|65|"<<"|66|67|68|\n";
	cout<<"|70|71|72|"<<"|73|74|75|"<<"|76|77|78|\n";
	cout<<"|80|81|82|"<<"|83|84|85|"<<"|86|87|88|\n";
	cout<<"Seleccione una coordenada del sudoku:\n";
	mostrar();
	cin>>sel;
	cout<<sel<<"\n";
	verificar(sel);
	cout<<"\n";
}

void mostrar(){
	int j, i;
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"|"<<a1[i][j]<<"|";
			//cout<<"|"<<a1[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"|"<<a2[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"|"<<a3[i][j]<<"|";
		}
		cout<<"\n";
	}
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"|"<<a4[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"|"<<a5[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"|"<<a6[i][j]<<"|";
		}
		cout<<"\n";
	}
	for(i = 0; i <3; i++){
		for(j = 0; j < 3; j++){
			cout<<"|"<<a7[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"|"<<a8[i][j]<<"|";
		}
		for(j = 0; j < 3; j++){
			cout<<"|"<<a9[i][j]<<"|";
		}
		cout<<"\n";
	}
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

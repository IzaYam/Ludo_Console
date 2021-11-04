#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#define ARRIBA 72
#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77
using namespace System;
using namespace std;
int tablero[19][37] = {
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,0,2,2,2,0,2,2,2,2,2,2},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,0,2,2,2,0,2,2,2,2,2,2},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
{8,8,8,8,8,8,0,8,8,8,0,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,0,9,9,9,0,9,9,9,9,9,9},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
{8,8,8,8,8,8,0,8,8,8,0,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,0,9,9,9,0,9,9,9,9,9,9},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,7,0,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9} };
void mapa() {
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 37; j++) {
			if (tablero[i][j] == 0) {
				Console::BackgroundColor = ConsoleColor::White;
				cout << " ";
			}
			if (tablero[i][j] == 1) {
				Console::BackgroundColor = ConsoleColor::Blue;
				cout << " ";
			}
			if (tablero[i][j] == 2) {
				Console::BackgroundColor = ConsoleColor::Red;
				cout << " ";
			}
			if (tablero[i][j] == 3) {
				Console::BackgroundColor = ConsoleColor::Red;
				cout << " ";
			}
			if (tablero[i][j] == 4) {
				Console::BackgroundColor = ConsoleColor::Blue;
				cout << " ";
			}
			if (tablero[i][j] == 5) {
				Console::BackgroundColor = ConsoleColor::Black;
				cout << " ";
			}
			if (tablero[i][j] == 6) {
				Console::BackgroundColor = ConsoleColor::DarkYellow;
				cout << " ";
			}
			if (tablero[i][j] == 7) {
				Console::BackgroundColor = ConsoleColor::Magenta;
				cout << " ";
			}
			if (tablero[i][j] == 8) {
				Console::BackgroundColor = ConsoleColor::Magenta;
				cout << " ";
			}
			if (tablero[i][j] == 9) {
				Console::BackgroundColor = ConsoleColor::DarkYellow;
				cout << " ";
			}
		}
		cout << endl;
	}
}
void logo() {
	Console::SetCursorPosition(40, 8);
	cout << "#        #       #  # # #      # # # # #" << endl;
	Console::SetCursorPosition(40, 9);
	cout << "#        #       #  #     #    #       #" << endl;
	Console::SetCursorPosition(40, 10);
	cout << "#        #       #  #      #   #       #" << endl;
	Console::SetCursorPosition(40, 11);
	cout << "#        #       #  #       #  #       #" << endl;
	Console::SetCursorPosition(40, 12);
	cout << "#        #       #  #      #   #       #" << endl;
	Console::SetCursorPosition(40, 13);
	cout << "#        #       #  #     #    #       #" << endl;
	Console::SetCursorPosition(40, 14);
	cout << "# # # #  # # # # #  # # #      # # # # #" << endl;
	Console::SetCursorPosition(40, 16);
	cout << "           Yamile izaguirre" << endl;
	Console::SetCursorPosition(0, 28);
	cout << "presione enter para continuar...";
	_getch();
}
int num_jugadores() {
	int num;
	Console::SetCursorPosition(40, 2);
	cout << "#        #       #  # # #      # # # # #" << endl;
	Console::SetCursorPosition(40, 3);
	cout << "#        #       #  #     #    #       #" << endl;
	Console::SetCursorPosition(40, 4);
	cout << "#        #       #  #      #   #       #" << endl;
	Console::SetCursorPosition(40, 5);
	cout << "#        #       #  #       #  #       #" << endl;
	Console::SetCursorPosition(40, 6);
	cout << "#        #       #  #      #   #       #" << endl;
	Console::SetCursorPosition(40, 7);
	cout << "#        #       #  #     #    #       #" << endl;
	Console::SetCursorPosition(40, 8);
	cout << "# # # #  # # # # #  # # #      # # # # #" << endl;
	Console::SetCursorPosition(0, 28);
	cout << "presione enter para continuar...";
	Console::SetCursorPosition(45, 11);
	cout << "Ingrese numero de jugadores" << endl;
	Console::SetCursorPosition(58, 13);
	cin >> num;
	return num;
}
void esperando() {
	Console::SetCursorPosition(40, 2);
	cout << "#        #       #  # # #      # # # # #" << endl;
	Console::SetCursorPosition(40, 3);
	cout << "#        #       #  #     #    #       #" << endl;
	Console::SetCursorPosition(40, 4);
	cout << "#        #       #  #      #   #       #" << endl;
	Console::SetCursorPosition(40, 5);
	cout << "#        #       #  #       #  #       #" << endl;
	Console::SetCursorPosition(40, 6);
	cout << "#        #       #  #      #   #       #" << endl;
	Console::SetCursorPosition(40, 7);
	cout << "#        #       #  #     #    #       #" << endl;
	Console::SetCursorPosition(40, 8);
	cout << "# # # #  # # # # #  # # #      # # # # #" << endl;
	Console::SetCursorPosition(49, 11);
	cout << "Cargando partida"; _sleep(1000); cout << "."; _sleep(1000); cout << "."; _sleep(1000); cout << ".";
}
void instrucciones() {
	Console::SetCursorPosition(50, 3);
	cout << "instrucciones del juego" << endl << endl;
	cout << "              Se juega con un dado de seis caras y juegan 2 o 4 personas, cada una tiene 4 peones o fichas." << endl;
	cout << "               Cada Jugador tiene el objetivo de llevar sus 4 peones desde la carcel hasta la casa(meta)." << endl;
	cout << "           - A cada jugador le corresponde un turno, cuando es su turno lanza un dado para mover sus fichas," << endl;
	cout << "            se podra mover solo la cantidad que indica el dado. Cuando el dado es un 6 el jugador tendra la" << endl;
	cout << "          opcion de poder sacar a un peon de la carcel o mover uno que ya esta fuera. Si no tiene ningun peon" << endl;
	cout << "         fuera de la carcel se ingresa cualquier numero al escoger un peon y no se movera ninguno porque todos" << endl;
	cout << "   estaran en la cárcel, pero se ingresara para pasar el turno. El dado se lanzara automaticamente al pasar el turno." << endl;
	cout << "        - Cuando el peón de un jugador cae en la casilla del peón de su contrincante o cae en la casilla de uno" << endl;
	cout << "                  de sus propios peones el peón que estaba en la casilla primero regresa a la cárcel." << endl;
	cout << "       - Cuando un peón llega a la fila o columna del color de su cárcel estará seguro, es decir, que ningún" << endl;
	cout << "    contrincante podrá entrar, una vez ahí debe moverse el número exacto a la meta, de lo contrario retrocederá" << endl;
	cout << "                                         la cantidad sobrante del dado." << endl;
	cout << "                      - El juego termina cuando un jugador tiene sus 4 peones en la meta." << endl;
	cout << "  ADVERTENCIA: Si se coloca el numero de un peón no disponible o se selecciona una opción que no existe se perderá" << endl;
	cout << "                 el turno.No hay dobles turnos.No se escoge el peón a sacar solo él peón a mover." << endl;
	Console::SetCursorPosition(0, 28);
	cout << "presione enter para continuar...";
	_getch();
}
void fichas_iniciales2() {
	//jugador 1
	Console::SetCursorPosition(10, 2);
	cout << "1";
	Console::SetCursorPosition(6, 2);
	cout << "1";
	Console::SetCursorPosition(10, 5);
	cout << "1";
	Console::SetCursorPosition(6, 5);
	cout << "1";
	//jugador 2
	Console::SetCursorPosition(30, 2);
	cout << "2";
	Console::SetCursorPosition(26, 2);
	cout << "2";
	Console::SetCursorPosition(30, 5);
	cout << "2";
	Console::SetCursorPosition(26, 5);
	cout << "2";
}
void fichas_iniciales4() {
	//jugador 1
	Console::SetCursorPosition(10, 2);
	cout << "2";
	Console::SetCursorPosition(6, 2);
	cout << "1";
	Console::SetCursorPosition(10, 5);
	cout << "4";
	Console::SetCursorPosition(6, 5);
	cout << "3";
	//jugador 2
	Console::SetCursorPosition(30, 2);
	cout << "2";
	Console::SetCursorPosition(26, 2);
	cout << "1";
	Console::SetCursorPosition(30, 5);
	cout << "4";
	Console::SetCursorPosition(26, 5);
	cout << "3";
	// jugador 3
	Console::SetCursorPosition(10, 13);
	cout << "2";
	Console::SetCursorPosition(6, 13);
	cout << "1";
	Console::SetCursorPosition(10, 16);
	cout << "4";
	Console::SetCursorPosition(6, 16);
	cout << "3";
	// jugador 4
	Console::SetCursorPosition(30, 13);
	cout << "2";
	Console::SetCursorPosition(26, 13);
	cout << "1";
	Console::SetCursorPosition(30, 16);
	cout << "4";
	Console::SetCursorPosition(26, 16);
	cout << "3";
}
void adornos() {
	Console::BackgroundColor = ConsoleColor::Black;
	Console::SetCursorPosition(53, 2);
	cout << "======= TURNO =======" << endl;
	Console::SetCursorPosition(51, 6);
	cout << "==== SALIO UN 6 ELIGE ====" << endl;
	Console::SetCursorPosition(50, 13);
	cout << "==== PEONES DISPONIBLES ====" << endl;
	Console::SetCursorPosition(51, 20);
	cout << " ===== PEON A MOVER =====" << endl;
	Console::SetCursorPosition(95, 2);
	cout << " ===== DADO =====" << endl;
	Console::SetCursorPosition(101, 4);
	cout << "-------" << endl;
	Console::SetCursorPosition(101, 5);
	cout << "|     |";
	Console::SetCursorPosition(101, 6);
	cout << "|     |";
	Console::SetCursorPosition(101, 7);
	cout << "|     |";
	Console::SetCursorPosition(101, 8);
	cout << "-------" << endl;
}
void CC(int x) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x); }
void gotoxy(int x, int y) { Console::SetCursorPosition(x, y); }
void movimiento(int& x, int& y, char tecla) {
	if (tecla == IZQUIERDA && x > 0) x--;
	if (tecla == DERECHA && x < 37) x++;
	if (tecla == ARRIBA && y > 0) y--;
	if (tecla == ABAJO && y < 19) y++;
}
struct Player {
	int identificador;
	int recorrido;
	int y;
	int x;
	int color;
	bool Salio;
	int peon;
	bool direccion; // no sirve aun

	void mover(char tecla) {
		tecla = _getch();
		if (kbhit) {
			gotoxy(x, y); CC(7); cout << " ";
			movimiento(x, y, tecla);
			gotoxy(x, y); CC(color); cout << peon;
		}
	}

};
void mover_1(int& recorrido, int& x, int& y, int dado, int color, int impr, int ganando1) {
	//bien
	color = 18;
	//gotoxy(100, 10); cout << dado;
	char tecla;
	int aux = dado;
	for (int i = 0; i < dado; i++) {
		gotoxy(x, y); Console::BackgroundColor = ConsoleColor::White; cout << " ";
		_sleep(150);
		if (recorrido > 0 && recorrido < 17) tecla = DERECHA;
		if (recorrido >= 17 && recorrido < 26) tecla = ARRIBA;
		if (recorrido >= 26 && recorrido < 28) tecla = DERECHA;
		if (recorrido >= 28 && recorrido < 36) tecla = ABAJO;
		if (recorrido >= 36 && recorrido < 53) tecla = DERECHA;
		if (recorrido >= 53 && recorrido < 55) tecla = ABAJO;
		if (recorrido >= 55 && recorrido < 72) tecla = IZQUIERDA;
		if (recorrido >= 72 && recorrido < 80) tecla = ABAJO;
		if (recorrido >= 80 && recorrido < 82) tecla = IZQUIERDA;
		if (recorrido >= 82 && recorrido < 90) tecla = ARRIBA;
		if (recorrido >= 90 && recorrido < 107) tecla = IZQUIERDA;
		if (recorrido == 107) tecla = ARRIBA;
		if (recorrido > 107 && recorrido < 125) {
			gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Blue; cout << " ";
			tecla = DERECHA;
		}
		movimiento(x, y, tecla);
		gotoxy(x, y); CC(color); cout << impr;
		recorrido++;
		aux--;
		if (x == 18 && y == 9) { ganando1++; }
		if (recorrido > 125) {
			//gotoxy(100, 20); cout << recorrido;
			for (int i = 0; i < aux; i++)
			{
				gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Blue; cout << " ";
				_sleep(150);
				tecla = IZQUIERDA;
				movimiento(x, y, tecla);
				gotoxy(x, y); CC(color); cout << impr;
				recorrido--;
			}
			break; //posicionfinal es 126
		}
	}
}
void mover_2(int& recorrido, int& x, int& y, int dado, int color, int impr, int ganando2) {
	//gotoxy(100, 10); cout << dado;
	char tecla;
	int aux = dado;
	for (int i = 0; i < dado; i++) {
		gotoxy(x, y); Console::BackgroundColor = ConsoleColor::White; cout << " ";
		_sleep(150);
		if (recorrido > 0 && recorrido < 8) tecla = ABAJO;
		if (recorrido >= 8 && recorrido < 25) tecla = DERECHA;
		if (recorrido >= 25 && recorrido < 27) tecla = ABAJO;
		if (recorrido >= 27 && recorrido < 44) tecla = IZQUIERDA;
		if (recorrido >= 44 && recorrido < 52) tecla = ABAJO;
		if (recorrido >= 52 && recorrido < 54) tecla = IZQUIERDA;
		if (recorrido >= 54 && recorrido < 62) tecla = ARRIBA;
		if (recorrido >= 62 && recorrido < 80) tecla = IZQUIERDA;
		if (recorrido >= 80 && recorrido < 82) tecla = ARRIBA;
		if (recorrido >= 82 && recorrido < 99) tecla = DERECHA;
		if (recorrido >= 99 && recorrido < 107) tecla = ARRIBA;
		if (recorrido == 107) tecla = DERECHA;
		if (recorrido > 107 && recorrido < 116) {
			gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Red; cout << " ";
			tecla = ABAJO;
		}
		movimiento(x, y, tecla);
		gotoxy(x, y); CC(color); cout << impr;
		recorrido++;
		aux--;
		if (x == 18 && y == 9) { ganando2++; }
		if (recorrido > 116) {
			//gotoxy(100, 20); cout << recorrido;
			for (int i = 0; i < aux; i++)
			{
				gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Red; cout << " ";
				_sleep(150);
				tecla = ARRIBA;
				movimiento(x, y, tecla);
				gotoxy(x, y); CC(color); cout << impr;
				recorrido--;
			}
			break; //posicion final es 116 (confirmar)
		}
	}
}
void mover_3(int& recorrido, int& x, int& y, int dado, int color, int impr, int ganando3) {
	//bien
	//gotoxy(100, 10); cout << dado;
	char tecla;
	int aux = dado;
	for (int i = 0; i < dado; i++) {
		gotoxy(x, y); Console::BackgroundColor = ConsoleColor::White; cout << " ";
		_sleep(150);
		if (recorrido > 0 && recorrido < 8) tecla = ARRIBA;
		if (recorrido >= 8 && recorrido < 25) tecla = IZQUIERDA;
		if (recorrido >= 25 && recorrido < 27) tecla = ARRIBA;
		if (recorrido >= 27 && recorrido < 44) tecla = DERECHA;
		if (recorrido >= 44 && recorrido < 52) tecla = ARRIBA;
		if (recorrido >= 52 && recorrido < 54) tecla = DERECHA;
		if (recorrido >= 54 && recorrido < 62) tecla = ABAJO;
		if (recorrido >= 62 && recorrido < 79) tecla = DERECHA;
		if (recorrido >= 79 && recorrido < 81) tecla = ABAJO;
		if (recorrido >= 81 && recorrido < 98) tecla = IZQUIERDA;
		if (recorrido >= 98 && recorrido < 106) tecla = ABAJO;
		if (recorrido == 106) tecla = IZQUIERDA;
		if (recorrido > 106 && recorrido < 116) {
			gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Magenta; cout << " ";
			tecla = ARRIBA;
		}
		movimiento(x, y, tecla);
		gotoxy(x, y); CC(color); cout << impr;
		recorrido++;
		aux--;
		if (x == 18 && y == 9) { ganando3++; }
		if (recorrido > 115) {
			//gotoxy(100, 20); cout << recorrido;
			for (int i = 0; i < aux; i++)
			{
				gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Magenta; cout << " ";
				_sleep(150);
				tecla = ABAJO;
				movimiento(x, y, tecla);
				gotoxy(x, y); CC(color); cout << impr;
				recorrido--;
			}
			break; //posicion final es 116 (confirmar)
		}
	}
}
void mover_4(int& recorrido, int& x, int& y, int dado, int color, int impr, int ganando4) {
	//bien
	//gotoxy(100, 10); cout << dado;
	char tecla;
	int aux = dado;
	for (int i = 0; i < dado; i++)
	{
		gotoxy(x, y); Console::BackgroundColor = ConsoleColor::White; cout << " ";
		_sleep(150);
		if (recorrido > 0 && recorrido < 17) tecla = IZQUIERDA;
		if (recorrido >= 17 && recorrido < 25) tecla = ABAJO;
		if (recorrido >= 25 && recorrido < 27) tecla = IZQUIERDA;
		if (recorrido >= 27 && recorrido < 35) tecla = ARRIBA;
		if (recorrido >= 35 && recorrido < 52) tecla = IZQUIERDA;
		if (recorrido >= 53 && recorrido < 55) tecla = ARRIBA;
		if (recorrido >= 55 && recorrido < 72) tecla = DERECHA;
		if (recorrido >= 72 && recorrido < 80) tecla = ARRIBA;
		if (recorrido >= 80 && recorrido < 82) tecla = DERECHA;
		if (recorrido >= 82 && recorrido < 90) tecla = ABAJO;
		if (recorrido >= 90 && recorrido < 107) tecla = DERECHA;
		if (recorrido == 107) tecla = ABAJO;
		if (recorrido > 107 && recorrido < 126) {
			gotoxy(x, y); Console::BackgroundColor = ConsoleColor::Yellow; cout << " ";
			tecla = IZQUIERDA;
		}
		movimiento(x, y, tecla);
		gotoxy(x, y); CC(color); cout << impr;
		recorrido++;
		aux--;
		if (x == 18 && y == 9) { ganando4++; }
		if (recorrido > 125) {
			//gotoxy(100, 20); cout << recorrido;
			for (int i = 0; i < aux; i++)
			{
				gotoxy(x, y); Console::BackgroundColor = ConsoleColor::DarkYellow; cout << " ";
				_sleep(150);
				tecla = DERECHA;
				movimiento(x, y, tecla);
				gotoxy(x, y); CC(color); cout << impr;
				recorrido--;
			}
			break; // posicion final es 127 (confirmar)
		}
	}
}

int main() {
	srand(time(NULL));
	Player** J1 = new Player * [4];
	int sacar = 1;
	int* x = new int[4];
	int* y = new int[4];
	x[0] = 1;
	x[1] = 19; //posiciones para los 4 jugadores en x
	x[2] = 17;
	x[3] = 35;

	y[0] = 8;
	y[1] = 1; //posiciones para los 4 jugadores en y
	y[2] = 17;
	y[3] = 10;
	int ganando1 = 0, ganando2 = 0, ganando3 = 0, ganando4 = 0;
	int opcion = 0;
	int opcion_D6 = 0;
	char dado;
	int num_Player = 0;
	int Val_Dado = 0;
	logo();
	system("cls");
	instrucciones();
	system("cls");
	string* nombre;
	num_Player = num_jugadores();
	Console::SetCursorPosition(58, 13);
	nombre = new string[num_Player];
	for (int i = 0; i < num_Player; i++) {
		Console::SetCursorPosition(44, 15);
		cout << "nombre de jugador " << i + 1 << ": "; cin >> nombre[i];
		Console::SetCursorPosition(44, 15);
		cout << "                                             ";
	}
	system("cls");
	for (int i = 0; i < num_Player; i++) {
		J1[i] = new Player[4];
	}
	esperando();
	system("cls");
	mapa();
	if (num_Player == 2) fichas_iniciales2();
	if (num_Player == 4) fichas_iniciales4();
	adornos();
	for (int i = 0; i < num_Player; i++) {
		for (int j = 0; j < 4; j++) {
			J1[i][j].color = 18 * (i + 3);
			J1[i][j].x = x[i];
			J1[i][j].y = y[i];
			J1[i][j].identificador = i + 1;
			J1[i][j].recorrido = 0;
			J1[i][j].Salio = false;
			J1[i][j].peon = j + 1;
			J1[i][j].direccion = true; //no sirve aun
		}
	}

	int contador = 0;

	while (1) {
		//do {
		Val_Dado = 1 + rand() % (7 - 1);
		Console::SetCursorPosition(104, 6);
		cout << Val_Dado << "\n";
		Console::SetCursorPosition(57, 4);
		cout << "Turno de " << nombre[contador] << endl;

		if (Val_Dado == 6) {
			Console::SetCursorPosition(57, 8);
			cout << "1. Sacar peon." << endl;
			Console::SetCursorPosition(57, 9);
			cout << "2. Mover peon." << endl;
			Console::SetCursorPosition(57, 11);
			cout << "elegir: "; cin >> opcion_D6;
			Console::SetCursorPosition(57, 11); cout << "           ";
		}
		//} while (Val_Dado == 6);
		if (opcion_D6 == 1) {
			for (int i = 0; i < 4; i++) {
				if (J1[contador][i].Salio == false) {
					J1[contador][i].Salio = true;
					break;
				}
			}
		}

		else if (opcion_D6 != 1) {

			for (int i = 0; i < 4; i++) {
				gotoxy(54, i + 14); if (J1[contador][i].Salio == true) cout << " Peon " << J1[contador][i].peon << endl;
				gotoxy(54, i + 14); if (J1[contador][i].Salio == false) cout << "        " << endl;
			}

			do {
				Console::SetCursorPosition(57, 22);
				cout << "Elegir : "; cin >> opcion;
				Console::SetCursorPosition(57, 22); cout << "           ";
			} while (!(opcion > 0 && opcion < 5));
			opcion--;

			if (J1[contador][opcion].Salio == true && J1[contador][opcion].identificador == 1)
				mover_1(J1[contador][opcion].recorrido, J1[contador][opcion].x, J1[contador][opcion].y, Val_Dado, J1[contador][opcion].color, J1[contador][opcion].identificador, ganando1);
			if (J1[contador][opcion].Salio == true && J1[contador][opcion].identificador == 2)
				mover_2(J1[contador][opcion].recorrido, J1[contador][opcion].x, J1[contador][opcion].y, Val_Dado, J1[contador][opcion].color, J1[contador][opcion].identificador, ganando2);
			if (J1[contador][opcion].Salio == true && J1[contador][opcion].identificador == 3)
				mover_3(J1[contador][opcion].recorrido, J1[contador][opcion].x, J1[contador][opcion].y, Val_Dado, J1[contador][opcion].color, J1[contador][opcion].identificador, ganando3);
			if (J1[contador][opcion].Salio == true && J1[contador][opcion].identificador == 4)
				mover_4(J1[contador][opcion].recorrido, J1[contador][opcion].x, J1[contador][opcion].y, Val_Dado, J1[contador][opcion].color, J1[contador][opcion].identificador, ganando4);

			for (int i = 0; i < num_Player; i++) {
				for (int j = 0; j < 4; j++) {
					if (J1[i][j].Salio == true) {
						bool Sold = true;
						if (i == contador && j == opcion) Sold = false;
						if (J1[i][j].x == J1[contador][opcion].x && J1[i][j].y == J1[contador][opcion].y && Sold == true) {
							J1[i][j].Salio = false;
							J1[i][j].x = x[i];
							J1[i][j].y = y[i];
							J1[i][j].recorrido = 0;
						}
					}
				}
			}

			for (int i = 0; i < num_Player; i++) {
				for (int j = 0; j < 4; j++) {
					if (J1[i][j].Salio == true) {
						if (J1[i][j].Salio == true) { CC(J1[i][j].color); gotoxy(J1[i][j].x, J1[i][j].y); cout << J1[i][j].peon; }
					}
				}
			}
		}
		opcion_D6 = 0;
		contador++;
		if (contador >= num_Player) contador = 0;
		if (ganando1 == 4) { system("cls"); gotoxy(40, 15); cout << "Gano el jugador 1!"; exit(0); }
		if (ganando2 == 4) { system("cls"); gotoxy(40, 15); cout << "Gano el jugador 2!"; exit(0); }
		if (ganando3 == 4) { system("cls"); gotoxy(40, 15); cout << "Gano el jugador 3!"; exit(0); }
		if (ganando4 == 4) { system("cls"); gotoxy(40, 15); cout << "Gano el jugador 4!"; exit(0); }
	}
	//Idea para que un jugador gane:
	// declarar variables para cada jugador en el main y pasarlos como paramentros: int ganando1=0,ganando2=0,ganando3=0,ganando4=0; 
	//hacer un if en cada funcion mover que diga if(x==18 && y==9) ganando(numerodejugador)++;
	//al final del while poner varios if que digan: if(ganando(numerodejugador))==4) exit(0); 
	// y un system ("cls") para que luego se muestre "Gano el jugador (numerodejugador)";
	_getch();
	return 0;
}
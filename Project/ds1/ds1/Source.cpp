#include <iostream>
#include <string>
# include <cmath>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <time.h>
#include <cstdlib>

using namespace std;

bool win(double a[][10]) {
	bool p = true;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (a[i][j] == 1)
				p = false;
	return p;
}
int main() {
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //Color for text
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE); //Color for text

	double a[10][10] = { 0 }, pcn[10][10] = { 0 }, pc[10][10] = { 0 }; //rs=random for start
	int x, y, i, j, t = 1, f = 1, m = 1, n = 1, rfs, direction;
	string name;
	bool check = false, wina = false, winpc = false, check1 = false;

	SetConsoleTextAttribute(hstdout, 0x09); //Color for text
	cout << "<<<<<<<<<< Welcome to the Battleship game >>>>>>>>>>\n\n ";

	SetConsoleTextAttribute(hstdout, 0x0a); //Color for text green
	cout << "whats your name? ";

	SetConsoleTextAttribute(hstdout, 0x0f); //Color for text white
	cin >> name;
	cout << endl;
	//gereftane karbar tamam shod

	unsigned seed = time(NULL);
	srand(seed);
	rfs = rand() % 2 + 1;
	//random

	pc[0][2] = pc[0][4] = pc[0][5] = pc[0][7] = pc[3][1] = pc[3][2] = pc[3][3] = pc[3][4] = pc[2][9] = pc[3][9] =
		pc[5][7] = pc[6][7] = pc[7][0] = pc[7][2] = pc[8][2] = pc[9][2] = pc[9][5] = pc[9][6] = pc[9][7] = pc[8][9] = 1;//kashti haye pc

	pc[0][1] = pc[0][3] = pc[0][6] = pc[0][8] = pc[1][1] = pc[1][2] = pc[1][3] = pc[1][4] = pc[1][5] = pc[1][6] =
		pc[1][7] = pc[1][8] = pc[1][9] = pc[2][0] = pc[2][1] = pc[2][2] = pc[2][3] = pc[2][4] = pc[2][5] = pc[2][8] =
		pc[3][0] = pc[3][5] = pc[3][8] = pc[4][0] = pc[4][1] = pc[4][2] = pc[4][3] = pc[4][4] = pc[4][5] = pc[4][6] =
		pc[4][7] = pc[4][8] = pc[4][9] = pc[5][6] = pc[5][8] = pc[6][0] = pc[6][1] = pc[6][2] = pc[6][3] = pc[6][6] =
		pc[6][8] = pc[7][1] = pc[7][3] = pc[7][6] = pc[7][7] = pc[7][8] = pc[7][9] = pc[8][1] = pc[8][3] =
		pc[8][4] = pc[8][5] = pc[8][6] = pc[8][7] = pc[8][8] = pc[9][1] = pc[9][3] = pc[9][4] = pc[9][8] =
		pc[9][9] = 2;//havalie kashti haye pc


					 /*a[0][2] = a[0][4] = a[0][5] = a[0][7] = a[3][1] = a[3][2] = a[3][3] = a[3][4] = a[2][9] = a[3][9] =
					 a[5][7] = a[6][7] = a[7][0] = a[7][2] = a[8][2] = a[9][2] = a[9][5] = a[9][6] = a[9][7] = a[8][9] = 1;//kashti haye karabar

					 a[0][1] = a[0][3] = a[0][6] = a[0][8] = a[1][1] = a[1][2] = a[1][3] = a[1][4] = a[1][5] = a[1][6] =
					 a[1][7] = a[1][8] = a[1][9] = a[2][0] = a[2][1] = a[2][2] = a[2][3] = a[2][4] = a[2][5] = a[2][8] =
					 a[3][0] = a[3][5] = a[3][8] = a[4][0] = a[4][1] = a[4][2] = a[4][3] = a[4][4] = a[4][5] = a[4][6] =
					 a[4][7] = a[4][8] = a[4][9] = a[5][6] = a[5][8] = a[6][0] = a[6][1] = a[6][2] = a[6][3] = a[6][6] =
					 a[6][8] = a[7][1] = a[7][3] = a[7][6] = a[7][7] = a[7][8] = a[7][9] = a[8][1] = a[8][3] =
					 a[8][4] = a[8][5] = a[8][6] = a[8][7] = a[8][8] = a[9][1] = a[9][3] = a[9][4] = a[9][8] =
					 a[9][9] = 2;//havali kashti haye karabar*/

					 // for baraye 444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
	for (; t <= 1; ) {
		//system("color f5");//cccccccccccccccccccccccccc
		SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text
		cout << "whats your 4s position?\n";
		SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text
		cin >> i >> j;

		if (i < 10 && i >= 0 && j < 10 && j >= 0 && a[i][j] == 0) {
			SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text
			cout << "whats the navis direction?\n";
			cout << "for up : 1\nfor right : 2\nfor down : 3\nfor left : 4\n";
			SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text
			cin >> direction;
			switch (direction) {
			case 1: if (i - 3 >= 0 && a[i - 1][j] == 0 && a[i - 2][j] == 0 && a[i - 3][j] == 0) {
				//gozashtane 1	4
				a[i - 1][j] = a[i - 2][j] = a[i - 3][j] = a[i][j] = 1;

				//gozashtane 2  4
				for (int k = i; k >= i - 3; k--) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;
				} //for gozashtane 2  4

				  //4 ta if gooshe case 1  4
				if (i - 4 >= 0 && j - 1 >= 0)
					a[i - 4][j - 1] = 2;
				if (i - 4 >= 0 && j + 1 <= 9)
					a[i - 4][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;

				if (i - 4 >= 0)
					a[i - 4][j] = 2;
				if (i + 1 <= 9)
					a[i + 1][j] = 2;


				t++;
				break;
			}//if dakhele case 1  4
					else {
						SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
						cout << "The ship is not correctiraction ghalate dobare vared konid\a\n" << endl;
						break;
						//he ship is not correct
					}//end else   case 1   4


			case 2:if (j + 2 >= 0 && a[i][j + 1] == 0 && a[i][j + 2] == 0 && a[i][j + 3] == 0) {
				//gozashtane 1 case 2  4
				a[i][j + 1] = a[i][j + 2] = a[i][j + 3] = a[i][j] = 1;

				//gozashtane 2  case 2  4
				for (int k = j; k <= j + 3; k++) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for gozashtane 2   case 2  4

				if (j - 1 >= 0)
					a[i][j - 1] = 2;
				if (j + 4 <= 9)
					a[i][j + 4] = 2;
				//4 ta if gooshe  case 2  4
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 4 <= 9)
					a[i - 1][j + 4] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 4 <= 9)
					a[i + 1][j + 4] = 2;
				t++;
				break;
			}//if dakhele case 2-4
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }// end else case 2  4

					//end case 2  4

			case 3:if (i + 3 >= 0 && a[i + 1][j] == 0 && a[i + 2][j] == 0 && a[i + 3][j] == 0) {
				//gozashtane 1
				a[i + 1][j] = a[i + 2][j] = a[i + 3][j] = a[i][j] = 1;

				//gozashtane 2
				for (int k = i; k <= i + 3; k++) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for
				if (i + 4 <= 9)
					a[i + 4][j] = 2;
				if (i - 1 >= 0)
					a[i - 1][j] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 4 <= 9 && j - 1 >= 0)
					a[i + 4][j - 1] = 2;
				if (i + 4 <= 9 && j + 1 <= 9)
					a[i + 4][j + 1] = 2;
				t++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			case 4:if (j - 3 >= 0 && a[i][j - 1] == 0 && a[i][j - 2] == 0 && a[i][j - 1] == 0) {
				/*gozashtane 1*/	a[i][j - 3] = a[i][j - 2] = a[i][j - 1] = a[i][j] = 1;

				//gozashtane 2
				for (int k = j; k >= j - 3; k--) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for
				if (j - 4 >= 0)
					a[i][j - 4] = 2;
				if (j + 1 <= 9)
					a[i][j + 1] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 4 >= 0)
					a[i - 1][j - 4] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 4 >= 0)
					a[i + 1][j - 4] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				t++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			}// switch


		}
		else {
			SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
			cout << "\a";
			cout << "ghalat dadi\n";
		}
		SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text yellow
		for (int k = 0; k < 10; k++) {
			for (int o = 0; o < 10; o++)
				cout << a[k][o];
			cout << endl;
		}
	}//// for baraye 4



	 // for baraye 3 33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
	for (; f <= 2; ) {
		SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text green
		cout << "whats your 3s position?\n";
		SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text white
		cin >> i >> j;

		if (i < 10 && i >= 0 && j < 10 && j >= 0 && a[i][j] == 0) {
			SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text green
			cout << "whats the navis direction?\n";
			cout << "for up : 1\nfor right : 2\nfor down : 3\nfor left : 4\n";
			SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text
			cin >> direction;
			switch (direction) {
			case 1: if (i - 2 >= 0 && a[i - 1][j] == 0 && a[i - 2][j] == 0) {
				//gozashtane 1
				a[i - 1][j] = a[i - 2][j] = a[i][j] = 1;

				//gozashtane 2
				for (int k = i; k >= i - 2; k--) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for gozashtane 2
				if (i - 3 >= 0)
					a[i - 3][j] = 2;
				if (i + 1 <= 9)
					a[i + 1][j] = 2;
				//4 ta if gooshe
				if (i - 3 >= 0 && j - 1 >= 0)
					a[i - 3][j - 1] = 2;
				if (i - 3 >= 0 && j + 1 <= 9)
					a[i - 3][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				f++;
				break;
			}//if dakhele case
					else {
						SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
						cout << "diraction ghalate dobare vared konid\n" << endl;
						cout << "\a";
						break;

					}//end else case 1

			case 2:if (j + 2 >= 0 && a[i][j + 1] == 0 && a[i][j + 2] == 0) {
				/*gozashtane 1*/
				a[i][j + 1] = a[i][j + 2] = a[i][j] = 1;

				//gozashtane 2
				for (int k = j; k <= j + 2; k++) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for

				if (j - 1 >= 0)
					a[i][j - 1] = 2;
				if (j + 3 <= 9)
					a[i][j + 3] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 3 <= 9)
					a[i - 1][j + 3] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 3 <= 9)
					a[i + 1][j + 3] = 2;
				f++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			case 3:if (i + 2 >= 0 && a[i + 1][j] == 0 && a[i + 2][j] == 0) {
				/*gozashtane 1*/	a[i + 1][j] = a[i + 2][j] = a[i][j] = 1;

				//gozashtane 2
				for (int k = i; k <= i + 2; k++) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for
				if (i + 3 <= 9)
					a[i + 3][j] = 2;
				if (i - 1 >= 0)
					a[i - 1][j] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 3 <= 9 && j - 1 >= 0)
					a[i + 3][j - 1] = 2;
				if (i + 3 <= 9 && j + 1 <= 9)
					a[i + 3][j + 1] = 2;
				f++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			case 4:if (j - 2 >= 0 && a[i][j - 2] == 0 && a[i][j - 1] == 0) {
				/*gozashtane 1*/	a[i][j - 2] = a[i][j - 1] = a[i][j] = 1;

				//gozashtane 2
				for (int k = j; k >= j - 2; k--) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for
				if (j - 3 >= 0)
					a[i][j - 3] = 2;
				if (j + 1 <= 9)
					a[i][j + 1] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 3 >= 0)
					a[i - 1][j - 3] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 3 >= 0)
					a[i + 1][j - 3] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				f++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			}// switch
		}//if1
		else {
			SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
			cout << "mahal ghalat dadi\n";
			cout << "\a";

		}//elce if 1
		SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text yellow
		for (int k = 0; k < 10; k++) {
			for (int o = 0; o < 10; o++)
				cout << a[k][o];
			cout << endl;
		}
	}//for 3

	 //for bara 2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
	for (; m <= 3; ) {
		SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text green
		cout << "whats your 2s position?\n";
		SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text white
		cin >> i >> j;

		if (i < 10 && i >= 0 && j < 10 && j >= 0 && a[i][j] == 0) {
			SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text green
			cout << "whats the navis direction?\n";
			cout << "for up : 1\nfor right : 2\nfor down : 3\nfor left : 4\n";
			SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text
			cin >> direction;

			switch (direction) {
			case 1: if (i - 2 >= 0 && a[i - 2][j] == 0) {
				//gozashtane 1
				a[i - 2][j] = a[i][j] = a[i - 1][j] = 1;

				//gozashtane 2
				for (int k = i; k >= i - 1; k--) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for gozashtane 2
				if (i - 2 >= 0)
					a[i - 2][j] = 2;
				if (i + 1 <= 9)
					a[i + 1][j] = 2;
				//4 ta if gooshe
				if (i - 2 >= 0 && j - 1 >= 0)
					a[i - 2][j - 1] = 2;
				if (i - 2 >= 0 && j + 1 <= 9)
					a[i - 2][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				m++;
				break;
			}//if dakhele case
					else {
						SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
						cout << "diraction 2 ro ghalate dobare vared konid\n" << endl;
						cout << "\a";
						break;

					}//end else case 1

			case 2:if (j + 2 >= 0 && a[i][j + 2] == 0 && a[i][j + 1] == 0) {
				//gozashtane 1
				a[i][j + 1] = a[i][j] = a[i][j + 2] = 1;

				//gozashtane 2
				for (int k = j; k <= j + 1; k++) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for

				if (j - 1 >= 0)
					a[i][j - 1] = 2;
				if (j + 2 <= 9)
					a[i][j + 2] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 2 <= 9)
					a[i - 1][j + 2] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 2 <= 9)
					a[i + 1][j + 2] = 2;
				m++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction 2 ro ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }

			case 3:if (i + 2 >= 0 && a[i + 1][j] == 0 && a[i + 2][j] == 0) {
				//gozashtane 1
				a[i + 1][j] = a[i][j] = a[i + 2][j] = 1;

				//gozashtane 2
				for (int k = i; k <= i + 1; k++) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for
				if (i + 2 <= 9)
					a[i + 2][j] = 2;
				if (i - 1 >= 0)
					a[i - 1][j] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 2 <= 9 && j - 1 >= 0)
					a[i + 2][j - 1] = 2;
				if (i + 2 <= 9 && j + 1 <= 9)
					a[i + 2][j + 1] = 2;
				m++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction 2 ro ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			case 4:if (j - 2 >= 0 && a[i][j - 1] == 0 && a[i][j - 2] == 0) {
				//gozashtane 1
				a[i][j - 1] = a[i][j] = a[i][j - 2] = 1;

				//gozashtane 2
				for (int k = j; k >= j - 1; k--) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for
				if (j - 2 >= 0)
					a[i][j - 2] = 2;
				if (j + 1 <= 9)
					a[i][j + 1] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 2 >= 0)
					a[i - 1][j - 2] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 2 >= 0)
					a[i + 1][j - 2] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				m++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction 2ro ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			}// switch
		}//if1
		else {
			SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
			cout << "mahal ghalat dadi\n";
			cout << "\a";

		}//elce if 1
		SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text yellow
		for (int k = 0; k < 10; k++) {
			for (int o = 0; o < 10; o++)
				cout << a[k][o];
			cout << endl;
		}

	}//for 2

	 //for bara 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

	for (; n <= 4; ) {
		SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text green
		cout << "whats your 1s position?\n";
		SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text white
		cin >> i >> j;

		if (i < 10 && i >= 0 && j < 10 && j >= 0 && a[i][j] == 0) {
			SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text green
			cout << "whats the navis direction?\n";
			cout << "for up : 1\nfor right : 2\nfor down : 3\nfor left : 4\n";
			SetConsoleTextAttribute(hstdout, 0x0f);		//Color for text
			cin >> direction;

			switch (direction) {
			case 1: if (i - 1 >= 0 && a[i - 1][j] == 0) {
				//gozashtane 1
				a[i][j] = 1;

				//gozashtane 2
				for (int k = i; k >= i - 1; k--) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for gozashtane 2
				if (i - 1 >= 0)
					a[i - 1][j] = 2;
				if (i + 1 <= 9)
					a[i + 1][j] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				n++;
				break;
			}//if dakhele case
					else {
						SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
						cout << "diraction 1 ro ghalate dobare vared konid\n" << endl;
						cout << "\a";
						break;

					}//end else case 1

			case 2:if (j + 1 >= 0 && a[i][j + 1] == 0) {
				//gozashtane 1
				a[i][j] = 1;

				//gozashtane 2
				for (int k = j; k <= j + 1; k++) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for

				if (j - 1 >= 0)
					a[i][j - 1] = 2;
				if (j + 1 <= 9)
					a[i][j + 1] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				n++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction 1 ro ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }

			case 3:if (i + 2 >= 0 && a[i + 1][j] == 0) {
				//gozashtane 1
				a[i][j] = 1;

				//gozashtane 2
				for (int k = i; k <= i + 1; k++) {
					if (j + 1 <= 9)
						a[k][j + 1] = 2;
					if (j - 1 >= 0)
						a[k][j - 1] = 2;

				} //for
				if (i + 1 <= 9)
					a[i + 1][j] = 2;
				if (i - 1 >= 0)
					a[i - 1][j] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				n++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction 1 ro ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			case 4:if (j - 1 >= 0 && a[i][j - 1] == 0) {
				//gozashtane 1
				a[i][j] = 1;

				//gozashtane 2
				for (int k = j; k >= j - 1; k--) {
					if (i + 1 <= 9)
						a[i + 1][k] = 2;
					if (i - 1 >= 0)
						a[i - 1][k] = 2;

				} //for
				if (j - 2 >= 0)
					a[i][j - 1] = 2;
				if (j + 1 <= 9)
					a[i][j + 1] = 2;
				//4 ta if gooshe
				if (i - 1 >= 0 && j - 1 >= 0)
					a[i - 1][j - 1] = 2;
				if (i - 1 >= 0 && j + 1 <= 9)
					a[i - 1][j + 1] = 2;
				if (i + 1 <= 9 && j - 1 >= 0)
					a[i + 1][j - 1] = 2;
				if (i + 1 <= 9 && j + 1 <= 9)
					a[i + 1][j + 1] = 2;
				n++;
				break;
			}//if dakhele case
				   else {
					   SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
					   cout << "diraction 1ro ghalate dobare vared konid\n" << endl;
					   cout << "\a";
					   break;

				   }
			}// switch
		}//if1
		else {
			SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
			cout << "mahal ghalat dadi\n";


		}//elce if 1
		SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text yellow
		for (int k = 0; k < 10; k++) {
			for (int o = 0; o < 10; o++)
				cout << a[k][o];
			cout << endl;
		}

	}//for 1


	 //gereftane karbar tamam shod
	check1 = 0;

	if (rfs == 1) {
		while (wina == 0 && winpc == 0) {
			SetConsoleTextAttribute(hstdout, 0x0a); //Color for text green
			cout << "its " << name << "`s turn so please fire and give me a position\n";
			check1 = false;//check bordan ro barressi mikonad
						   //while payin baraye shelike karbar
			while (check1 == false) {
				cin >> x >> y;
				//if payin baraye dorost nadadan
				if (pc[x][y] == 8 || pc[x][y] == 9 || pc[x][y] == 7) {//9 zarbe e sahih 8 havali e barkhord 7 zarbe e pooch
					cout << "inja nemitavanid shelik konid va mokhtasate jadid baraye shelik vared konid";
					continue;
				}
				//else yani baraye dorost dadn
				else {
					if (pc[x][y] == 1) {		//zarbe dorost
						pc[x][y] = 9;			// alamat zadan zarbe dorost
						pcn[x][y] = 9;			// alamat zadan zarbe dorost
						if (x + 1 <= 9 && y + 1 <= 9 && pc[x + 1][y + 1] != 7) {// alamat zadan hashie zarbe dorost
							pc[x + 1][y + 1] = 8;
							pcn[x + 1][y + 1] = 8;
						}
						if (x + 1 <= 9 && y - 1 >= 0 && pc[x + 1][y - 1] != 7) {// alamat zadan hashie zarbe dorost
							pc[x + 1][y - 1] = 8;
							pcn[x + 1][y - 1] = 8;
						}
						if (x - 1 >= 0 && y + 1 <= 9 && pc[x - 1][y + 1] != 7) {// alamat zadan hashie zarbe dorost
							pc[x - 1][y + 1] = 8;
							pcn[x - 1][y + 1] = 8;
						}
						if (x - 1 >= 0 && y - 1 >= 0 && pc[x - 1][y - 1] != 7) {// alamat zadan hashie zarbe dorost
							pc[x - 1][y - 1] = 8;
							pcn[x - 1][y - 1] = 8;
						}
						for (int l = 0; l <= 9; l++) {// alamat zadan hashie zarbe dorost
							for (int e = 0; e <= 9; e++)
								cout << pc[l][e];
							cout << endl;
						}
						// continue payin baraye jayeze ast
						wina = win(pc);
						if (wina != true)
							cout << "\nshelik mavafagh boode pas ye bar dg shelik kn\n";
						cout << endl;
						for (int l = 0; l <= 9; l++) {			//namayeshe safhe
							for (int e = 0; e <= 9; e++)
								cout << pcn[l][e];
							cout << endl;
						}
						wina = win(pc);
						if (wina == true) {
							cout << "shoma bordid";
							system("pause");
						}
						continue;
					}
					if (pc[x][y] == 0 || pc[x][y] == 2) {//zarbe ghalat
						pc[x][y] = 7;			// alamat zadan zarbe ghalat
						pcn[x][y] = 7;			// alamat zadan zarbe ghalat
						check1 = true;
						cout << endl;
						for (int l = 0; l <= 9; l++) {			//namayeshe safhe
							for (int e = 0; e <= 9; e++)
								cout << pcn[l][e];
							cout << endl;
						}
						continue;
					}
				}//else
			}//while voroudi karbar
			wina = win(pc);
			if (wina == true)
				continue;
			check1 = false;
			cout << "hala computer vared mikonad\n";
			//hala pc
			while (check1 == false) {
				unsigned seed = time(NULL);
				srand(seed);			//entekhabe shansi pc
				x = rand() % 10;			//entekhabe shansi pc
				y = rand() % 10;			//entekhabe shansi pc
				if (a[x][y] == 8 || a[x][y] == 9 || a[x][y] == 7) {
					continue;
				}
				else {
					if (a[x][y] == 1) {			// zarbe dorost
						a[x][y] = 9;			// alamat zadan zarbe dorost
						if (x + 1 <= 9 && y + 1 <= 9) {		// alamat zadan hashie zarbe dorost
							a[x + 1][y + 1] = 8;
						}
						if (x + 1 <= 9 && y - 1 >= 0) {		// alamat zadan hashie zarbe dorost
							a[x + 1][y - 1] = 8;
						}
						if (x - 1 >= 0 && y + 1 <= 9) {		// alamat zadan hashie zarbe dorost
							a[x - 1][y + 1] = 8;
						}
						if (x - 1 >= 0 && y - 1 >= 0) {		// alamat zadan hashie zarbe dorost
							a[x - 1][y - 1] = 8;
						}
						cout << endl;
						for (int l = 0; l <= 9; l++) {		//namayeshe safhe
							for (int e = 0; e <= 9; e++)
								cout << a[l][e];
							cout << endl;
						}
						continue;
					}
					if (a[x][y] == 0 || a[x][y] == 2) {			//zarbe ghalat
						a[x][y] = 7;			// alamat zadan zarbe ghalat
						check1 = true;
						cout << endl;
						for (int l = 0; l <= 9; l++) {			//namayeshe safhe
							for (int e = 0; e <= 9; e++)
								cout << a[l][e];
							cout << endl;
						}
						continue;
					}
				}// else
			}//while pc
			wina = win(pc);
			if (wina == true)
				continue;
			check1 = false;
			winpc = win(a);
			if (winpc == true)
				continue;
		}//while avvali
		if (winpc == 1)
			cout << "pc won";
		else if (wina == 1)
			cout << "shoma bordid";
	}//if rfs==1

	if (rfs == 2) {
		while (wina == 0 && winpc == 0) {
			check1 = false;
			SetConsoleTextAttribute(hstdout, 0x0f); //Color for text 
			cout << "hala computer vared mikonad\n";
			//hala pc
			while (check1 == false) {
				unsigned seed = time(NULL);
				//entekhabe shansi pc
				srand(seed);
				x = rand() % 10;
				y = rand() % 10;
				if (a[x][y] == 8 || a[x][y] == 9 || a[x][y] == 7) {
					continue;
				}
				else {
					if (a[x][y] == 1) {		// zarbe dorost
						a[x][y] = 9;		// alamat zadan zarbe dorost
						if (x + 1 <= 9 && y + 1 <= 9) {		// alamat zadan zarbe dorost
							a[x + 1][y + 1] = 8;
						}
						if (x + 1 <= 9 && y - 1 >= 0) {		// alamat zadan zarbe dorost
							a[x + 1][y - 1] = 8;
						}
						if (x - 1 >= 0 && y + 1 <= 9) {		// alamat zadan zarbe dorost
							a[x - 1][y + 1] = 8;
						}
						if (x - 1 >= 0 && y - 1 >= 0) {		// alamat zadan zarbe dorost
							a[x - 1][y - 1] = 8;
						}
						cout << endl;
						for (int l = 0; l <= 9; l++) {		//namayeshe safhe
							for (int e = 0; e <= 9; e++)
								cout << a[l][e] << " ";
							cout << endl;
						}
						continue;
					}
					if (a[x][y] == 0 || a[x][y] == 2) {
						a[x][y] = 7;
						check1 = true;
						cout << endl;
						for (int l = 0; l <= 9; l++) {		//namayeshe safhe
							for (int e = 0; e <= 9; e++) {
								cout << a[l][e] << " ";
							}
							cout << endl;
						}
						continue;
					}
				}// else
			}//while pc
			check1 = false;
			winpc = win(a);
			if (winpc == true)
				continue;
			wina = win(pc);
			if (wina != true) {
				SetConsoleTextAttribute(hstdout, 0x0f); //Color for text 
				cout << "its " << name << "`s turn so please fire and give me a position\n";
			}
			else
			{
				SetConsoleTextAttribute(hstdout, 0x09); //Color for text green
				cout << "shoma bordid";
			}
			//while payin baraye shelike karbar
			while (check1 == false) {
				cin >> x >> y;
				//if payin baraye dorost nadadan
				if (pc[x][y] == 8 || pc[x][y] == 9 || pc[x][y] == 7) {//9 zarbe e sahih 8 havali e barkhord 7 zarbe e pooch
					SetConsoleTextAttribute(hstdout, 0x0c); //Color for text
					cout << "inja nemitavanid shelik konid va mokhtasate jadid baraye shelik vared konid";
					continue;
				}
				//else yani baraye dorost dadn
				else {
					if (pc[x][y] == 1) {
						pc[x][y] = 9;
						pcn[x][y] = 9;
						if (x + 1 <= 9 && y + 1 <= 9 && pc[x + 1][y + 1] != 7) {// alamat zadan zarbe dorost
							pc[x + 1][y + 1] = 8;
							pcn[x + 1][y + 1] = 8;
						}
						if (x + 1 <= 9 && y - 1 >= 0 && pc[x + 1][y - 1] != 7) {// alamat zadan zarbe dorost
							pc[x + 1][y - 1] = 8;
							pcn[x + 1][y - 1] = 8;
						}
						if (x - 1 >= 0 && y + 1 <= 9 && pc[x - 1][y + 1] != 7) {// alamat zadan zarbe dorost
							pc[x - 1][y + 1] = 8;
							pcn[x - 1][y + 1] = 8;
						}
						if (x - 1 >= 0 && y - 1 >= 0 && pc[x - 1][y - 1] != 7) {// alamat zadan zarbe dorost
							pc[x - 1][y - 1] = 8;
							pcn[x - 1][y - 1] = 8;
						}
						for (int l = 0; l <= 9; l++) {		//namayeshe safhe
							for (int e = 0; e <= 9; e++) {
								if (pcn[l][e] == 1) {
									SetConsoleTextAttribute(hstdout, 0xa2); //Color 
									cout << char(219) << char(255);
								}
								if (pcn[l][e] == 0) {
									SetConsoleTextAttribute(hstdout, 0x19); //Color 
									cout << char(247) << char(255);
								}
								if (pcn[l][e] == 7) {
									SetConsoleTextAttribute(hstdout, 0xc4); //Color 
									cout << char(233) << char(255);
								}
								if (pcn[l][e] == 9) {
									SetConsoleTextAttribute(hstdout, 0xa2); //Color 
									cout << char(42) << char(255);
								}
								if (pcn[l][e] == 8) {
									SetConsoleTextAttribute(hstdout, 0xe0); //Color 
									cout << char(176) << char(255);
								}
							}
							cout << endl;
						}
						// continue payin baraye jayeze ast
						wina = win(pc);
						if (wina != true && winpc != true) {
							SetConsoleTextAttribute(hstdout, 0x0a); //Color for text green
							cout << "\nshelik mavafagh boode pas ye bar dg shelik kn\n";
						}
						else {
							if (wina == true) cout << "shoma bordid";
							if (winpc == true) cout << "pc bord";
							system("pause");
						}
						cout << endl;
						for (int l = 0; l <= 9; l++) {		//namayeshe safhe
							for (int e = 0; e <= 9; e++) {
								if (pcn[l][e] == 1) {
									SetConsoleTextAttribute(hstdout, 0xa2); //Color 
									cout << char(219) << char(255);
								}
								if (pcn[l][e] == 0) {
									SetConsoleTextAttribute(hstdout, 0x19); //Color 
									cout << char(247) << char(255);
								}
								if (pcn[l][e] == 7) {
									SetConsoleTextAttribute(hstdout, 0xc4); //Color 
									cout << char(233) << char(255);
								}
								if (pcn[l][e] == 9) {
									SetConsoleTextAttribute(hstdout, 0xa2); //Color 
									cout << char(42) << char(255);
								}
								if (pcn[l][e] == 8) {
									SetConsoleTextAttribute(hstdout, 0xe0); //Color 
									cout << char(176) << char(255);

								}
							}
							cout << endl;
						}
						continue;
					}
					if (pc[x][y] == 0 || pc[x][y] == 2) {
						pc[x][y] = 7;
						pcn[x][y] = 7;
						check1 = true;
						cout << endl;
						for (int l = 0; l <= 9; l++) {		//namayeshe safhe
							for (int e = 0; e <= 9; e++) {
								if (pcn[l][e] == 1) {
									SetConsoleTextAttribute(hstdout, 0xa2); //Color 
									cout << char(219) << char(255);
								}
								if (pcn[l][e] == 0) {
									SetConsoleTextAttribute(hstdout, 0x19); //Color 
									cout << char(247) << char(255);
								}
								if (pcn[l][e] == 7) {
									SetConsoleTextAttribute(hstdout, 0xc4); //Color 
									cout << char(233) << char(255);
								}
								if (pcn[l][e] == 9) {
									SetConsoleTextAttribute(hstdout, 0xa2); //Color 
									cout << char(42) << char(255);
								}
								if (pcn[l][e] == 8) {
									SetConsoleTextAttribute(hstdout, 0xe0); //Color 
									cout << char(176) << char(255);

								}
							}
							cout << endl;
						}
						continue;
					}
				}//else
			}//while voroudi karbar
			wina = win(pc);
			if (wina == true)
				continue;
			check1 = false; //check
		}
	}
	system("pause");
	return 0;
}//main









 //cout << "its "<< name<<"`s turn so please fire and give me a position\n";


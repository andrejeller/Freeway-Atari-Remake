#include "ConsoleHelper.h"

using namespace System;
using namespace System::Text;
using namespace Threading;


int JogadorX1 = 65, JogadorY1 = 68;
int JogadorX2 = 20, JogadorY2 = 68;
int placar1 = 0, placar2 = 0;

// "Velocidades dos Carros da Direita"
int v1 = 1, v2 = 1, v3 = 14, v4 = 27, v5 = 1, v6 = 1;
///Velocidades dos Carros da Esquerda
int  v7 = 1, v8 = 14, v9 = 1, v10 = 1, v11 = 1;

void Pontuacao(int Placar, int posicao) {
	switch (Placar) {

		case 0:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "|  |");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, "|__|");

		break;

		case 1:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " |");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, " |");
		break;
		case 2:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, " __|");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, "|__");
		break;
		case 3:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, " __|");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, " __|");
		break;
		case 4:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, "|__|");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "   |");
		break;

		case 5:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "|__");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, " __|");
		break;
		case 6:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "|__");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, "|__|");
		break;
		case 7:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, "__");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "  |");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, "  |");
		break;
		case 8:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "|__|");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, "|__|");
		break;
		case 9:
		ConsoleHelper::ImprimirASCIIExtended(posicao, 75, ConsoleColor::Black, ConsoleColor::Yellow, " __");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 76, ConsoleColor::Black, ConsoleColor::Yellow, "|__|");
		ConsoleHelper::ImprimirASCIIExtended(posicao, 77, ConsoleColor::Black, ConsoleColor::Yellow, "   |");
		break;
	}

}

void CarroE(int CarroX, int CarroY, int c, int V) {
	CarroX = CarroX + V;


	ConsoleHelper::ImprimirASCIIExtended(CarroX + 1, CarroY, ConsoleColor::DarkGray, ConsoleColor::Black, "ÜÜ    ÜÜ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 1, ConsoleColor::DarkGray, ConsoleColor(c), "ÛÛÛßßßßÛÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 2, ConsoleColor::DarkGray, ConsoleColor(c), "ÛßßÛÛÛÛßßÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 3, ConsoleColor::DarkGray, ConsoleColor(c), "Û  ÛÛÛÛ  ÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 4, ConsoleColor::DarkGray, ConsoleColor(c), "ÛÜÜÛÛÛÛÜÜÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 5, ConsoleColor::DarkGray, ConsoleColor(c), "ÛÛÛÜÜÜÜÛÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX + 1, CarroY + 6, ConsoleColor::DarkGray, ConsoleColor::Black, "ßß    ßß");



	if (JogadorX1 >= CarroX && JogadorX1 <= (CarroX + 11) && JogadorY1 <= (CarroY + 6) && (JogadorY1 + 6) >= CarroY) {
		JogadorY1++;
		JogadorY1++;
		JogadorY1++;
		JogadorY1++;

	}
	if (JogadorX2 >= CarroX && JogadorX2 <= (CarroX + 11) && JogadorY2 <= (CarroY + 6) && (JogadorY2 + 6) >= CarroY) {
		JogadorY2++;
		JogadorY2++;
		JogadorY2++;
		JogadorY2++;

	}

}

void ApagaE(int CarroX, int CarroY, int V) {
	CarroX = CarroX + V;
	ConsoleHelper::ImprimirASCIIExtended(CarroX + 1, CarroY, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "        ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 1, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "          ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 2, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 3, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 4, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 5, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "          ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX + 1, CarroY + 6, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "        ");
}

void CarroD(int CarroX, int CarroY, int c, int V) {

	CarroX = CarroX - V;

	ConsoleHelper::ImprimirASCIIExtended(CarroX + 2, CarroY, ConsoleColor::DarkGray, ConsoleColor::Black, "ÜÜ    ÜÜ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 1, ConsoleColor::DarkGray, ConsoleColor(c), " ÛÛÛßßßßÛÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 2, ConsoleColor::DarkGray, ConsoleColor(c), "ÛßßÛÛÛÛßßÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 3, ConsoleColor::DarkGray, ConsoleColor(c), "Û  ÛÛÛÛ  ÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 4, ConsoleColor::DarkGray, ConsoleColor(c), "ÛÜÜÛÛÛÛÜÜÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 5, ConsoleColor::DarkGray, ConsoleColor(c), " ÛÛÛÜÜÜÜÛÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX + 2, CarroY + 6, ConsoleColor::DarkGray, ConsoleColor::Black, "ßß    ßß");

	if (JogadorX1 >= CarroX && JogadorX1 <= (CarroX + 11) && JogadorY1 <= (CarroY + 6) && (JogadorY1 + 6) >= CarroY) {
		JogadorY1++;
		JogadorY1++;
		JogadorY1++;
		JogadorY1++;

	}
	if (JogadorX2 >= CarroX && JogadorX2 <= (CarroX + 11) && JogadorY2 <= (CarroY + 6) && (JogadorY2 + 6) >= CarroY) {
		JogadorY2++;
		JogadorY2++;
		JogadorY2++;
		JogadorY2++;

	}

}

void ApagaD(int CarroX, int CarroY, int V) {

	CarroX = CarroX - V;
	ConsoleHelper::ImprimirASCIIExtended(CarroX + 2, CarroY, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "        ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 1, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 2, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 3, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 4, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX, CarroY + 5, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "           ");
	ConsoleHelper::ImprimirASCIIExtended(CarroX + 2, CarroY + 6, ConsoleColor::DarkGray, ConsoleColor::DarkGray, "        ");
}

void VelocidadesD() {
	v1 += 5;
	v2++;
	v3 += 2;
	v4 += 2;
	v5 += 2;
	v6 += 4;

	if (v1 >= 89) {
		v1 = 1;

	}
	if (v2 >= 89) {
		v2 = 1;
	}
	if (v3 >= 89) {
		v3 = 1;
	}
	if (v4 >= 89) {
		v4 = 1;
	}
	if (v5 >= 89) {
		v5 = 1;
	}
	if (v6 >= 89) {
		v6 = 1;
	}

}

void VelocidadesE() {
	v7++;
	v8++;
	v9 += 2;
	v10 += 2;
	v11 += 3;

	if (v7 >= 89) {
		v7 = 1;

	}
	if (v8 >= 89) {
		v8 = 1;
	}
	if (v9 >= 89) {
		v9 = 1;
	}
	if (v10 >= 89) {
		v10 = 1;
	}
	if (v11 >= 89) {
		v11 = 1;
	}
}

void DesenhaGalinha(int JogadorX, int JogadorY) {
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 4, JogadorY, ConsoleColor::DarkGray, ConsoleColor::Yellow, "Ü");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 4, JogadorY + 1, ConsoleColor::DarkGray, ConsoleColor::Yellow, "ÛÜ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 3, JogadorY + 2, ConsoleColor::DarkGray, ConsoleColor::Yellow, "ÜÛ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 2, JogadorY + 3, ConsoleColor::DarkGray, ConsoleColor::Yellow, "ÜÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX, JogadorY + 4, ConsoleColor::DarkGray, ConsoleColor::Yellow, "ÛÜÛÛÛ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 2, JogadorY + 5, ConsoleColor::DarkGray, ConsoleColor::Yellow, "Û");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 2, JogadorY + 6, ConsoleColor::DarkGray, ConsoleColor::Yellow, "ÛÜ");

}

void ApagaGalinha(int JogadorX, int JogadorY) {
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 4, JogadorY, ConsoleColor::DarkGray, ConsoleColor::Yellow, " ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 4, JogadorY + 1, ConsoleColor::DarkGray, ConsoleColor::Yellow, "  ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 3, JogadorY + 2, ConsoleColor::DarkGray, ConsoleColor::Yellow, "  ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 2, JogadorY + 3, ConsoleColor::DarkGray, ConsoleColor::Yellow, "   ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX, JogadorY + 4, ConsoleColor::DarkGray, ConsoleColor::Yellow, "     ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 2, JogadorY + 5, ConsoleColor::DarkGray, ConsoleColor::Yellow, " ");
	ConsoleHelper::ImprimirASCIIExtended(JogadorX + 2, JogadorY + 6, ConsoleColor::DarkGray, ConsoleColor::Yellow, "  ");
}

void ApagaDesenhos() {
	////Apagando Desenhos

	// Galinha
	ApagaGalinha(JogadorX1, JogadorY1);
	ApagaGalinha(JogadorX2, JogadorY2);

	//CarroD
	ApagaD(89, 5, v1);
	ApagaD(89, 13, v2);
	ApagaD(89, 21, v3);
	ApagaD(89, 21, v4);
	ApagaD(89, 21, v5);
	ApagaD(89, 29, v6);
	//CarroD
	ApagaE(0, 37, v7);
	ApagaE(0, 37, v8);
	ApagaE(0, 45, v9);
	ApagaE(0, 53, v10);
	ApagaE(0, 61, v11);
}

int main() {
	Console::SetWindowSize(100, 80);
	Console::SetBufferSize(100, 80);


	const int ESTADO_JOGO_MENU = 0;
	const int ESTADO_JOGO_GAMEPLAY = 1;
	const int ESTADO_JOGO_P1W = 2;
	const int ESTADO_JOGO_P2W = 3;
	int estadoDoJogo = ESTADO_JOGO_MENU; //Para começar no MENU
	ConsoleKeyInfo tecla;


	do {

		switch (estadoDoJogo) {

			case (ESTADO_JOGO_MENU): // Menu do Jogo
			Console::BackgroundColor = ConsoleColor::DarkGray; //Escolhe a cor do fundo
			Console::Clear();


			ConsoleHelper::ImprimirASCIIExtended(20, 20, ConsoleColor::DarkGray, ConsoleColor::Gray, "    __________  _____________       _______  __");
			ConsoleHelper::ImprimirASCIIExtended(20, 21, ConsoleColor::DarkGray, ConsoleColor::Gray, "   / ____/ __ \\/ ____/ ____/ |     / /   \\ \\/ /");
			ConsoleHelper::ImprimirASCIIExtended(20, 22, ConsoleColor::DarkGray, ConsoleColor::Gray, "  / /_  / /_/ / __/ / __/  | | /| / / /| |\\  / ");
			ConsoleHelper::ImprimirASCIIExtended(20, 23, ConsoleColor::DarkGray, ConsoleColor::Gray, " / __/ / _, _/ /___/ /___  | |/ |/ / ___ |/ /  ");
			ConsoleHelper::ImprimirASCIIExtended(20, 24, ConsoleColor::DarkGray, ConsoleColor::Gray, "/_/   /_/ |_/_____/_____/  |__/|__/_/  |_/_/   ");

			ConsoleHelper::ImprimirASCIIExtended(20, 30, ConsoleColor::DarkGray, ConsoleColor::Yellow, "Pressione ENTER para iniciar");

			if (Console::KeyAvailable) {
				tecla = Console::ReadKey(true);
				if (tecla.Key == ConsoleKey::Enter) {
					estadoDoJogo = ESTADO_JOGO_GAMEPLAY;

				}
			}


			break;

			case (ESTADO_JOGO_GAMEPLAY):

			Console::BackgroundColor = ConsoleColor::DarkGray;
			ApagaDesenhos();

			if (Console::KeyAvailable) {
				tecla = Console::ReadKey(true);

				if (tecla.Key == ConsoleKey::UpArrow) {
					JogadorY1 -= 1;
					if (JogadorY1 == -1) {
						JogadorY1 = 68;
						placar1++;
					}
				}
				else if (tecla.Key == ConsoleKey::DownArrow) {
					JogadorY1 += 1;
					if (JogadorY1 >= 69) {
						JogadorY1 = 68;
					}
				}


			}

			if (Console::KeyAvailable) {
				tecla = Console::ReadKey(true);

				if (tecla.Key == ConsoleKey::W) {

					JogadorY2 -= 1;
					if (JogadorY2 == -1) {
						JogadorY2 = 68;
						placar2++;
					}
				}
				else if (tecla.Key == ConsoleKey::S) {
					JogadorY2 += 1;
					if (JogadorY2 >= 69) {
						JogadorY2 = 68;
					}
				}


			}



			/// Fazendo os Desenhos

			///Carros
			// X, Y, Cor, Velocidade


			VelocidadesD();

			CarroD(89, 5, 4, v1);
			CarroD(89, 13, 10, v2);
			CarroD(89, 21, 13, v3);
			CarroD(89, 21, 13, v4);
			CarroD(89, 21, 13, v5);
			CarroD(89, 29, 1, v6);

			VelocidadesE();

			CarroE(0, 37, 9, v7);
			CarroE(0, 37, 9, v8);
			CarroE(0, 45, 12, v9);
			CarroE(0, 53, 2, v10);
			CarroE(0, 61, 14, v11);



			////// rua
			ConsoleHelper::ImprimirASCIIExtended(0, 2, ConsoleColor::Gray, ConsoleColor::Gray, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 4, ConsoleColor::Gray, ConsoleColor::Gray, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 12, ConsoleColor::DarkGray, ConsoleColor::White, "----------------------------------------------------------------------------------------------------");
			ConsoleHelper::ImprimirASCIIExtended(0, 20, ConsoleColor::DarkGray, ConsoleColor::White, "----------------------------------------------------------------------------------------------------");
			ConsoleHelper::ImprimirASCIIExtended(0, 28, ConsoleColor::DarkGray, ConsoleColor::White, "----------------------------------------------------------------------------------------------------");
			ConsoleHelper::ImprimirASCIIExtended(0, 36, ConsoleColor::DarkGray, ConsoleColor::Yellow, "====================================================================================================");
			ConsoleHelper::ImprimirASCIIExtended(0, 44, ConsoleColor::DarkGray, ConsoleColor::White, "----------------------------------------------------------------------------------------------------");
			ConsoleHelper::ImprimirASCIIExtended(0, 52, ConsoleColor::DarkGray, ConsoleColor::White, "----------------------------------------------------------------------------------------------------");
			ConsoleHelper::ImprimirASCIIExtended(0, 60, ConsoleColor::DarkGray, ConsoleColor::White, "----------------------------------------------------------------------------------------------------");
			ConsoleHelper::ImprimirASCIIExtended(0, 68, ConsoleColor::Gray, ConsoleColor::Gray, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 70, ConsoleColor::Gray, ConsoleColor::Gray, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 72, ConsoleColor::Gray, ConsoleColor::Gray, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");


			///Tarja Preta		
			ConsoleHelper::ImprimirASCIIExtended(0, 75, ConsoleColor::Black, ConsoleColor::Black, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 76, ConsoleColor::Black, ConsoleColor::Black, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 77, ConsoleColor::Black, ConsoleColor::Black, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 78, ConsoleColor::Black, ConsoleColor::Black, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
			ConsoleHelper::ImprimirASCIIExtended(0, 79, ConsoleColor::Black, ConsoleColor::Black, "ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");


			///GALINHA

			DesenhaGalinha(JogadorX1, JogadorY1);
			DesenhaGalinha(JogadorX2, JogadorY2);

			Pontuacao(placar1, 95);
			Pontuacao(placar2, 5);

			if (placar1 > 9) {
				estadoDoJogo = ESTADO_JOGO_P1W;
			}
			else if (placar2 > 9) {
				estadoDoJogo = ESTADO_JOGO_P2W;
			}



			break;


			case (ESTADO_JOGO_P1W): // Menu do Jogo
			Console::BackgroundColor = ConsoleColor::DarkGray; //Escolhe a cor do fundo
			Console::Clear();


			ConsoleHelper::ImprimirASCIIExtended(20, 20, ConsoleColor::DarkGray, ConsoleColor::Gray, "    ____ ___   _       _______   _______");
			ConsoleHelper::ImprimirASCIIExtended(20, 21, ConsoleColor::DarkGray, ConsoleColor::Gray, "   / __ /_ /  | |     / /  _/ | / / ___/");
			ConsoleHelper::ImprimirASCIIExtended(20, 22, ConsoleColor::DarkGray, ConsoleColor::Gray, "  / /_/ / /   | | /| / // //  |/ /\\__ \\ ");
			ConsoleHelper::ImprimirASCIIExtended(20, 23, ConsoleColor::DarkGray, ConsoleColor::Gray, " / ____/ /    | |/ |/ // // /|  /___/ / ");
			ConsoleHelper::ImprimirASCIIExtended(20, 24, ConsoleColor::DarkGray, ConsoleColor::Gray, "/_/   /_/     |__/|__/___/_/ |_//____/  ");

			ConsoleHelper::ImprimirASCIIExtended(20, 30, ConsoleColor::DarkGray, ConsoleColor::Yellow, "Pressione ENTER para jogar novamente");

			if (Console::KeyAvailable) {
				tecla = Console::ReadKey(true);
				if (tecla.Key == ConsoleKey::Enter) {
					estadoDoJogo = ESTADO_JOGO_GAMEPLAY;

				}
			}

			break;

			case (ESTADO_JOGO_P2W): // Menu do Jogo
			Console::BackgroundColor = ConsoleColor::DarkGray; //Escolhe a cor do fundo
			Console::Clear();


			ConsoleHelper::ImprimirASCIIExtended(20, 20, ConsoleColor::DarkGray, ConsoleColor::Gray, "    ____ ___      _       _______   _______");
			ConsoleHelper::ImprimirASCIIExtended(20, 21, ConsoleColor::DarkGray, ConsoleColor::Gray, "   / __ \\ __\\  | |     / /  _/ | / / ___/");
			ConsoleHelper::ImprimirASCIIExtended(20, 22, ConsoleColor::DarkGray, ConsoleColor::Gray, "  / /_/ /_/ /    | | /| / // //  |/ /\\__ \\ ");
			ConsoleHelper::ImprimirASCIIExtended(20, 23, ConsoleColor::DarkGray, ConsoleColor::Gray, " / ____/ __/     | |/ |/ // // /|  /___/ / ");
			ConsoleHelper::ImprimirASCIIExtended(20, 24, ConsoleColor::DarkGray, ConsoleColor::Gray, "/_/   /____/     |__/|__/___/_/ |_//____/  ");

			ConsoleHelper::ImprimirASCIIExtended(20, 30, ConsoleColor::DarkGray, ConsoleColor::Yellow, "Pressione ENTER para jogar novamente");

			if (Console::KeyAvailable) {
				tecla = Console::ReadKey(true);
				if (tecla.Key == ConsoleKey::Enter) {
					estadoDoJogo = ESTADO_JOGO_GAMEPLAY;

				}
			}

			break;

		} // swith

		Thread::Sleep(40); //10segundos (16)
	} while (true);

	return 0;
}



// --------------------Computer Programming 2 Project: BSIT 1-1--------------------
// Leader: Valerio, Sir Lance   
// Members: Ayacocho, Kylie Ross  |  Jalipa, Reanne Rylle  |  Pascual, Arzel Fernando
// IDE Used: Visual Studio 2019

// Header Files
#include <iostream>
#include <iomanip>
using namespace std;

// --------------------Header Files for Functions--------------------
#include "Boyles.h"
#include "Charles.h"
#include "GayLussacs.h"
#include "CombinedGas.h"
#include "Avogadros.h"
#include "IdealGas.h"
#include "Daltons.h"
#include "BasicCalcu.h"

// --------------------Sub Menus--------------------
void BoylesMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============BOYLE'S LAW==================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==   For a given amount of gas at constant temperature,   ==\n";
		cout << "     ==  the volume of a gas varies inversely with pressure.   ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  P1 x V1 = P2 x V2      where: P - Pressure            ==\n";
		cout << "     ==                                V - Volume              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, which variable do you need to find?              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - P1     B - V1     C - P2     D - V2            ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - Go Back                                        ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {

		case 'A':
		{
			Bpressure1();
			break;
		}

		case 'B':
		{
			Bvolume1();
			break;
		}

		case 'C':
		{
			Bpressure2();
			break;
		}

		case 'D':
		{
			Bvolume2();
			break;
		}

		case 'E':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'D');


	system("pause>0");
}

void CharlesMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============CHARLES' LAW=================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==    The volume of a fixed amount of gas is directly     ==\n";
		cout << "     ==     propotional to its Kelvin temperature if the       ==\n";
		cout << "     ==               pressure kept constant.                  ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  V1 / T1 = V2 / T2     where: V - Volume               ==\n";
		cout << "     ==                               T - Temperature          ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, which variable do you need to find?              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - V1     B - T1     C - V2     D - T2            ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - Go Back                                        ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;

		switch (choice) {

		case 'A':
		{
			Cvolume1();
			break;
		}

		case 'B':
		{
			Ctemperature1();
			break;
		}

		case 'C':
		{
			Cvolume2();
			break;
		}

		case 'D':
		{
			Ctemperature2();
			break;
		}

		case 'E':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'D');
	system("pause>0");
}

void GayLussacMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============GAY-LUSSAC'S LAW=============================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==    The pressure of a gas is directly proportional to   ==\n";
		cout << "     ==   the Kelvin temperature if the volume and amount of   ==\n";
		cout << "     ==             gas is kept constant.                      ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  P1 / T1 = P2 / T2      where: P - Pressure            ==\n";
		cout << "     ==                                T - Temperature         ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, which variable do you need to find?              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - P1     B - T1     C - P2     D - T2            ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - Go Back                                        ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {

		case 'A':
		{
			Gpressure1();
			break;
		}

		case 'B':
		{
			Gtemperature1();
			break;
		}

		case 'C':
		{
			Gpressure2();
			break;
		}

		case 'D':
		{
			Gtemperature2();
			break;
		}

		case 'E':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'D');


	system("pause>0");
}

void CombinedGasMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============COMBINED GAS LAW=============================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==    Combines Boyle's, Charle's, and the Temperature -   ==\n";
		cout << "     ==  Pressure relationship into 1 equation. Each of these  ==\n";
		cout << "     ==           laws can be derived from this law.           ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  ( P1 x V1 ) / T1 = ( P2 x V2 ) / T2                   ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==                         where: P - Pressure            ==\n";
		cout << "     ==                                V - Volume              ==\n";
		cout << "     ==                                T - Temperature         ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, which variable do you need to find?              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - P1     B - V1     C - T1     D - P2            ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - V2     F - T2     G - Go Back                  ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {

		case 'A':
		{
			CGpressure1();
			break;
		}

		case 'B':
		{
			CGvolume1();
			break;
		}

		case 'C':
		{
			CGtemperature1();
			break;
		}

		case 'D':
		{
			CGpressure2();
			break;
		}

		case 'E':
		{
			CGvolume2();
			break;
		}

		case 'F':
		{
			CGtemperature2();
			break;
		}

		case 'G':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'F');
	system("pause>0");
}

void AvogadroMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============AVOGADRO'S LAW===============================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==    The pressure of a gas is directly proportional to   ==\n";
		cout << "     ==    the number of moles if the volume and temperature   ==\n";
		cout << "     ==                    is kept constant.                   ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  V1 / n1 = V2 / n2      where: V - Volume              ==\n";
		cout << "     ==                                n - Number of Moles     ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, which variable do you need to find?              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - V1     B - n1     C - V2     D - n2            ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - Go Back                                        ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {

		case 'A':
		{
			Avolume1();
			break;
		}

		case 'B':
		{
			Amoles1();
			break;
		}

		case 'C':
		{
			Avolume2();
			break;
		}

		case 'D':
		{
			Amoles2();
			break;
		}

		case 'E':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'D');
	system("pause>0");
}

void IdealGasMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============IDEAL GAS LAW================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==    Relates the pressure, temperature, volume, and the  ==\n";
		cout << "     ==      amount of a gas through the gas constant 'R'.     ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  P x V = n x R x T      where: P - Pressure            ==\n";
		cout << "     ==                                V - Volume              ==\n";
		cout << "     ==  Gas Constant:                 n = amount of substance ==\n";
		cout << "     ==  0.08205 L x atm / mol x K     R = Gas Constant        ==\n";
		cout << "     ==                                T = Temperature         ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, which variable do you need to find?              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - P     B - V     C - n     D - R                ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - Go Back                                        ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {

		case 'A':
		{
			IGpressure();
			break;
		}

		case 'B':
		{
			IGvolume();
			break;
		}

		case 'C':
		{
			IGno_moles();
			break;
		}

		case 'D':
		{
			IGtemperature();
			break;
		}

		case 'E':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'D');
	system("pause>0");
}

void DaltonMenu() {
	char choice;
	double Partial[50];
	int size;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============DALTON'S GAS LAW=============================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  The total pressure exherted by a mixture of gases is  ==\n";
		cout << "     ==  equal to the sum of pressures exherted by each gas.   ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============FORMULA======================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Pt = P1 + P2 + ... Pn  where: Pt - Total Pressure     ==\n";
		cout << "     ==                                Pn - Partial Pressure   ==\n";
		cout << "     ==                                       of each gas      ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Now, what do you want to do?                          ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - Enter Number of Partial Pressure Given         ==\n";
		cout << "     ==     B - Enter Partial Pressure of Each Gas             ==\n";
		cout << "     ==     C - Find the Total Pressure                        ==\n";
		cout << "     ==     D - Go Back                                        ==\n";
		cout << "     ==                            Note: Must use in order.    ==\n";
		cout << "     ============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {


		case 'A':
		{
			system("CLS");
			cout << "\n\n";
			cout << "     ============================================================\n";
			cout << "     ==                                                        ==\n";
			cout << "     ============ENTER NUMBER OF PARTIAL PRESSURE GIVEN==========\n";
			cout << "     ==                                                        ==\n";
			cout << "     ==  How many partial pressure is given?                   ==\n";
			cout << "     ==          (This will be the 'n' in the formula)         ==\n";
			cout << "     ==                                                        ==\n";
			cout << "     ============================================================\n";
			cout << "\n       Number of Partial Pressure - "; cin >> size;
			cout << "\n\n     ============================================================\n";
			cout << "               Press Any Key to Go Back to Dalton's Law";
			cout << "\n     ============================================================";
			system("pause>0");
			break;
		}

		case 'B':
		{
			Dpartials(size, Partial);
			break;
		}

		case 'C':
		{
			Dtotal(size, Partial);
			break;
		}

		case 'D':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'C');
	system("pause>0");
}

void BasicCalMenu() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     =============================================================\n";
		cout << "     ==                                                         ==\n";
		cout << "     ===============BASIC CALCULATOR==============================\n";
		cout << "     ==                                                         ==\n";
		cout << "     ==   This program can do basic mathematical computations   ==\n";
		cout << "     ==     such as addition, subtraction, multiplication,      ==\n";
		cout << "     ==   division, square of a number, and cube of a number.   ==\n";
		cout << "     ==                                                         ==\n";
		cout << "     ===============FORMULAS======================================\n";
		cout << "     ==                                                         ==\n";
		cout << "     ==  Addition - Addend + Addend = Sum                       ==\n";
		cout << "     ==  Subtraction - Minuend - Subtrahend = Difference        ==\n";
		cout << "     ==  Multipication - Multiplicand x Multiplier = Product    ==\n";
		cout << "     ==  Division - Dividend / Divisor = Quotient               ==\n";
		cout << "     ==  Square of a Number - Squared = (n)^2                   ==\n";
		cout << "     ==  Cube of a Number - Cubed = (n)^3                       ==\n";
		cout << "     ==                                                         ==\n";
		cout << "     =============================================================\n";
		cout << "     ==                                                         ==\n";
		cout << "     ==  Now, which operation do you need to use?               ==\n";
		cout << "     ==                                                         ==\n";
		cout << "     ==     A - Add       B - Subtract        C - Multiply      ==\n";
		cout << "     ==     D - Divide    E - Square & Cube   F - Go Back       ==\n";
		cout << "     ==                                                         ==\n";
		cout << "     =============================================================\n";
		cout << "\n                    ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
		{
			basic_add();
			break;
		}

		case 'B':
		{
			basic_sub();
			break;
		}

		case 'C':
		{
			basic_prod();
			break;
		}

		case 'D':
		{
			basic_quotient();
			break;
		}

		case 'E':
		{
			basic_sqcb();
			break;
		}

		case 'F':
		{
			break;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}
		}
	} while (choice <= 'E');
	system("pause>0");
}

// --------------------Main Menu--------------------
int main() {
	char choice;
	do {
		system("CLS");
		cout << "\n\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ===============COMPUTER PROGRAMMING 2 PROJECT===============\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==           Leader: Valerio, Sir Lance                   ==\n";
		cout << "     ==          Members: Ayacocho, Kylie Ross                 ==\n";
		cout << "     ==                   Jalipa, Reanne Rylle                 ==\n";
		cout << "     ==                   Pascual, Arzel Fernando              ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     =============== GAS LAW + BASIC CALCULATOR =================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A program that is designed to help each students,  ==\n";
		cout << "     ==  specifically those students who have Science in their ==\n";
		cout << "     ==  subject, like High School, STEM strands, and even in  ==\n";
		cout << "     ==  college courses that is science-related, in solving   ==\n";
		cout << "     ==  the following gas laws, and showing the step-by-step  ==\n";
		cout << "     ==  formulas. ALso with additional calculator for them to ==\n";
		cout << "     ==  learn more effeciently.                               ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==  Which of the following do you need some help with?    ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     A - Boyle's Law          B - Charles' Law          ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     C - Gay-Lussac's Law     D - Combined Gas Law      ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     E - Avogadro's Law       F - Ideal Gas Law         ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     G - Dalton's Law         H - Basic Calculator      ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ==     I - Exit                                           ==\n";
		cout << "     ==                                                        ==\n";
		cout << "     ============================================================\n";
		cout << "\n                      ENTER YOUR CHOICE: ";
		cin >> choice;
		switch (choice) {

		case 'A':
		{
			BoylesMenu();
			break;
		}

		case 'B':
		{
			CharlesMenu();
			break;
		}

		case 'C':
		{
			GayLussacMenu();
			break;
		}

		case 'D':
		{
			CombinedGasMenu();
			break;
		}

		case 'E':
		{
			AvogadroMenu();
			break;
		}

		case 'F':
		{
			IdealGasMenu();
			break;
		}

		case 'G':
		{
			DaltonMenu();
			break;
		}

		case 'H':
		{
			BasicCalMenu();
			break;
		}

		case 'I':
		{
			cout << "\n                     Thank you for Coming!!!";
			system("pause>0");
			return 0;
		}

		default:
		{
			cout << "\n               Invalid Choice...";
			system("pause>0");
			break;
		}

		}
	} while (choice <= 'H');


	system("pause>0");
}
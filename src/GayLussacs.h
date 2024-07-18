#pragma once
// Made by Pascual, Arzel Fernando

void Gpressure1() {
	system("CLS");
	double P1, T1, P2, T2, P2T1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR PRESSURE 1=======================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             P1 = ( P2 x T1 ) / T2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       T1 (in kelvin 'K') - "; cin >> T1;
	cout << "\n       T2 (in kelvin 'K') - "; cin >> T2;
	cout << "\n       P2 (in atmosphere 'atm') - "; cin >> P2;
	cout << "\n";
	// FORMULA TO GET PRESSURE 1
	P2T1 = P2 * T1;
	P1 = P2T1 / T2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            P1 = " << fixed << setprecision(2) << P2 << " x " << T1 << " / " << T2 << "\n\n";
	cout << "            P1 = " << P2T1 << " / " << T2 << "\n\n";
	cout << "            P1 = " << P1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Gay-Lussac's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Gtemperature1() {
	system("CLS");
	double P1, P2, T1, T2, P1T2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ================FORMULA FOR TEMPERATURE 1===================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             T1 = ( P1 x T2 ) / P2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P1 (in atmosphere 'atm') - "; cin >> P1;
	cout << "\n       P2 (in atmosphere 'atm') - "; cin >> P2;
	cout << "\n       T2 (in kelvin 'K') - "; cin >> T2;
	cout << "\n";
	// FORMULA TO GET TEMPERATURE 1
	P1T2 = P1 * T2;
	T1 = P1T2 / P2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            T1 = " << fixed << setprecision(2) << P1 << " x " << T2 << " / " << P2 << "\n\n";
	cout << "            T1 = " << P1T2 << " / " << P2 << "\n\n";
	cout << "            T1 = " << T1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Gay-Lussac's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Gpressure2() {
	system("CLS");
	double P1, T2, P2, T1, P1T2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR PRESSURE 2=======================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             P2 = ( P1 x T2 ) / T1                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P1 (in atmosphere 'atm') - "; cin >> P1;
	cout << "\n       T1 (in kelvin 'K') - "; cin >> T1;
	cout << "\n       T2 (in kelvin 'K') - "; cin >> T2;
	cout << "\n";
	// FORMULA TO GET PRESSURE 2
	P1T2 = P1 * T2;
	P2 = P1T2 / T1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            P2 = " << fixed << setprecision(2) << P1 << " x " << T2 << " / " << T1 << "\n\n";
	cout << "            P2 = " << P1T2 << " / " << T1 << "\n\n";
	cout << "            P2 = " << P2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Gay-Lussac's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Gtemperature2() {
	system("CLS");
	double T1, P2, P1, T2, T1P2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR TEMPERATURE 2====================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             T2 = ( T1 x P2 ) / P1                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       T1 (in kelvin 'K') - "; cin >> T1;
	cout << "\n       P1 (in atmosphere 'atm') - "; cin >> P1;
	cout << "\n       P2 (in atmosphere 'atm') - "; cin >> P2;
	cout << "\n";
	// FORMULA TO GET TEMPERATURE 2
	T1P2 = T1 * P2;
	T2 = T1P2 / P1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            T2 = " << fixed << setprecision(2) << T1 << " x " << P2 << " / " << P1 << "\n\n";
	cout << "            T2 = " << T1P2 << " / " << P1 << "\n\n";
	cout << "            T2 = " << T2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Gay-Lussac's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

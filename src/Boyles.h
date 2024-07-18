#pragma once
// Made by Valerio, Sir Lance

void Bpressure1() {
	system("CLS");
	double P1, V1, P2, V2, P2V2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR PRESSURE 1=======================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             P1 = ( P2 x V2 ) / V1                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       P2 (in atmosphere 'atm') - "; cin >> P2;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n";
	// FORMULA TO GET PRESSURE 1
	P2V2 = P2 * V2;
	P1 = P2V2 / V1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            P1 = " << fixed << setprecision(2) << P2 << " x " << V2 << " / " << V1 << "\n\n";
	cout << "            P1 = " << P2V2 << " / " << V1 << "\n\n";
	cout << "            P1 = " << P1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Boyle's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Bvolume1() {
	system("CLS");
	double P1, V1, P2, V2, P2V2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME 1=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V1 = ( P2 x V2 ) / P1                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P1 (in atmosphere 'atm') - "; cin >> P1;
	cout << "\n       P2 (in atmosphere 'atm') - "; cin >> P2;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n";
	// FORMULA TO GET VOLUME 1
	P2V2 = P2 * V2;
	V1 = P2V2 / P1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V1 = " << fixed << setprecision(2) << P2 << " x " << V2 << " / " << P1 << "\n\n";
	cout << "            V1 = " << P2V2 << " / " << P1 << "\n\n";
	cout << "            V1 = " << V1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Boyle's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Bpressure2() {
	system("CLS");
	double P1, V1, P2, V2, P1V1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR PRESSURE 2=======================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             P2 = ( P1 x V1 ) / V2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P1 (in atmosphere 'atm') - "; cin >> P1;
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n";
	// FORMULA TO GET PRESSURE 2
	P1V1 = P1 * V1;
	P2 = P1V1 / V2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            P2 = " << fixed << setprecision(2) << P1 << " x " << V1 << " / " << V2 << "\n\n";
	cout << "            P2 = " << P1V1 << " / " << V2 << "\n\n";
	cout << "            P2 = " << P2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Boyle's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Bvolume2() {
	system("CLS");
	double P1, V1, P2, V2, P1V1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME 2=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V2 = ( P1 x V1 ) / P2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P1 (in atmosphere 'atm') - "; cin >> P1;
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       P2 (in atmosphere 'atm') - "; cin >> P2;
	cout << "\n";
	// FORMULA TO GET VOLUME 2
	P1V1 = P1 * V1;
	V2 = P1V1 / P2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V2 = " << fixed << setprecision(2) << P1 << " x " << V1 << " / " << P2 << "\n\n";
	cout << "            V2 = " << P1V1 << " / " << P2 << "\n\n";
	cout << "            V2 = " << V2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Boyle's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

#pragma once
// Made by Pascual, Arzel Fernando

void Avolume1() {
	system("CLS");
	double V1, n1, V2, n2, V2n1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME 1=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V1 = ( V2 x n1 ) / n2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       n1 (in no. of moles 'mol') - "; cin >> n1;
	cout << "\n       n2 (in no. of moles 'mol') - "; cin >> n2;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n";
	V2n1 = V2 * n1;
	V1 = V2n1 / n2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V1 = " << fixed << setprecision(2) << V2 << " x " << n1 << " / " << n2 << "\n\n";
	cout << "            V1 = " << V2n1 << " / " << n2 << "\n\n";
	cout << "            V1 = " << V1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Avogadro's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Amoles1() {
	system("CLS");
	double V1, V2, n1, n2, V1n2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR NO. OF MOLES 1===================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             n1 = ( V1 x n2 ) / V2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n       n2 (in no. of moles 'mol') - "; cin >> n2;
	cout << "\n";
	V1n2 = V1 * n2;
	n1 = V1n2 / V2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            n1 = " << fixed << setprecision(2) << V1 << " x " << n2 << " / " << V2 << "\n\n";
	cout << "            n1 = " << V1n2 << " / " << V2 << "\n\n";
	cout << "            n1 = " << n1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Avogadro's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Avolume2() {
	system("CLS");
	double V1, n2, V2, n1, V1n2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME 2=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V2 = ( V1 x n2 ) / n1                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       n1 (in no. of moles 'mol') - "; cin >> n1;
	cout << "\n       n2 (in no. of moles 'mol') - "; cin >> n2;
	cout << "\n";
	V1n2 = V1 * n2;
	V2 = V1n2 / n1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V2 = " << fixed << setprecision(2) << V1 << " x " << n2 << " / " << n1 << "\n\n";
	cout << "            V2 = " << V1n2 << " / " << n1 << "\n\n";
	cout << "            V2 = " << V2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Avogadro's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Amoles2() {
	system("CLS");
	double n1, V2, V1, n2, n1V2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==============FORMULA FOR NO. OF MOLES 2====================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             n2 = ( n1 x V2 ) / V1                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       n1 (in no. of moles 'mol') - "; cin >> n1;
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n";
	n1V2 = n1 * V2;
	n2 = n1V2 / V1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            n2 = " << fixed << setprecision(2) << n1 << " x " << V2 << " / " << V1 << "\n\n";
	cout << "            n2 = " << n1V2 << " / " << V1 << "\n\n";
	cout << "            n2 = " << n2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Avogadro's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

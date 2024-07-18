#pragma once
// Made by Jalipa, Reanne Rylle

void IGpressure() {
	system("CLS");
	double P, V, n, T, nRT;
	double R = 0.08205;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR PRESSURE=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             P = ( n x R x T ) / V                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       n (in no. of moles 'mol') - "; cin >> n;
	cout << "\n       T (in kelvin 'K') - "; cin >> T;
	cout << "\n       V (in liters 'L') - "; cin >> V;
	cout << "\n";
	// FORMULA TO GET PRESSURE
	nRT = n * R * T;
	P = nRT / V;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            P = " << fixed << setprecision(2) << n << " x " << R << " x " << T << " / " << V << "\n\n";
	cout << "            P = " << nRT << " / " << V << "\n\n";
	cout << "            P = " << P;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Ideal Gas Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void IGvolume() {
	system("CLS");
	double P, V, n, T, nRT;
	double R = 0.08205;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME===========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V = ( n x R x T ) /                        ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       n (in no. of moles 'mol') - "; cin >> n;
	cout << "\n       T (in  kelvin 'K') - "; cin >> T;
	cout << "\n       P (in atmosphere 'atm') - "; cin >> P;
	cout << "\n";
	// FORMULA TO GET VOLUME
	nRT = n * R * T;
	V = nRT / P;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V = " << fixed << setprecision(2) << n << " x " << R << " x " << T << " / " << P << "\n\n";
	cout << "            V = " << nRT << " / " << P << "\n\n";
	cout << "            V = " << V;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Ideal Gas Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void IGno_moles() {
	system("CLS");
	double P, V, n, T, PV, RT;
	double R = 0.08205;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR NO. OF MOLES=====================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             n = ( P x V ) / ( R x T )                  ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P (in atmosphere 'atm') - "; cin >> P;
	cout << "\n       V (in liters 'L') - "; cin >> V;
	cout << "\n       T (in kelvin 'K') - "; cin >> T;
	cout << "\n";
	// FORMULA TO GET NO. OF MOLES
	PV = P * V;
	RT = R * T;
	n = PV / RT;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            n = " << fixed << setprecision(2) << P << " x " << V << " / " << R << " x " << T << "\n\n";
	cout << "            n = " << PV << " / " << RT << "\n\n";
	cout << "            n = " << n;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Ideal Gas Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void IGtemperature() {
	system("CLS");
	double P, V, n, T, PV, nR;
	double R = 0.08205;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR TEMPERATURE======================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             T = ( P x V ) / ( n x R )                  ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       P (in atmosphere 'atm') - "; cin >> P;
	cout << "\n       V (in liters 'L') - "; cin >> V;
	cout << "\n       n (in no. of moles 'mol') - "; cin >> n;
	cout << "\n";
	// FORMULA TO GET TEMPERATURE
	PV = P * V;
	nR = n * R;
	T = PV / nR;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            T = " << fixed << setprecision(2) << P << " x " << V << " / " << n << " x " << R << "\n\n";
	cout << "            T = " << PV << " / " << nR << "\n\n";
	cout << "            T = " << T;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Ideal Gas Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

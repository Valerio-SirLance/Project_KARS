#pragma once
// Made by Jalipa, Reanne Rylle

void Dpartials(int size, double Partial[50]) {
	system("CLS");
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ============ENTER PARTIAL PRESSURE OF EACH GAS==============\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==  Enter the value of partial pressure of each gases.    ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ============================================================\n";
	for (int i = 0; i < size; i++) {
		cout << "\n       Partial Pressure " << i + 1 << " - "; cin >> Partial[i];
	}
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Dalton's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Dtotal(int size, double Partial[50]) {
	system("CLS");
	int i = 0;
	double total = 0;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FIND THE TOTAL PRESSURE======================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==  Enter partial pressures will be added.                ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR TOTAL PRESSURE===================\n";
	cout << "\n       Total Pressure = ";
	for (; i != size - 1; i++) {
		cout << fixed << setprecision(2) << Partial[i] << " + ";
	} 	cout << Partial[i] << "\n\n";
	// FORMULA TO TOTAL PRESSURE
	for (int i = 0; i < size; i++) {
		total += Partial[i];
	}
	cout << "\n       Total Pressure = " << fixed << setprecision(2) << total;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Dalton's Law";
	cout << "\n     ============================================================";
	system("pause>0");
}
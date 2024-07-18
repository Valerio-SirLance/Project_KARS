#pragma once
// Made by Ayacocho, Kylie Ross

void Cvolume1()
{
	system("CLS");
	double V1, V2, T1, T2, V2T1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME 1=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V1 = ( V2 x T1 ) / T2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==     To Convert to Kelvin:                              ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==  Celsius: K = C + 273.15                               ==\n";
	cout << "     ==  Farenheit: K = (( F - 32 ) x ( 5 / 6 )) + 273.15      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       T1 (in kelvin 'K') - "; cin >> T1;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n       T2 (in kelvin 'K') - "; cin >> T2;
	cout << "\n";
	// FORMULA TO GET VOLUME 1
	V2T1 = V2 * T1;
	V1 = V2T1 / T2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V1 = " << fixed << setprecision(2) << V2 << " x " << T1 << " / " << T2 << "\n\n";
	cout << "            V1 = " << V2T1 << " / " << T2 << "\n\n";
	cout << "            V1 = " << V1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Charles' Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Ctemperature1()
{
	system("CLS");
	double V1, V2, T1, T2, V1T2;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR TEMPERATURE 2====================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             T1 = ( V1 x T2 ) / V2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==     To Convert to Kelvin:                              ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==  Celsius: K = C + 273.15                               ==\n";
	cout << "     ==  Farenheit: K = (( F - 32 ) x ( 5 / 6 )) + 273.15      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       T2 (in kelvin 'K') - "; cin >> T2;
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n";
	// FORMULA TO GET TEMPERATURE 1
	V1T2 = V1 * T2;
	T1 = V1T2 / V2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            T1 = " << fixed << setprecision(2) << V1 << " x " << T2 << " / " << V2 << "\n\n";
	cout << "            T1 = " << V1T2 << " / " << V2 << "\n\n";
	cout << "            T1 = " << T1;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Charles' Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Cvolume2()
{
	system("CLS");
	double V1, V2, T1, T2, V1T1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR VOLUME 2=========================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             V2 = ( V1 / T1 ) x T2                      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==     To Convert to Kelvin:                              ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==  Celsius: K = C + 273.15                               ==\n";
	cout << "     ==  Farenheit: K = (( F - 32 ) x ( 5 / 6 )) + 273.15      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n       T1 (in kelvin 'K') - "; cin >> T1;
	cout << "\n       T2 (in kelvin 'K') - "; cin >> T2;
	cout << "\n";
	// FORMULA TO GET VOLUME 2
	V1T1 = V1 / T1;
	V2 = V1T1 * T2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            V2 = " << fixed << setprecision(2) << V1 << " / " << T1 << "\n\n";
	cout << "            V2 = " << V1T1 << " x " << T2 << "\n\n";
	cout << "            V2 = " << V2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Charles' Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

void Ctemperature2()
{
	system("CLS");
	double V1, V2, T1, T2, V2T1;
	cout << "\n\n";
	cout << "     ============================================================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============FORMULA FOR TEMPERATURE 2====================\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==             T2 = (V2 x T1) / V1                        ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==     To Convert to Kelvin:                              ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ==  Celsius: K = C + 273.15                               ==\n";
	cout << "     ==  Farenheit: K = (( F - 32 ) x ( 5 / 6 )) + 273.15      ==\n";
	cout << "     ==                                                        ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES====================\n";
	cout << "\n       V2 (in liters 'L') - "; cin >> V2;
	cout << "\n       T1 (in kelvin 'K') - "; cin >> T1;
	cout << "\n       V1 (in liters 'L') - "; cin >> V1;
	cout << "\n";
	// FORMULA TO GET TEMPERATURE 2
	V2T1 = V2 * T1;
	T2 = V2T1 / V1;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            T2 = " << fixed << setprecision(2) << V2 << " x " << T1 << " / " << V1 << "\n\n";
	cout << "            T2 = " << V2T1 << " / " << V1 << "\n\n";
	cout << "            T2 = " << T2;
	cout << "\n\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Charles' Law";
	cout << "\n     ============================================================";
	system("pause>0");
}

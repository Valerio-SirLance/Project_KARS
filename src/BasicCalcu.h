#pragma once
// Made by Ayacocho, Kylie Ross

void basic_add() {
	system("CLS");
	float sum, num1, num2;
	cout << "\n\n";
	cout << "     =============================================================\n";
	cout << "     ==                       ADDITION                          ==\n";
	cout << "     =============================================================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==   Addition is the process of adding two or more items   ==\n";
	cout << "     ==      together. In math, addition is the method of       ==\n";
	cout << "     ==       calculating the sum of two or more numbers.       ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ======================== FORMULA ============================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==                Addend + Addend = Sum                    ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==    where:                                               ==\n";
	cout << "     ==       Addend - The number added                         ==\n";
	cout << "     ==       Sum - The result of two addend after adding       ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES=====================\n";
	cout << "\n       Number 1 - "; cin >> num1;
	cout << "\n       Number 2 - "; cin >> num2;
	cout << "\n";
	// FORMULA TO GET SUM
	sum = num1 + num2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            Sum = " << fixed << setprecision(2) << num1 << " + " << num2 << "\n";
	cout << "            Sum = " << sum << "\n";
	cout << "\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Basic Calculator";
	cout << "\n     ============================================================";
	system("pause>0");
}

void basic_sub() {
	system("CLS");
	float diff, num1, num2;
	cout << "\n\n";
	cout << "     =============================================================\n";
	cout << "     ==                      SUBTRACTION                        ==\n";
	cout << "     =============================================================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==   Subtraction is an arithmetic operation of taking the  ==\n";
	cout << "     ==            difference between two numbers.              ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ======================== FORMULA ============================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==           Minuend - Subtrahend = Difference             ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==    where:                                               ==\n";
	cout << "     ==       Minuend - The first number in the subtraction     ==\n";
	cout << "     ==       Subtrahend - The number that is to be subtracted  ==\n";
	cout << "     ==       Difference - result of subtracting of numbers     ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES=====================\n";
	cout << "\n       Number 1 - "; cin >> num1;
	cout << "\n       Number 2 - "; cin >> num2;
	cout << "\n";
	// FORMULA TO GET DIFFERENCE
	diff = num1 - num2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            Difference = " << fixed << setprecision(2) << num1 << " - " << num2 << "\n";
	cout << "            Difference = " << diff << "\n";
	cout << "\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Basic Calculator";
	cout << "\n     ============================================================";
	system("pause>0");
}

void basic_prod() {
	system("CLS");
	float product, num1, num2;
	cout << "\n\n";
	cout << "     =============================================================\n";
	cout << "     ==                     MULTIPLICATION                      ==\n";
	cout << "     =============================================================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==   Multiplication is the process of calculating result   ==\n";
	cout << "     ==              when a number is taken times.              ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ======================== FORMULA ============================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==          Multiplicand x Multiplier = Product            ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==    where:                                               ==\n";
	cout << "     ==       Multiplicand - The first number (factor)          ==\n";
	cout << "     ==       Multiplier - The second number (factor)           ==\n";
	cout << "     ==       Product - The final result after multiplying      ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES=====================\n";
	cout << "\n       Number 1 - "; cin >> num1;
	cout << "\n       Number 2 - "; cin >> num2;
	cout << "\n";
	// FORMULA TO GET PRODUCT
	product = num1 * num2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            Product = " << fixed << setprecision(2) << num1 << " x " << num2 << "\n";
	cout << "            Product = " << product << "\n";
	cout << "\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Basic Calculator";
	cout << "\n     ============================================================";
	system("pause>0");
}

void basic_quotient() {
	system("CLS");
	float quotient, num1, num2, remainder;
	cout << "\n\n";
	cout << "     =============================================================\n";
	cout << "     ==                        DIVISION                         ==\n";
	cout << "     =============================================================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==    Division is the process of distributing a group of   ==\n";
	cout << "     ==     things into equal parts. In math, it is used for    ==\n";
	cout << "     ==         splitting a number into equal  parts.           ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ======================== FORMULA ============================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==              Dividend / Divisor = Quotient              ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==    where:                                               ==\n";
	cout << "     ==       Dividend - the number that is to be divided       ==\n";
	cout << "     ==       Divisor - the number to be divided with           ==\n";
	cout << "     ==       Quotient - The final result after dividing        ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES=====================\n";
	cout << "\n       Number 1 - "; cin >> num1;
	cout << "\n       Number 2 - "; cin >> num2;
	cout << "\n";
	// FORMULA TO GET QUOTIENT
	quotient = num1 / num2;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            Quotient = " << fixed << setprecision(2) << num1 << " / " << num2 << "\n";
	cout << "            Quotient = " << quotient << "\n";
	cout << "\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Basic Calculator";
	cout << "\n     ============================================================";
	system("pause>0");
}

void basic_sqcb() {
	system("CLS");
	float square, cube, num;
	cout << "\n\n";
	cout << "     =============================================================\n";
	cout << "     ==                   SQUARE AND CUBE                       ==\n";
	cout << "     =============================================================\n";
	cout << "     ==                                                         ==\n";
	cout << "     ==    A squared number is a number multiplied to itself,   ==\n";
	cout << "     ==   while cubed number is a number multiplied to itself   ==\n";
	cout << "     ==                      for twice.                         ==\n";
	cout << "     ==                                                         ==\n";
	cout << "     ===============ENTER THE GIVEN VARIABLES=====================\n";
	cout << "\n       Number - "; cin >> num;
	cout << "\n";
	// FORMULA TO GET SQUARE AND CUBE
	square = num * num;
	cube = num * num * num;
	cout << "     ============================================================\n";
	cout << "     ============================================================\n\n";
	cout << "         The Step by Step Solution:\n\n";
	cout << "            Square = " << fixed << setprecision(2) << num << " x " << num << "\n";
	cout << "            Square = " << square << "\n\n";
	cout << "            Cube = " << fixed << setprecision(2) << num << " x " << num << " x " << num << "\n";
	cout << "            Cube = " << cube << "\n\n";
	cout << "\n     ============================================================\n";
	cout << "               Press Any Key to Go Back to Basic Calculator";
	cout << "\n     ============================================================";
	system("pause>0");
}
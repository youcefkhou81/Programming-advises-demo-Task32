
#include <iostream>
#include<string>

using  namespace std; 
short ReadChart()
{
	char A; 
	cout << "Please enter a Character : ";
	cin >> A;
	return A; 
}

bool IsVowel(char A)
{
	A = tolower(A);

	return ((A == 'a') || (A == 'e') || (A == 'i') || (A == 'o') || (A == 'u'));

}


int main()
{
	char A = ReadChart();
	
	if (IsVowel(A))
		cout << "\nYES LETTER \ '" << A << "\' IS VOWEL";
	else
		cout << "\nNO LETTER  \'" << A << "\' IS NOT VOWEL ";

	system("pause > 0 ");
	
}
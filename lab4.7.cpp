#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, ln, A=0, S=0, R=0;
	int n=0; 

	cout<<"xp="; cin>>xp;
	cout<<"xk="; cin>>xk;
	cout<<"dx="; cin>>dx;
	cout<<"ln="; cin>>ln;

	cout<<fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "ln" << " |"
		<< setw(7) << "2*S" << " |"
		<< setw(5) << "n" << " |"<< endl;
	cout << "-------------------------------------------------" << endl;
	x=xp;
	while (x<=xk)
	{
		n=0;
		A=1/x;
		S=A;
		do
		{
			n++;
			R=1./(((2*n-1)*pow(x,(2*n-1)))*((2./n-1)*pow(x,(2./n-1))));			
			A*=R;
			S+=A;
		}while (abs(A)>=log((x+1)/(x-1)));
		cout << "|"<<setw(5)<<setprecision(1)<< x << " |" 
			<< setw(10) << setprecision(7) << log((x+1)/(x-1))<< "|" 
			<< setw(5) << setprecision(7) << 2*S << "|" 
			<< setw(8) << setprecision(7) << n <<"|" << endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	system("pause");
	return 0;
}
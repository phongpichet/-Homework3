#include <iostream>
using namespace std;
void add_f(float,float,float,float,float);

int main ()
{
	short quizz1,quizz2,quizz3,mid,fin;
	cout<<"\==============QUIZZES================\n";
	cout<<"Enter first quizz (10) : ";
	cin>>quizz1;
	cout<<"Enter second quizz (10) : ";
	cin>>quizz2;
	cout<<"Enter third quizz (10) : ";
	cin>>quizz3;
	cout<<"\==============MID-TERM===============\n";
	cout<<"Enter mid-term (40):";
	cin>>mid;
	cout<<"\n==============FINAL=================\n";
	cout<<"Enter final (50) :";
	cin>>fin;
	add_f(quizz1,quizz2,quizz3,mid,fin);

	system("pause");

	return 0;
}
void add_f(float qui1,float qui2,float qui3,float mid,float fin)
{
	float addqui=(qui1+qui2+qui3) / 3;
	cout<<"Quizz Total : "<<addqui<<endl<<"Mid tare : "<<mid <<endl <<"Final : "<<fin<<endl;
	float total=addqui+(mid+fin);
	cout<<"Total : "<<total<<endl;
	cout<<"Your score is : "<<((total >= 50) ? "pass" : "Not passed")<<endl;
}
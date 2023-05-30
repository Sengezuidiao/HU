#include "overload.h"
using namespace std;

complex::complex():m_real(0.0),m_imag(0.0){}

complex::complex(double real, double imag): m_real(real), m_imag(imag){}

complex complex::operator+(const complex &A)const
{
	complex B;
	B.m_real = this->m_real + A.m_real;
	B.m_imag = this->m_imag + A.m_imag;
	return B;
}
void complex::display() const
{
	cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}

#include <iostream>
class complex
{
public:
	complex();
	complex(double real, double imag);
	complex operator+(const complex &A) const;
	void display() const;
private:
	double m_real;
	double m_imag;
};


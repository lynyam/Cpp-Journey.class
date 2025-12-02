#include "Sample.hpp"

Sample::Sample( void ) : _value(0), _c(0) {

	std::cout << "Call Constructor default\n";
}

Sample::Sample( int v ) : _value(v), _c(42){
	std::cout << "Call Constructor int\n";
}

Sample::Sample( const Sample& sc ) {
	std::cout << "Call Constructor copy\n";
	*this = sc;
}

Sample::~Sample( void ) {
	std::cout << "Call Destructor\n";
}

int Sample::getValue() const {
	return _value;
}

int  Sample::getC() const {
	return _c;
}
void Sample::setC( int c ) {
	_c = c;
}

Sample Sample::operator+( const Sample& rop ) const {//1 + 1; + ne modifie ni 1l ni 1r'
	std::cout << "operateur + call for s:" << _value << " c: " << _c << "\n"; 
	Sample s(_value + rop.getValue());
	s._c = _c + rop.getC();
	return s;
}

Sample& Sample::operator=( const Sample& rop ) {
	std::cout << "operateur = call for s:" << _value << " c: " << _c << "\n"; 
	_c = rop.getValue();
	_value = rop.getC();
	return *this;
}

std::ostream& operator<<( std::ostream& o, const Sample& rop ){
	o << "rop.value = " << rop.getValue() << "\n";
	o << "rop.c = " << rop.getC() << "\n";
	return o;
}

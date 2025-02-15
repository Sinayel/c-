#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}
Fixed::Fixed(const Fixed &fixed) : _value(fixed._value) {}
Fixed::Fixed(const int value) : _value(value << _fractionalBits) {}
Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalBits))) {}
Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &fixed) {
    if (this != &fixed) {
        _value = fixed._value;
    }
    return *this;
}

bool Fixed::operator>(const Fixed &other) const { return _value > other._value; }
bool Fixed::operator<(const Fixed &other) const { return _value < other._value; }
bool Fixed::operator>=(const Fixed &other) const { return _value >= other._value; }
bool Fixed::operator<=(const Fixed &other) const { return _value <= other._value; }
bool Fixed::operator==(const Fixed &other) const { return _value == other._value; }
bool Fixed::operator!=(const Fixed &other) const { return _value != other._value; }


Fixed Fixed::operator+(const Fixed &other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) const { return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed &other) const { return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed &other) const { return Fixed(this->toFloat() / other.toFloat()); }

Fixed &Fixed::operator++() {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _value++;
    return temp;
}

Fixed &Fixed::operator--() {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    _value--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }

int Fixed::getRawBits(void) const { return _value; }
void Fixed::setRawBits(int const raw) { _value = raw; }

float Fixed::toFloat(void) const { return static_cast<float>(_value) / (1 << _fractionalBits); }
int Fixed::toInt(void) const { return _value >> _fractionalBits; }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

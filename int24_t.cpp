#include "int24_t.h"


int24_t::int24_t() : int24_t(0)
{}


int24_t::int24_t(int value) {
    _bytes[0] = ((uint8_t*) &value)[0];
    _bytes[1] = ((uint8_t*) &value)[1];
    _bytes[2] = ((uint8_t*) &value)[2];
}


int24_t::int24_t(const int24_t& orig) {
    _bytes[0] = orig._bytes[0];
    _bytes[1] = orig._bytes[1];
    _bytes[2] = orig._bytes[2];
}


int24_t::operator int() const {
    return (_bytes[2] & 0x80 ? (0xFF << 24) : 0) | (_bytes[2] << 16) | (_bytes[1] << 8) | _bytes[0];
}

std::ostream& operator <<(std::ostream& os, const int24_t& obj) {
    return os << (int) obj;
}

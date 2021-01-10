#include "Exceptions.h"

const char* EntityNotFoundException::what() const noexcept {
	return _msg;
}
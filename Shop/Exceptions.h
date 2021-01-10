#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class EntityNotFoundException : std::exception
{
public:
	EntityNotFoundException(const char* msg)
		: _msg(msg)
	{}

	[[nodiscard]] const char* what() const noexcept override;

private:
	const char* _msg;
};

#endif // EXCEPTIONS_H
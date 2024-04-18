#include <iostream>
#include <f1x/aasdk/IO/Promise.hpp>
#include <f1x/aasdk/TCP/ITCPWrapper.hpp>
#include <f1x/aasdk/Error/Error.hpp>

f1x::aasdk::error::Error err;


int main(int argc, char *argv[])
{

	f1x::aasdk::error::ErrorCode code = err.getCode();
	std::cout << static_cast<int>(code) << std::endl;
	return 0;
}

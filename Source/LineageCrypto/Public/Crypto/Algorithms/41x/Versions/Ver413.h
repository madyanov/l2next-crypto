#ifndef H_VER413
#define H_VER413

#include <string>
#include "Crypto/Enums/CryptType.h"
#include "Crypto/Enums/HeaderVersion.h"
#include "Crypto/Algorithms/Base/Algorithm.h"
#include "Crypto/Algorithms/41x/Shared/Ver41xParams.h"
#include "Crypto/Algorithms/41x/Duplex/Ver41xEncDuplex.h"
#include "Crypto/Algorithms/41x/Duplex/Ver41xDecDuplex.h"

using namespace::std;

class Ver413 : public Algorithm, public Ver41xParams
{
public:
	Ver413()
	{
		version = EHeaderVersion::VER_413;

		modulus = {
			0x75, 0xb4, 0xd6, 0xde, 0x5c, 0x01, 0x65, 0x44,
			0x06, 0x8a, 0x1a, 0xcf, 0x12, 0x58, 0x69, 0xf4,
			0x3d, 0x2e, 0x09, 0xfc, 0x55, 0xb8, 0xb1, 0xe2,
			0x89, 0x55, 0x6d, 0xaf, 0x9b, 0x87, 0x57, 0x63,
			0x55, 0x93, 0x44, 0x62, 0x88, 0xb3, 0x65, 0x3d,
			0xa1, 0xce, 0x91, 0xc8, 0x7b, 0xb1, 0xa5, 0xc1,
			0x8f, 0x16, 0x32, 0x34, 0x95, 0xc5, 0x5d, 0x7d,
			0x72, 0xc0, 0x89, 0x0a, 0x83, 0xf6, 0x9b, 0xfd,
			0x1f, 0xd9, 0x43, 0x4e, 0xb1, 0xc0, 0x2f, 0x3e,
			0x46, 0x79, 0xed, 0xfa, 0x43, 0x30, 0x93, 0x19,
			0x07, 0x01, 0x29, 0xc2, 0x67, 0xc8, 0x56, 0x04,
			0xd8, 0x7b, 0xb6, 0x5b, 0xae, 0x20, 0x5d, 0xe3,
			0x70, 0x7a, 0xf1, 0xd2, 0x10, 0x88, 0x81, 0xab,
			0xb5, 0x67, 0xc3, 0xb3, 0xd0, 0x69, 0xae, 0x67,
			0xc3, 0xa4, 0xc6, 0xa3, 0xaa, 0x93, 0xd2, 0x64,
			0x13, 0xd4, 0xc6, 0x60, 0x94, 0xae, 0x20, 0x39
		};
		

		exponent = 0x1d;
		
			/*modulus = {
			0x97, 0xdf, 0x39, 0x84, 0x72, 0xdd, 0xf7, 0x37,
			0xef, 0x0a, 0x0c, 0xd1, 0x7e, 0x8d, 0x17, 0x2f,
			0x0f, 0xef, 0x16, 0x61, 0xa3, 0x8a, 0x8a, 0xe1,
			0xd6, 0xe8, 0x29, 0xbc, 0x1c, 0x6e, 0x4c, 0x3c,
			0xfc, 0x19, 0x29, 0x2d, 0xda, 0x9e, 0xf9, 0x01,
			0x75, 0xe4, 0x6e, 0x73, 0x94, 0xa1, 0x88, 0x50,
			0xb6, 0x41, 0x7d, 0x03, 0xbe, 0x6e, 0xea, 0x27,
			0x4d, 0x3e, 0xd1, 0xdd, 0xe5, 0xb5, 0xd7, 0xbd,
			0xe7, 0x2c, 0xc0, 0xa0, 0xb7, 0x1d, 0x03, 0x60,
			0x86, 0x55, 0x63, 0x38, 0x81, 0x79, 0x3a, 0x02,
			0xc9, 0xa6, 0x7d, 0x9e, 0xf2, 0xb4, 0x5e, 0xb7,
			0xc0, 0x8d, 0x4b, 0xe3, 0x29, 0x08, 0x3c, 0xe4,
			0x50, 0xe6, 0x8f, 0x78, 0x67, 0xb6, 0x74, 0x93,
			0x14, 0xd4, 0x05, 0x11, 0xd0, 0x9b, 0xc5, 0x74,
			0x45, 0x51, 0xba, 0xa8, 0x6a, 0x89, 0xdc, 0x38,
			0x12, 0x3d, 0xc1, 0x66, 0x8f, 0xd7, 0x2d, 0x83
		};

		exponent = 0x35;*/
		
		duplex = {
			StreamFactory::Make<Ver41xDecDuplex>(*this),
			StreamFactory::Make<Ver41xDecDuplex>(*this)
		};
	}
};

#endif // H_VER413
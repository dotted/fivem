#define RAGE_FORMATS_FILE datBase
#include <formats-header.h>

#ifdef RAGE_FORMATS_OK

#if RAGE_FORMATS_GAME == ny
#define RAGE_FORMATS_ny_datBase 1

#define SwapShortRead(x) (x)
#define SwapShortWrite(x) (x)

#define SwapLongRead(x) (x)
#define SwapLongWrite(x) (x)

#define SwapLongLongRead(x) (x)
#define SwapLongLongWrite(x) (x)

#define SwapSingleRead(x) (x)
#define SwapSingleWrite(x) (x)
#endif

class FORMATS_EXPORT datBase
{
public:
	virtual ~datBase() {}
};

struct Vector3
{
	float x, y, z;

private:
	float __pad;

public:
	Vector3(float x, float y, float z)
		: x(x), y(y), z(z), __pad(NAN)
	{
		
	}

	Vector3()
		: Vector3(0.0f, 0.0f, 0.0f)
	{
		
	}
};

struct Vector4
{
	float x, y, z, w;

public:
	Vector4(float x, float y, float z, float w)
		: x(x), y(y), z(z), w(w)
	{

	}

	Vector4()
		: Vector4(0.0f, 0.0f, 0.0f, 1.0f)
	{

	}
};
#endif

#include <formats-footer.h>
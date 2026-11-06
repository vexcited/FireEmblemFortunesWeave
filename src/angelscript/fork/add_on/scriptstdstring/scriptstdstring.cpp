#include "scriptstdstring.h"
#include <assert.h> // assert()
#include <sstream>  // std::stringstream
#include <string.h> // strstr()
#include <stdio.h>	// sprintf()
#include <stdlib.h> // strtod()
#ifndef __psp2__
	#include <locale.h> // setlocale()
#endif

using namespace std;

// This macro is used to avoid warnings about unused variables.
// Usually where the variables are only used in debug mode.
#define UNUSED_VAR(x) (void)(x)

// The game keeps the ordinary map, its factory is 32 bytes.
#include <map>      // std::map
BEGIN_AS_NAMESPACE
typedef map<as::string, int> map_t;
END_AS_NAMESPACE

BEGIN_AS_NAMESPACE
class CStdStringFactory : public asIStringFactory
{
public:
	CStdStringFactory() {}
	~CStdStringFactory() 
	{
		// The script engine must release each string 
		// constant that it has requested
		assert(stringCache.size() == 0);
	}

	const void *GetStringConstant(const char *data, asUINT length)
	{
		// The string factory might be modified from multiple 
		// threads, so it is necessary to use a mutex.
		asAcquireExclusiveLock();
		
		as::string str(data, length);
		map_t::iterator it = stringCache.find(str);
		if (it != stringCache.end())
			it->second++;
		else
			it = stringCache.insert(map_t::value_type(str, 1)).first;

		asReleaseExclusiveLock();
		
		return reinterpret_cast<const void*>(&it->first);
	}

	int  ReleaseStringConstant(const void *str)
	{
		if (str == 0)
			return asERROR;

		int ret = asSUCCESS;
		
		// The string factory might be modified from multiple 
		// threads, so it is necessary to use a mutex.
		asAcquireExclusiveLock();
		
		map_t::iterator it = stringCache.find(*reinterpret_cast<const as::string*>(str));
		if (it == stringCache.end())
			ret = asERROR;
		else
		{
			it->second--;
			if (it->second == 0)
				stringCache.erase(it);
		}
		
		asReleaseExclusiveLock();
		
		return ret;
	}

	int  GetRawStringData(const void *str, char *data, asUINT *length) const
	{
		if (str == 0)
			return asERROR;

		if (length)
			*length = (asUINT)reinterpret_cast<const as::string*>(str)->length();

		if (data)
			memcpy(data, reinterpret_cast<const as::string*>(str)->c_str(), reinterpret_cast<const as::string*>(str)->length());

		return asSUCCESS;
	}

	// THe access to the string cache is protected with the common mutex provided by AngelScript
	map_t stringCache;
};

static CStdStringFactory *stringFactory = 0;

// TODO: Make this public so the application can also use the string 
//       factory and share the string constants if so desired, or to
//       monitor the size of the string factory cache.
CStdStringFactory *GetStdStringFactorySingleton()
{
	if( stringFactory == 0 )
	{
		// The following instance will be destroyed by the global 
		// CStdStringFactoryCleaner instance upon application shutdown
		stringFactory = new CStdStringFactory();
	}
	return stringFactory;
}

class CStdStringFactoryCleaner
{
public:
	~CStdStringFactoryCleaner()
	{
		if (stringFactory)
		{
			// Only delete the string factory if the stringCache is empty
			// If it is not empty, it means that someone might still attempt
			// to release string constants, so if we delete the string factory
			// the application might crash. Not deleting the cache would
			// lead to a memory leak, but since this is only happens when the
			// application is shutting down anyway, it is not important.
			if (stringFactory->stringCache.empty())
			{
				delete stringFactory;
				stringFactory = 0;
			}
		}
	}
};

static CStdStringFactoryCleaner cleaner;


static void ConstructString(as::string *thisPointer)
{
	new(thisPointer) as::string();
}

// The game constructs strings from numbers and booleans. Unsigned values
// are written in hexadecimal.
static void ConstructStringFromInt(int value, as::string *thisPointer)
{
	char buffer[1024];
	sprintf(buffer, "%d", value);
	new(thisPointer) as::string(buffer);
}

static void ConstructStringFromUInt(asUINT value, as::string *thisPointer)
{
	char buffer[1024];
	sprintf(buffer, "%x", value);
	new(thisPointer) as::string(buffer);
}

static void ConstructStringFromBool(bool value, as::string *thisPointer)
{
	char buffer[1024];
	sprintf(buffer, "%d", value);
	new(thisPointer) as::string(buffer);
}

static void ConstructStringFromFloat(float value, as::string *thisPointer)
{
	char buffer[1024];
	sprintf(buffer, "%f", value);
	new(thisPointer) as::string(buffer);
}

static void CopyConstructString(const as::string &other, as::string *thisPointer)
{
	new(thisPointer) as::string(other);
}

static void DestructString(as::string *thisPointer)
{
	thisPointer->as::string::~string();
}

static as::string &AddAssignStringToString(const as::string &str, as::string &dest)
{
	// We don't register the method directly because some compilers
	// and standard libraries inline the definition, resulting in the
	// linker being unable to find the declaration.
	// Example: CLang/LLVM with XCode 4.3 on OSX 10.7
	dest += str;
	return dest;
}

// bool string::isEmpty()
// bool string::empty() // if AS_USE_STLNAMES == 1
static bool StringIsEmpty(const as::string &str)
{
	// We don't register the method directly because some compilers
	// and standard libraries inline the definition, resulting in the
	// linker being unable to find the declaration
	// Example: CLang/LLVM with XCode 4.3 on OSX 10.7
	return str.empty();
}

static as::string &AssignUInt64ToString(asQWORD i, as::string &dest)
{
	ostringstream stream;
	stream << i;
	dest = stream.str().c_str();
	return dest;
}

static as::string &AddAssignUInt64ToString(asQWORD i, as::string &dest)
{
	ostringstream stream;
	stream << i;
	dest += stream.str().c_str();
	return dest;
}

static as::string AddStringUInt64(const as::string &str, asQWORD i)
{
	ostringstream stream;
	stream << i;
	return str + as::string(stream.str().c_str());
}

static as::string AddInt64String(asINT64 i, const as::string &str)
{
	ostringstream stream;
	stream << i;
	return as::string(stream.str().c_str()) + str;
}

static as::string &AssignInt64ToString(asINT64 i, as::string &dest)
{
	ostringstream stream;
	stream << i;
	dest = stream.str().c_str();
	return dest;
}

static as::string &AddAssignInt64ToString(asINT64 i, as::string &dest)
{
	ostringstream stream;
	stream << i;
	dest += stream.str().c_str();
	return dest;
}

static as::string AddStringInt64(const as::string &str, asINT64 i)
{
	ostringstream stream;
	stream << i;
	return str + as::string(stream.str().c_str());
}

static as::string AddUInt64String(asQWORD i, const as::string &str)
{
	ostringstream stream;
	stream << i;
	return as::string(stream.str().c_str()) + str;
}

static as::string &AssignDoubleToString(double f, as::string &dest)
{
	ostringstream stream;
	stream << f;
	dest = stream.str().c_str();
	return dest;
}

static as::string &AddAssignDoubleToString(double f, as::string &dest)
{
	ostringstream stream;
	stream << f;
	dest += stream.str().c_str();
	return dest;
}

static as::string &AssignFloatToString(float f, as::string &dest)
{
	ostringstream stream;
	stream << f;
	dest = stream.str().c_str();
	return dest;
}

static as::string &AddAssignFloatToString(float f, as::string &dest)
{
	ostringstream stream;
	stream << f;
	dest += stream.str().c_str();
	return dest;
}

static as::string &AssignBoolToString(bool b, as::string &dest)
{
	ostringstream stream;
	stream << (b ? "true" : "false");
	dest = stream.str().c_str();
	return dest;
}

static as::string &AddAssignBoolToString(bool b, as::string &dest)
{
	ostringstream stream;
	stream << (b ? "true" : "false");
	dest += stream.str().c_str();
	return dest;
}

static as::string AddStringDouble(const as::string &str, double f)
{
	ostringstream stream;
	stream << f;
	return str + as::string(stream.str().c_str());
}

static as::string AddDoubleString(double f, const as::string &str)
{
	ostringstream stream;
	stream << f;
	return as::string(stream.str().c_str()) + str;
}

static as::string AddStringFloat(const as::string &str, float f)
{
	ostringstream stream;
	stream << f;
	return str + as::string(stream.str().c_str());
}

static as::string AddFloatString(float f, const as::string &str)
{
	ostringstream stream;
	stream << f;
	return as::string(stream.str().c_str()) + str;
}

static as::string AddStringBool(const as::string &str, bool b)
{
	ostringstream stream;
	stream << (b ? "true" : "false");
	return str + as::string(stream.str().c_str());
}

static as::string AddBoolString(bool b, const as::string &str)
{
	ostringstream stream;
	stream << (b ? "true" : "false");
	return as::string(stream.str().c_str()) + str;
}

static char *StringCharAt(unsigned int i, as::string &str)
{
	if( i >= str.size() )
	{
		// Set a script exception
		asIScriptContext *ctx = asGetActiveContext();
		ctx->SetException("Out of range");

		// Return a null pointer
		return 0;
	}

	return &str[i];
}

// AngelScript signature:
// int string::opCmp(const string &in) const
static int StringCmp(const as::string &a, const as::string &b)
{
	int cmp = 0;
	if( a < b ) cmp = -1;
	else if( a > b ) cmp = 1;
	return cmp;
}

// This function returns the index of the first position where the substring
// exists in the input string. If the substring doesn't exist in the input
// string -1 is returned.
//
// AngelScript signature:
// int string::findFirst(const string &in sub, uint start = 0) const
static int StringFindFirst(const as::string &sub, asUINT start, const as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	return (int)str.find(sub, (size_t)(start < 0 ? string::npos : start));
}

// This function returns the index of the first position where the one of the bytes in substring
// exists in the input string. If the characters in the substring doesn't exist in the input
// string -1 is returned.
//
// AngelScript signature:
// int string::findFirstOf(const string &in sub, uint start = 0) const
static int StringFindFirstOf(const as::string &sub, asUINT start, const as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	return (int)str.find_first_of(sub, (size_t)(start < 0 ? string::npos : start));
}

// This function returns the index of the last position where the one of the bytes in substring
// exists in the input string. If the characters in the substring doesn't exist in the input
// string -1 is returned.
//
// AngelScript signature:
// int string::findLastOf(const string &in sub, uint start = -1) const
static int StringFindLastOf(const as::string &sub, asUINT start, const as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	return (int)str.find_last_of(sub, (size_t)(start < 0 ? string::npos : start));
}

// This function returns the index of the first position where a byte other than those in substring
// exists in the input string. If none is found -1 is returned.
//
// AngelScript signature:
// int string::findFirstNotOf(const string &in sub, uint start = 0) const
static int StringFindFirstNotOf(const as::string &sub, asUINT start, const as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	return (int)str.find_first_not_of(sub, (size_t)(start < 0 ? string::npos : start));
}

// This function returns the index of the last position where a byte other than those in substring
// exists in the input string. If none is found -1 is returned.
//
// AngelScript signature:
// int string::findLastNotOf(const string &in sub, uint start = -1) const
static int StringFindLastNotOf(const as::string &sub, asUINT start, const as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	return (int)str.find_last_not_of(sub, (size_t)(start < 0 ? string::npos : start));
}

// This function returns the index of the last position where the substring
// exists in the input string. If the substring doesn't exist in the input
// string -1 is returned.
//
// AngelScript signature:
// int string::findLast(const string &in sub, int start = -1) const
static int StringFindLast(const as::string &sub, int start, const as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	return (int)str.rfind(sub, (size_t)(start < 0 ? string::npos : start));
}

// AngelScript signature:
// void string::insert(uint pos, const string &in other)
static void StringInsert(unsigned int pos, const as::string &other, as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	str.insert(pos, other);
}

// AngelScript signature:
// void string::erase(uint pos, int count = -1)
static void StringErase(unsigned int pos, int count, as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	str.erase(pos, (size_t)(count < 0 ? string::npos : count));
}


// AngelScript signature:
// uint string::length() const
static asUINT StringLength(const as::string &str)
{
	// We don't register the method directly because the return type changes between 32bit and 64bit platforms
	return (asUINT)str.length();
}


// AngelScript signature:
// void string::resize(uint l)
static void StringResize(asUINT l, as::string &str)
{
	// We don't register the method directly because the argument types change between 32bit and 64bit platforms
	str.resize(l);
}

// AngelScript signature:
// string formatInt(int64 val, const string &in options, uint width)
static as::string formatInt(asINT64 value, const as::string &options, asUINT width)
{
	bool leftJustify = options.find("l") != string::npos;
	bool padWithZero = options.find("0") != string::npos;
	bool alwaysSign  = options.find("+") != string::npos;
	bool spaceOnSign = options.find(" ") != string::npos;
	bool hexSmall    = options.find("h") != string::npos;
	bool hexLarge    = options.find("H") != string::npos;

	as::string fmt = "%";
	if( leftJustify ) fmt += "-";
	if( alwaysSign ) fmt += "+";
	if( spaceOnSign ) fmt += " ";
	if( padWithZero ) fmt += "0";

#ifdef _WIN32
	fmt += "*I64";
#else
#ifdef _LP64
	fmt += "*l";
#else
	fmt += "*ll";
#endif
#endif

	if( hexSmall ) fmt += "x";
	else if( hexLarge ) fmt += "X";
	else fmt += "d";

	as::string buf;
	buf.resize(width+30);
#if _MSC_VER >= 1400 && !defined(__S3E__)
	// MSVC 8.0 / 2005 or newer
	sprintf_s(&buf[0], buf.size(), fmt.c_str(), width, value);
#else
	sprintf(&buf[0], fmt.c_str(), width, value);
#endif
	buf.resize(strlen(&buf[0]));

	return buf;
}

// AngelScript signature:
// string formatUInt(uint64 val, const string &in options, uint width)
static as::string formatUInt(asQWORD value, const as::string &options, asUINT width)
{
	bool leftJustify = options.find("l") != string::npos;
	bool padWithZero = options.find("0") != string::npos;
	bool alwaysSign  = options.find("+") != string::npos;
	bool spaceOnSign = options.find(" ") != string::npos;
	bool hexSmall    = options.find("h") != string::npos;
	bool hexLarge    = options.find("H") != string::npos;

	as::string fmt = "%";
	if( leftJustify ) fmt += "-";
	if( alwaysSign ) fmt += "+";
	if( spaceOnSign ) fmt += " ";
	if( padWithZero ) fmt += "0";

#ifdef _WIN32
	fmt += "*I64";
#else
#ifdef _LP64
	fmt += "*l";
#else
	fmt += "*ll";
#endif
#endif

	if( hexSmall ) fmt += "x";
	else if( hexLarge ) fmt += "X";
	else fmt += "u";

	as::string buf;
	buf.resize(width+30);
#if _MSC_VER >= 1400 && !defined(__S3E__)
	// MSVC 8.0 / 2005 or newer
	sprintf_s(&buf[0], buf.size(), fmt.c_str(), width, value);
#else
	sprintf(&buf[0], fmt.c_str(), width, value);
#endif
	buf.resize(strlen(&buf[0]));

	return buf;
}

// AngelScript signature:
// string formatFloat(double val, const string &in options, uint width, uint precision)
static as::string formatFloat(double value, const as::string &options, asUINT width, asUINT precision)
{
	bool leftJustify = options.find("l") != string::npos;
	bool padWithZero = options.find("0") != string::npos;
	bool alwaysSign  = options.find("+") != string::npos;
	bool spaceOnSign = options.find(" ") != string::npos;
	bool expSmall    = options.find("e") != string::npos;
	bool expLarge    = options.find("E") != string::npos;

	as::string fmt = "%";
	if( leftJustify ) fmt += "-";
	if( alwaysSign ) fmt += "+";
	if( spaceOnSign ) fmt += " ";
	if( padWithZero ) fmt += "0";

	fmt += "*.*";

	if( expSmall ) fmt += "e";
	else if( expLarge ) fmt += "E";
	else fmt += "f";

	as::string buf;
	buf.resize(width+precision+50);
#if _MSC_VER >= 1400 && !defined(__S3E__)
	// MSVC 8.0 / 2005 or newer
	sprintf_s(&buf[0], buf.size(), fmt.c_str(), width, precision, value);
#else
	sprintf(&buf[0], fmt.c_str(), width, precision, value);
#endif
	buf.resize(strlen(&buf[0]));

	return buf;
}

// AngelScript signature:
// int64 parseInt(const string &in val, uint base = 10, uint &out byteCount = 0)
static asINT64 parseInt(const as::string &val, asUINT base, asUINT *byteCount)
{
	// Only accept base 10 and 16
	if( base != 10 && base != 16 )
	{
		if( byteCount ) *byteCount = 0;
		return 0;
	}

	const char *end = &val[0];

	// Determine the sign
	bool sign = false;
	if( *end == '-' )
	{
		sign = true;
		end++;
	}
	else if( *end == '+' )
		end++;

	asINT64 res = 0;
	if( base == 10 )
	{
		while( *end >= '0' && *end <= '9' )
		{
			res *= 10;
			res += *end++ - '0';
		}
	}
	else if( base == 16 )
	{
		while( (*end >= '0' && *end <= '9') ||
		       (*end >= 'a' && *end <= 'f') ||
		       (*end >= 'A' && *end <= 'F') )
		{
			res *= 16;
			if( *end >= '0' && *end <= '9' )
				res += *end++ - '0';
			else if( *end >= 'a' && *end <= 'f' )
				res += *end++ - 'a' + 10;
			else if( *end >= 'A' && *end <= 'F' )
				res += *end++ - 'A' + 10;
		}
	}

	if( byteCount )
		*byteCount = asUINT(size_t(end - val.c_str()));

	if( sign )
		res = -res;

	return res;
}

// AngelScript signature:
// uint64 parseUInt(const string &in val, uint base = 10, uint &out byteCount = 0)
static asQWORD parseUInt(const as::string &val, asUINT base, asUINT *byteCount)
{
	// Only accept base 10 and 16
	if (base != 10 && base != 16)
	{
		if (byteCount) *byteCount = 0;
		return 0;
	}

	const char *end = &val[0];

	asQWORD res = 0;
	if (base == 10)
	{
		while (*end >= '0' && *end <= '9')
		{
			res *= 10;
			res += *end++ - '0';
		}
	}
	else if (base == 16)
	{
		while ((*end >= '0' && *end <= '9') ||
			(*end >= 'a' && *end <= 'f') ||
			(*end >= 'A' && *end <= 'F'))
		{
			res *= 16;
			if (*end >= '0' && *end <= '9')
				res += *end++ - '0';
			else if (*end >= 'a' && *end <= 'f')
				res += *end++ - 'a' + 10;
			else if (*end >= 'A' && *end <= 'F')
				res += *end++ - 'A' + 10;
		}
	}

	if (byteCount)
		*byteCount = asUINT(size_t(end - val.c_str()));

	return res;
}

// AngelScript signature:
// double parseFloat(const string &in val, uint &out byteCount = 0)
double parseFloat(const as::string &val, asUINT *byteCount)
{
	char *end;

	// WinCE doesn't have setlocale. Some quick testing on my current platform
	// still manages to parse the numbers such as "3.14" even if the decimal for the
	// locale is ",".
#if !defined(_WIN32_WCE) && !defined(ANDROID) && !defined(__psp2__)
	// Set the locale to C so that we are guaranteed to parse the float value correctly
	char *tmp = setlocale(LC_NUMERIC, 0);
	as::string orig = tmp ? tmp : "C";
	setlocale(LC_NUMERIC, "C");
#endif

	double res = strtod(val.c_str(), &end);

#if !defined(_WIN32_WCE) && !defined(ANDROID) && !defined(__psp2__)
	// Restore the locale
	setlocale(LC_NUMERIC, orig.c_str());
#endif

	if( byteCount )
		*byteCount = asUINT(size_t(end - val.c_str()));

	return res;
}

// This function returns a string containing the substring of the input string
// determined by the starting index and count of characters.
//
// AngelScript signature:
// string string::substr(uint start = 0, int count = -1) const
static as::string StringSubString(asUINT start, int count, const as::string &str)
{
	// Check for out-of-bounds
	as::string ret;
	if( start < str.length() && count != 0 )
		ret = str.substr(start, (size_t)(count < 0 ? string::npos : count));

	return ret;
}

// String equality comparison.
// Returns true iff lhs is equal to rhs.
//
// For some reason gcc 4.7 has difficulties resolving the
// asFUNCTIONPR(operator==, (const string &, const string &)
// makro, so this wrapper was introduced as work around.
static bool StringEquals(const as::string& lhs, const as::string& rhs)
{
	return lhs == rhs;
}

// The game registers print functions next to the string type. The put
// functions are empty in this build. The printf and sprintf natives lock a
// game mutex around a formatter, and printf prints nothing.
class GameMutex
{
public:
	virtual ~GameMutex();
	virtual void Lock() = 0;
	virtual void Unlock() = 0;
};

extern GameMutex *unknown_219c9b8;

static int printInt;
static asUINT printHex;
static asUINT printUInt;
static float printFloat;
static asQWORD printHex64;
static char printSpec[256];
static char printFormat[256];
static char printArgs[10][256];

static void FormatPrintArgs(const as::string &fmt, const as::string &p0,
	const as::string &p1, const as::string &p2, const as::string &p3,
	const as::string &p4, const as::string &p5, const as::string &p6,
	const as::string &p7, const as::string &p8, const as::string &p9);

static void ScriptPrintf(const as::string &fmt, as::string p0, as::string p1,
	as::string p2, as::string p3, as::string p4, as::string p5, as::string p6,
	as::string p7, as::string p8, as::string p9)
{
	unknown_219c9b8->Lock();
	FormatPrintArgs(fmt, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	unknown_219c9b8->Unlock();
}

static void ScriptSprintf(as::string &str, const as::string &fmt,
	as::string p0, as::string p1, as::string p2, as::string p3, as::string p4,
	as::string p5, as::string p6, as::string p7, as::string p8, as::string p9)
{
	unknown_219c9b8->Lock();
	FormatPrintArgs(fmt, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	sprintf(printSpec, printFormat, printArgs[0], printArgs[1], printArgs[2],
		printArgs[3], printArgs[4], printArgs[5], printArgs[6], printArgs[7],
		printArgs[8], printArgs[9]);
	str = printSpec;
	unknown_219c9b8->Unlock();
}

static void PutString(const as::string &) {}
static void PutInt(int) {}
static void PutUInt(asUINT) {}
static void PutUInt64(asQWORD) {}
static void PutFloat(float) {}
static void PutBool(bool) {}

static void PutStringGeneric(asIScriptGeneric *) {}
static void PutIntGeneric(asIScriptGeneric *) {}
static void PutUIntGeneric(asIScriptGeneric *) {}
static void PutUInt64Generic(asIScriptGeneric *) {}
static void PutFloatGeneric(asIScriptGeneric *) {}
static void PutBoolGeneric(asIScriptGeneric *) {}
static void ScriptPrintfGeneric(asIScriptGeneric *) {}
static void ScriptSprintfGeneric(asIScriptGeneric *) {}

#define AS_PRINTF_ARGS "string p0=\"0\",string p1=\"0\",string p2=\"0\"," \
	"string p3=\"0\",string p4=\"0\",string p5=\"0\",string p6=\"0\"," \
	"string p7=\"0\",string p8=\"0\",string p9=\"0\")"

void RegisterScriptPrint_Native(asIScriptEngine *engine)
{
	engine->RegisterGlobalFunction("void put(const string&)", asFUNCTION(PutString), asCALL_CDECL);
	engine->RegisterGlobalFunction("void put(int)", asFUNCTION(PutInt), asCALL_CDECL);
	engine->RegisterGlobalFunction("void put(uint)", asFUNCTION(PutUInt), asCALL_CDECL);
	engine->RegisterGlobalFunction("void put(uint64)", asFUNCTION(PutUInt64), asCALL_CDECL);
	engine->RegisterGlobalFunction("void put(float)", asFUNCTION(PutFloat), asCALL_CDECL);
	engine->RegisterGlobalFunction("void put(bool)", asFUNCTION(PutBool), asCALL_CDECL);
	engine->RegisterGlobalFunction("void printf(const string& fmt, " AS_PRINTF_ARGS, asFUNCTION(ScriptPrintf), asCALL_CDECL);
	engine->RegisterGlobalFunction("void sprintf(string& str, const string& fmt, " AS_PRINTF_ARGS, asFUNCTION(ScriptSprintf), asCALL_CDECL);
}

void RegisterScriptPrint_Generic(asIScriptEngine *engine)
{
	engine->RegisterGlobalFunction("void put(const string&)", asFUNCTION(PutStringGeneric), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void put(int)", asFUNCTION(PutIntGeneric), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void put(uint)", asFUNCTION(PutUIntGeneric), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void put(uint64)", asFUNCTION(PutUInt64Generic), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void put(float)", asFUNCTION(PutFloatGeneric), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void put(bool)", asFUNCTION(PutBoolGeneric), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void printf(const string& fmt, " AS_PRINTF_ARGS, asFUNCTION(ScriptPrintfGeneric), asCALL_GENERIC);
	engine->RegisterGlobalFunction("void sprintf(string& str, const string& fmt, " AS_PRINTF_ARGS, asFUNCTION(ScriptSprintfGeneric), asCALL_GENERIC);
}

void RegisterScriptPrint(asIScriptEngine *engine)
{
	if( strstr(asGetLibraryOptions(), "AS_MAX_PORTABILITY") )
		RegisterScriptPrint_Generic(engine);
	else
		RegisterScriptPrint_Native(engine);
}

// The formatter follows RegisterScriptPrint in the original. Each conversion
// reads its argument back from the string with sscanf and formats it into its
// own buffer, and the format becomes a list of %s. The l modifier peeks at the
// spec buffer past the current character.
static void FormatPrintArgs(const as::string &fmt, const as::string &p0,
	const as::string &p1, const as::string &p2, const as::string &p3,
	const as::string &p4, const as::string &p5, const as::string &p6,
	const as::string &p7, const as::string &p8, const as::string &p9)
{
	static as::string args[10];
	args[0] = p0;
	args[1] = p1;
	args[2] = p2;
	args[3] = p3;
	args[4] = p4;
	args[5] = p5;
	args[6] = p6;
	args[7] = p7;
	args[8] = p8;
	args[9] = p9;

	const char *s = fmt.c_str();
	char *spec = printSpec;
	char *out = printFormat;
	int n = 0;
	for( ; *s; s++ )
	{
		if( *s != '%' )
		{
			*out++ = *s;
			continue;
		}

		for( char *p = spec; *s; s++, p++ )
		{
			char c = *s;
			*p = c;
			bool done = true;
			switch( c )
			{
			case 'c':
				p[1] = 0;
				sscanf(args[n].c_str(), "%d", &printInt);
				sprintf(printArgs[n], printSpec, printInt);
				break;
			case 'd':
				p[1] = 0;
				sscanf(args[n].c_str(), "%d", &printInt);
				sprintf(printArgs[n], printSpec, printInt);
				break;
			case 'X':
			case 'x':
				p[1] = 0;
				sscanf(args[n].c_str(), "%x", &printHex);
				sprintf(printArgs[n], printSpec, printHex);
				break;
			case 'u':
				p[1] = 0;
				sscanf(args[n].c_str(), "%u", &printUInt);
				sprintf(printArgs[n], printSpec, printUInt);
				break;
			case 'f':
				p[1] = 0;
				sscanf(args[n].c_str(), "%f", &printFloat);
				sprintf(printArgs[n], printSpec, printFloat);
				break;
			case 's':
				p[1] = 0;
				sprintf(printArgs[n], printSpec, args[n].c_str());
				break;
			case 'l':
				if( p[1] == 'l' )
				{
					if( p[2] != 'x' )
					{
						done = false;
						break;
					}
					p[1] = 0;
					sscanf(args[n].c_str(), "%llx", &printHex64);
					sprintf(printArgs[n], printSpec, printHex64);
				}
				else if( p[1] == 'x' )
				{
					p[1] = 0;
					sscanf(args[n].c_str(), "%lx", &printHex);
					sprintf(printArgs[n], printSpec, printHex);
				}
				else
					done = false;
				break;
			default:
				done = false;
			}
			if( done )
				break;
		}

		*out++ = '%';
		*out++ = 's';
		n++;
	}
	*out = 0;
}

void RegisterStdString_Native(asIScriptEngine *engine)
{
	int r = 0;
	UNUSED_VAR(r);

	// Register the string type
#line 804
	r = engine->RegisterObjectType("string", sizeof(as::string), asOBJ_VALUE | asGetTypeTraits<as::string>()); assert( r >= 0 );

	r = engine->RegisterStringFactory("string", GetStdStringFactorySingleton());

	// Register the object operator overloads
#line 812
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f()",                    asFUNCTION(ConstructString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
#line 814
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const int)",           asFUNCTION(ConstructStringFromInt), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const uint)",          asFUNCTION(ConstructStringFromUInt), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const bool)",          asFUNCTION(ConstructStringFromBool), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const float)",         asFUNCTION(ConstructStringFromFloat), asCALL_CDECL_OBJLAST); assert( r >= 0 );
#line 819
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const string &in)",    asFUNCTION(CopyConstructString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_DESTRUCT,   "void f()",                    asFUNCTION(DestructString),  asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAssign(const string &in)", asMETHODPR(as::string, operator =, (const as::string&), as::string&), asCALL_THISCALL); assert( r >= 0 );
	// Need to use a wrapper on Mac OS X 10.7/XCode 4.3 and CLang/LLVM, otherwise the linker fails
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(const string &in)", asFUNCTION(AddAssignStringToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
//	r = engine->RegisterObjectMethod("string", "string &opAddAssign(const string &in)", asMETHODPR(string, operator+=, (const string&), string&), asCALL_THISCALL); assert( r >= 0 );

	// Need to use a wrapper for operator== otherwise gcc 4.7 fails to compile
	r = engine->RegisterObjectMethod("string", "bool opEquals(const string &in) const", asFUNCTIONPR(StringEquals, (const as::string &, const as::string &), bool), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "int opCmp(const string &in) const", asFUNCTION(StringCmp), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(const string &in) const", asFUNCTIONPR(operator +, (const as::base_string &, const as::base_string &), as::base_string), asCALL_CDECL_OBJFIRST); assert( r >= 0 );

	// The string length can be accessed through methods or through virtual property
	// TODO: Register as size() for consistency with other types
#if AS_USE_ACCESSORS != 1
	r = engine->RegisterObjectMethod("string", "uint length() const", asFUNCTION(StringLength), asCALL_CDECL_OBJLAST); assert( r >= 0 );
#endif
	r = engine->RegisterObjectMethod("string", "void resize(uint)", asFUNCTION(StringResize), asCALL_CDECL_OBJLAST); assert( r >= 0 );
#if AS_USE_STLNAMES != 1 && AS_USE_ACCESSORS == 1
	// Don't register these if STL names is used, as they conflict with the method size()
	r = engine->RegisterObjectMethod("string", "uint get_length() const property", asFUNCTION(StringLength), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "void set_length(uint) property", asFUNCTION(StringResize), asCALL_CDECL_OBJLAST); assert( r >= 0 );
#endif
	// Need to use a wrapper on Mac OS X 10.7/XCode 4.3 and CLang/LLVM, otherwise the linker fails
//	r = engine->RegisterObjectMethod("string", "bool isEmpty() const", asMETHOD(string, empty), asCALL_THISCALL); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "bool isEmpty() const", asFUNCTION(StringIsEmpty), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	// Register the index operator, both as a mutator and as an inspector
	// Note that we don't register the operator[] directly, as it doesn't do bounds checking
	r = engine->RegisterObjectMethod("string", "uint8 &opIndex(uint)", asFUNCTION(StringCharAt), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "const uint8 &opIndex(uint) const", asFUNCTION(StringCharAt), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	// Automatic conversion from values
	r = engine->RegisterObjectMethod("string", "string &opAssign(double)", asFUNCTION(AssignDoubleToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(double)", asFUNCTION(AddAssignDoubleToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(double) const", asFUNCTION(AddStringDouble), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(double) const", asFUNCTION(AddDoubleString), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(float)", asFUNCTION(AssignFloatToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(float)", asFUNCTION(AddAssignFloatToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(float) const", asFUNCTION(AddStringFloat), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(float) const", asFUNCTION(AddFloatString), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(int64)", asFUNCTION(AssignInt64ToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(int64)", asFUNCTION(AddAssignInt64ToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(int64) const", asFUNCTION(AddStringInt64), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(int64) const", asFUNCTION(AddInt64String), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(uint64)", asFUNCTION(AssignUInt64ToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(uint64)", asFUNCTION(AddAssignUInt64ToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(uint64) const", asFUNCTION(AddStringUInt64), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(uint64) const", asFUNCTION(AddUInt64String), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(bool)", asFUNCTION(AssignBoolToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(bool)", asFUNCTION(AddAssignBoolToString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(bool) const", asFUNCTION(AddStringBool), asCALL_CDECL_OBJFIRST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(bool) const", asFUNCTION(AddBoolString), asCALL_CDECL_OBJLAST); assert( r >= 0 );

	// Utilities
	r = engine->RegisterObjectMethod("string", "string substr(uint start = 0, int count = -1) const", asFUNCTION(StringSubString), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "int findFirst(const string &in, uint start = 0) const", asFUNCTION(StringFindFirst), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "int findFirstOf(const string &in, uint start = 0) const", asFUNCTION(StringFindFirstOf), asCALL_CDECL_OBJLAST); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findFirstNotOf(const string &in, uint start = 0) const", asFUNCTION(StringFindFirstNotOf), asCALL_CDECL_OBJLAST); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findLast(const string &in, int start = -1) const", asFUNCTION(StringFindLast), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "int findLastOf(const string &in, int start = -1) const", asFUNCTION(StringFindLastOf), asCALL_CDECL_OBJLAST); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findLastNotOf(const string &in, int start = -1) const", asFUNCTION(StringFindLastNotOf), asCALL_CDECL_OBJLAST); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "void insert(uint pos, const string &in other)", asFUNCTION(StringInsert), asCALL_CDECL_OBJLAST); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "void erase(uint pos, int count = -1)", asFUNCTION(StringErase), asCALL_CDECL_OBJLAST); assert(r >= 0);


	r = engine->RegisterGlobalFunction("string formatInt(int64 val, const string &in options = \"\", uint width = 0)", asFUNCTION(formatInt), asCALL_CDECL); assert(r >= 0);
	r = engine->RegisterGlobalFunction("string formatUInt(uint64 val, const string &in options = \"\", uint width = 0)", asFUNCTION(formatUInt), asCALL_CDECL); assert(r >= 0);
	r = engine->RegisterGlobalFunction("string formatFloat(double val, const string &in options = \"\", uint width = 0, uint precision = 0)", asFUNCTION(formatFloat), asCALL_CDECL); assert(r >= 0);
	r = engine->RegisterGlobalFunction("int64 parseInt(const string &in, uint base = 10, uint &out byteCount = 0)", asFUNCTION(parseInt), asCALL_CDECL); assert(r >= 0);
	r = engine->RegisterGlobalFunction("uint64 parseUInt(const string &in, uint base = 10, uint &out byteCount = 0)", asFUNCTION(parseUInt), asCALL_CDECL); assert(r >= 0);
	r = engine->RegisterGlobalFunction("double parseFloat(const string &in, uint &out byteCount = 0)", asFUNCTION(parseFloat), asCALL_CDECL); assert(r >= 0);

#if AS_USE_STLNAMES == 1
	// Same as length
	r = engine->RegisterObjectMethod("string", "uint size() const", asFUNCTION(StringLength), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	// Same as isEmpty
	r = engine->RegisterObjectMethod("string", "bool empty() const", asFUNCTION(StringIsEmpty), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	// Same as findFirst
	r = engine->RegisterObjectMethod("string", "int find(const string &in, uint start = 0) const", asFUNCTION(StringFindFirst), asCALL_CDECL_OBJLAST); assert( r >= 0 );
	// Same as findLast
	r = engine->RegisterObjectMethod("string", "int rfind(const string &in, int start = -1) const", asFUNCTION(StringFindLast), asCALL_CDECL_OBJLAST); assert( r >= 0 );
#endif

	// TODO: Implement the following
	// findAndReplace - replaces a text found in the string
	// replaceRange - replaces a range of bytes in the string
	// multiply/times/opMul/opMul_r - takes the string and multiplies it n times, e.g. "-".multiply(5) returns "-----"
}

static void ConstructStringGeneric(asIScriptGeneric * gen)
{
	new (gen->GetObject()) as::string();
}

// The generic constructors from numbers and booleans ignore the value.
static void ConstructStringFromIntGeneric(asIScriptGeneric * gen)
{
	new (gen->GetObject()) as::string();
}

static void ConstructStringFromBoolGeneric(asIScriptGeneric * gen)
{
	new (gen->GetObject()) as::string();
}

static void ConstructStringFromFloatGeneric(asIScriptGeneric * gen)
{
	new (gen->GetObject()) as::string();
}

static void CopyConstructStringGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetArgObject(0));
	new (gen->GetObject()) as::string(*a);
}

static void DestructStringGeneric(asIScriptGeneric * gen)
{
	as::string * ptr = static_cast<as::string *>(gen->GetObject());
	ptr->as::string::~string();
}

static void AssignStringGeneric(asIScriptGeneric *gen)
{
	as::string * a = static_cast<as::string *>(gen->GetArgObject(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	*self = *a;
	gen->SetReturnAddress(self);
}

static void AddAssignStringGeneric(asIScriptGeneric *gen)
{
	as::string * a = static_cast<as::string *>(gen->GetArgObject(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	*self += *a;
	gen->SetReturnAddress(self);
}

static void StringEqualsGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	as::string * b = static_cast<as::string *>(gen->GetArgAddress(0));
	*(bool*)gen->GetAddressOfReturnLocation() = (*a == *b);
}

static void StringCmpGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	as::string * b = static_cast<as::string *>(gen->GetArgAddress(0));

	int cmp = 0;
	if( *a < *b ) cmp = -1;
	else if( *a > *b ) cmp = 1;

	*(int*)gen->GetAddressOfReturnLocation() = cmp;
}

static void StringAddGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	as::string * b = static_cast<as::string *>(gen->GetArgAddress(0));
	as::string ret_val = *a + *b;
	gen->SetReturnObject(&ret_val);
}

static void StringLengthGeneric(asIScriptGeneric * gen)
{
	as::string * self = static_cast<as::string *>(gen->GetObject());
	*static_cast<asUINT *>(gen->GetAddressOfReturnLocation()) = (asUINT)self->length();
}

static void StringIsEmptyGeneric(asIScriptGeneric * gen)
{
	as::string * self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<bool *>(gen->GetAddressOfReturnLocation()) = StringIsEmpty(*self);
}

static void StringResizeGeneric(asIScriptGeneric * gen)
{
	as::string * self = static_cast<as::string *>(gen->GetObject());
	self->resize(*static_cast<asUINT *>(gen->GetAddressOfArg(0)));
}

static void StringInsert_Generic(asIScriptGeneric *gen)
{
	as::string * self = static_cast<as::string *>(gen->GetObject());
	asUINT pos = gen->GetArgDWord(0);
	as::string *other = reinterpret_cast<as::string*>(gen->GetArgAddress(1));
	StringInsert(pos, *other, *self);
}

static void StringErase_Generic(asIScriptGeneric *gen)
{
	as::string * self = static_cast<as::string *>(gen->GetObject());
	asUINT pos = gen->GetArgDWord(0);
	int count = int(gen->GetArgDWord(1));
	StringErase(pos, count, *self);
}

static void StringFindFirst_Generic(asIScriptGeneric * gen)
{
	as::string *find = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT start = gen->GetArgDWord(1);
	as::string *self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<int *>(gen->GetAddressOfReturnLocation()) = StringFindFirst(*find, start, *self);
}

static void StringFindLast_Generic(asIScriptGeneric * gen)
{
	as::string *find = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT start = gen->GetArgDWord(1);
	as::string *self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<int *>(gen->GetAddressOfReturnLocation()) = StringFindLast(*find, start, *self);
}

static void StringFindFirstOf_Generic(asIScriptGeneric * gen)
{
	as::string *find = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT start = gen->GetArgDWord(1);
	as::string *self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<int *>(gen->GetAddressOfReturnLocation()) = StringFindFirstOf(*find, start, *self);
}

static void StringFindLastOf_Generic(asIScriptGeneric * gen)
{
	as::string *find = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT start = gen->GetArgDWord(1);
	as::string *self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<int *>(gen->GetAddressOfReturnLocation()) = StringFindLastOf(*find, start, *self);
}

static void StringFindFirstNotOf_Generic(asIScriptGeneric * gen)
{
	as::string *find = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT start = gen->GetArgDWord(1);
	as::string *self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<int *>(gen->GetAddressOfReturnLocation()) = StringFindFirstNotOf(*find, start, *self);
}

static void StringFindLastNotOf_Generic(asIScriptGeneric * gen)
{
	as::string *find = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT start = gen->GetArgDWord(1);
	as::string *self = reinterpret_cast<as::string *>(gen->GetObject());
	*reinterpret_cast<int *>(gen->GetAddressOfReturnLocation()) = StringFindLastNotOf(*find, start, *self);
}

static void formatInt_Generic(asIScriptGeneric * gen)
{
	asINT64 val = gen->GetArgQWord(0);
	as::string *options = reinterpret_cast<as::string*>(gen->GetArgAddress(1));
	asUINT width = gen->GetArgDWord(2);
	new(gen->GetAddressOfReturnLocation()) as::string(formatInt(val, *options, width));
}

static void formatUInt_Generic(asIScriptGeneric * gen)
{
	asQWORD val = gen->GetArgQWord(0);
	as::string *options = reinterpret_cast<as::string*>(gen->GetArgAddress(1));
	asUINT width = gen->GetArgDWord(2);
	new(gen->GetAddressOfReturnLocation()) as::string(formatUInt(val, *options, width));
}

static void formatFloat_Generic(asIScriptGeneric *gen)
{
	double val = gen->GetArgDouble(0);
	as::string *options = reinterpret_cast<as::string*>(gen->GetArgAddress(1));
	asUINT width = gen->GetArgDWord(2);
	asUINT precision = gen->GetArgDWord(3);
	new(gen->GetAddressOfReturnLocation()) as::string(formatFloat(val, *options, width, precision));
}

static void parseInt_Generic(asIScriptGeneric *gen)
{
	as::string *str = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT base = gen->GetArgDWord(1);
	asUINT *byteCount = reinterpret_cast<asUINT*>(gen->GetArgAddress(2));
	gen->SetReturnQWord(parseInt(*str,base,byteCount));
}

static void parseUInt_Generic(asIScriptGeneric *gen)
{
	as::string *str = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT base = gen->GetArgDWord(1);
	asUINT *byteCount = reinterpret_cast<asUINT*>(gen->GetArgAddress(2));
	gen->SetReturnQWord(parseUInt(*str, base, byteCount));
}

static void parseFloat_Generic(asIScriptGeneric *gen)
{
	as::string *str = reinterpret_cast<as::string*>(gen->GetArgAddress(0));
	asUINT *byteCount = reinterpret_cast<asUINT*>(gen->GetArgAddress(1));
	gen->SetReturnDouble(parseFloat(*str,byteCount));
}

static void StringCharAtGeneric(asIScriptGeneric * gen)
{
	unsigned int index = gen->GetArgDWord(0);
	as::string * self = static_cast<as::string *>(gen->GetObject());

	if (index >= self->size())
	{
		// Set a script exception
		asIScriptContext *ctx = asGetActiveContext();
		ctx->SetException("Out of range");

		gen->SetReturnAddress(0);
	}
	else
	{
		gen->SetReturnAddress(&(self->operator [](index)));
	}
}

static void AssignInt2StringGeneric(asIScriptGeneric *gen)
{
	asINT64 *a = static_cast<asINT64*>(gen->GetAddressOfArg(0));
	as::string *self = static_cast<as::string*>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self = sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AssignUInt2StringGeneric(asIScriptGeneric *gen)
{
	asQWORD *a = static_cast<asQWORD*>(gen->GetAddressOfArg(0));
	as::string *self = static_cast<as::string*>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self = sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AssignDouble2StringGeneric(asIScriptGeneric *gen)
{
	double *a = static_cast<double*>(gen->GetAddressOfArg(0));
	as::string *self = static_cast<as::string*>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self = sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AssignFloat2StringGeneric(asIScriptGeneric *gen)
{
	float *a = static_cast<float*>(gen->GetAddressOfArg(0));
	as::string *self = static_cast<as::string*>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self = sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AssignBool2StringGeneric(asIScriptGeneric *gen)
{
	bool *a = static_cast<bool*>(gen->GetAddressOfArg(0));
	as::string *self = static_cast<as::string*>(gen->GetObject());
	stringstream sstr;
	sstr << (*a ? "true" : "false");
	*self = sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AddAssignDouble2StringGeneric(asIScriptGeneric * gen)
{
	double * a = static_cast<double *>(gen->GetAddressOfArg(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self += sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AddAssignFloat2StringGeneric(asIScriptGeneric * gen)
{
	float * a = static_cast<float *>(gen->GetAddressOfArg(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self += sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AddAssignInt2StringGeneric(asIScriptGeneric * gen)
{
	asINT64 * a = static_cast<asINT64 *>(gen->GetAddressOfArg(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self += sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AddAssignUInt2StringGeneric(asIScriptGeneric * gen)
{
	asQWORD * a = static_cast<asQWORD *>(gen->GetAddressOfArg(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a;
	*self += sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AddAssignBool2StringGeneric(asIScriptGeneric * gen)
{
	bool * a = static_cast<bool *>(gen->GetAddressOfArg(0));
	as::string * self = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << (*a ? "true" : "false");
	*self += sstr.str().c_str();
	gen->SetReturnAddress(self);
}

static void AddString2DoubleGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	double * b = static_cast<double *>(gen->GetAddressOfArg(0));
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddString2FloatGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	float * b = static_cast<float *>(gen->GetAddressOfArg(0));
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddString2IntGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	asINT64 * b = static_cast<asINT64 *>(gen->GetAddressOfArg(0));
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddString2UIntGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	asQWORD * b = static_cast<asQWORD *>(gen->GetAddressOfArg(0));
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddString2BoolGeneric(asIScriptGeneric * gen)
{
	as::string * a = static_cast<as::string *>(gen->GetObject());
	bool * b = static_cast<bool *>(gen->GetAddressOfArg(0));
	stringstream sstr;
	sstr << *a << (*b ? "true" : "false");
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddDouble2StringGeneric(asIScriptGeneric * gen)
{
	double* a = static_cast<double *>(gen->GetAddressOfArg(0));
	as::string * b = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddFloat2StringGeneric(asIScriptGeneric * gen)
{
	float* a = static_cast<float *>(gen->GetAddressOfArg(0));
	as::string * b = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddInt2StringGeneric(asIScriptGeneric * gen)
{
	asINT64* a = static_cast<asINT64 *>(gen->GetAddressOfArg(0));
	as::string * b = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddUInt2StringGeneric(asIScriptGeneric * gen)
{
	asQWORD* a = static_cast<asQWORD *>(gen->GetAddressOfArg(0));
	as::string * b = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << *a << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void AddBool2StringGeneric(asIScriptGeneric * gen)
{
	bool* a = static_cast<bool *>(gen->GetAddressOfArg(0));
	as::string * b = static_cast<as::string *>(gen->GetObject());
	stringstream sstr;
	sstr << (*a ? "true" : "false") << *b;
	as::string ret_val = sstr.str().c_str();
	gen->SetReturnObject(&ret_val);
}

static void StringSubString_Generic(asIScriptGeneric *gen)
{
	// Get the arguments
	as::string *str   = (as::string*)gen->GetObject();
	asUINT  start = *(int*)gen->GetAddressOfArg(0);
	int     count = *(int*)gen->GetAddressOfArg(1);

	// Return the substring
	new(gen->GetAddressOfReturnLocation()) as::string(StringSubString(start, count, *str));
}

void RegisterStdString_Generic(asIScriptEngine *engine)
{
	int r = 0;
	UNUSED_VAR(r);

	// Register the string type
#line 1356
	r = engine->RegisterObjectType("string", sizeof(as::string), asOBJ_VALUE | asOBJ_APP_CLASS_CDAK); assert( r >= 0 );

	r = engine->RegisterStringFactory("string", GetStdStringFactorySingleton());

	// Register the object operator overloads
#line 1361
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f()",                    asFUNCTION(ConstructStringGeneric), asCALL_GENERIC); assert( r >= 0 );
#line 1363
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const int)",           asFUNCTION(ConstructStringFromIntGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const bool)",          asFUNCTION(ConstructStringFromBoolGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const float)",         asFUNCTION(ConstructStringFromFloatGeneric), asCALL_GENERIC); assert( r >= 0 );
#line 1367
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_CONSTRUCT,  "void f(const string &in)",    asFUNCTION(CopyConstructStringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectBehaviour("string", asBEHAVE_DESTRUCT,   "void f()",                    asFUNCTION(DestructStringGeneric),  asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAssign(const string &in)", asFUNCTION(AssignStringGeneric),    asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(const string &in)", asFUNCTION(AddAssignStringGeneric), asCALL_GENERIC); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "bool opEquals(const string &in) const", asFUNCTION(StringEqualsGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "int opCmp(const string &in) const", asFUNCTION(StringCmpGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(const string &in) const", asFUNCTION(StringAddGeneric), asCALL_GENERIC); assert( r >= 0 );

	// Register the object methods
#if AS_USE_ACCESSORS != 1
	r = engine->RegisterObjectMethod("string", "uint length() const", asFUNCTION(StringLengthGeneric), asCALL_GENERIC); assert( r >= 0 );
#endif
	r = engine->RegisterObjectMethod("string", "void resize(uint)",   asFUNCTION(StringResizeGeneric), asCALL_GENERIC); assert( r >= 0 );
#if AS_USE_STLNAMES != 1 && AS_USE_ACCESSORS == 1
	r = engine->RegisterObjectMethod("string", "uint get_length() const property", asFUNCTION(StringLengthGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "void set_length(uint) property", asFUNCTION(StringResizeGeneric), asCALL_GENERIC); assert( r >= 0 );
#endif
	r = engine->RegisterObjectMethod("string", "bool isEmpty() const", asFUNCTION(StringIsEmptyGeneric), asCALL_GENERIC); assert( r >= 0 );

	// Register the index operator, both as a mutator and as an inspector
	r = engine->RegisterObjectMethod("string", "uint8 &opIndex(uint)", asFUNCTION(StringCharAtGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "const uint8 &opIndex(uint) const", asFUNCTION(StringCharAtGeneric), asCALL_GENERIC); assert( r >= 0 );

	// Automatic conversion from values
	r = engine->RegisterObjectMethod("string", "string &opAssign(double)", asFUNCTION(AssignDouble2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(double)", asFUNCTION(AddAssignDouble2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(double) const", asFUNCTION(AddString2DoubleGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(double) const", asFUNCTION(AddDouble2StringGeneric), asCALL_GENERIC); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(float)", asFUNCTION(AssignFloat2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(float)", asFUNCTION(AddAssignFloat2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(float) const", asFUNCTION(AddString2FloatGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(float) const", asFUNCTION(AddFloat2StringGeneric), asCALL_GENERIC); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(int64)", asFUNCTION(AssignInt2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(int64)", asFUNCTION(AddAssignInt2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(int64) const", asFUNCTION(AddString2IntGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(int64) const", asFUNCTION(AddInt2StringGeneric), asCALL_GENERIC); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(uint64)", asFUNCTION(AssignUInt2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(uint64)", asFUNCTION(AddAssignUInt2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(uint64) const", asFUNCTION(AddString2UIntGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(uint64) const", asFUNCTION(AddUInt2StringGeneric), asCALL_GENERIC); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string &opAssign(bool)", asFUNCTION(AssignBool2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string &opAddAssign(bool)", asFUNCTION(AddAssignBool2StringGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd(bool) const", asFUNCTION(AddString2BoolGeneric), asCALL_GENERIC); assert( r >= 0 );
	r = engine->RegisterObjectMethod("string", "string opAdd_r(bool) const", asFUNCTION(AddBool2StringGeneric), asCALL_GENERIC); assert( r >= 0 );

	r = engine->RegisterObjectMethod("string", "string substr(uint start = 0, int count = -1) const", asFUNCTION(StringSubString_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findFirst(const string &in, uint start = 0) const", asFUNCTION(StringFindFirst_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findFirstOf(const string &in, uint start = 0) const", asFUNCTION(StringFindFirstOf_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findFirstNotOf(const string &in, uint start = 0) const", asFUNCTION(StringFindFirstNotOf_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findLast(const string &in, int start = -1) const", asFUNCTION(StringFindLast_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findLastOf(const string &in, int start = -1) const", asFUNCTION(StringFindLastOf_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "int findLastNotOf(const string &in, int start = -1) const", asFUNCTION(StringFindLastNotOf_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "void insert(uint pos, const string &in other)", asFUNCTION(StringInsert_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterObjectMethod("string", "void erase(uint pos, int count = -1)", asFUNCTION(StringErase_Generic), asCALL_GENERIC); assert(r >= 0);


	r = engine->RegisterGlobalFunction("string formatInt(int64 val, const string &in options = \"\", uint width = 0)", asFUNCTION(formatInt_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterGlobalFunction("string formatUInt(uint64 val, const string &in options = \"\", uint width = 0)", asFUNCTION(formatUInt_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterGlobalFunction("string formatFloat(double val, const string &in options = \"\", uint width = 0, uint precision = 0)", asFUNCTION(formatFloat_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterGlobalFunction("int64 parseInt(const string &in, uint base = 10, uint &out byteCount = 0)", asFUNCTION(parseInt_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterGlobalFunction("uint64 parseUInt(const string &in, uint base = 10, uint &out byteCount = 0)", asFUNCTION(parseUInt_Generic), asCALL_GENERIC); assert(r >= 0);
	r = engine->RegisterGlobalFunction("double parseFloat(const string &in, uint &out byteCount = 0)", asFUNCTION(parseFloat_Generic), asCALL_GENERIC); assert(r >= 0);
}

void RegisterStdString(asIScriptEngine * engine)
{
	if (strstr(asGetLibraryOptions(), "AS_MAX_PORTABILITY"))
		RegisterStdString_Generic(engine);
	else
		RegisterStdString_Native(engine);
}

END_AS_NAMESPACE





//==============================================================================
#include "Stringify.h"

//==============================================================================
std::string Stringify::Int(int x) {
    std::ostringstream o;

    o << x;

    return o.str();
}

//------------------------------------------------------------------------------
std::string Stringify::Char(char* x) {
    std::string o = x;

    return o;
}

//------------------------------------------------------------------------------
std::string Stringify::Float(float x) {
    std::ostringstream o;

    o << x;

    return o.str();
}

//------------------------------------------------------------------------------
std::string Stringify::Double(double x) {
    std::ostringstream o;

    o << x;

    return o.str();
}

//==============================================================================
int Stringify::ToInt(const std::string& String) {
	if(String == "") return 0;

	int X;
	std::stringstream strStream(String);

	strStream >> X;

	return X;
}

//------------------------------------------------------------------------------
float Stringify::ToFloat(const std::string& String) {
	if(String == "") return 0;

	float X;
	std::stringstream strStream(String);

	strStream >> X;

	return X;
}

//------------------------------------------------------------------------------
double Stringify::ToDouble(const std::string& String) {
	if(String == "") return 0;

	double X;
	std::stringstream strStream(String);

	strStream >> X;

	return X;
}

//==============================================================================
//http://www.infernodevelopment.com/perfect-c-string-explode-split
std::vector<std::string> Stringify::Explode(std::string str, const std::string& separator) {
    std::vector<std::string> Results;

    int found;
    found = str.find_first_of(separator);
    while(found != std::string::npos){
        if(found > 0){
            Results.push_back(str.substr(0,found));
        }

        str = str.substr(found+1);
        found = str.find_first_of(separator);
    }

    if(str.length() > 0){
        Results.push_back(str);
    }

    return Results;
}

//==============================================================================

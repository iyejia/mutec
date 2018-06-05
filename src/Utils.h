#ifndef MUTEC_UTILS_HEADER_
#define MUTEC_UTILS_HEADER_

#include <string>
#include <list>
#include <fstream>
#include <map>
#include <src/Constants.h>

class MuTeCUtils{
public:
    
    static int toInteger(std::string s);

    static bool hasQuality(const unsigned int& quality, const unsigned int& qualityIdentifier);

    static void initialiseOperatorTypeMap(std::map<std::string, unsigned int>& operatorTypeMap);

    static void initialiseMutantOperatorMap(std::map<std::string, std::list<std::string>>& mutantOperatorMap);

    static std::string colourString(const std::string& str, const char* const colour);

    static void resolveTemplate(const std::string& templateStr, int &id, std::string& operatorStr);

    static int replaceStringPattern(std::string& originalString, const std::string& pattern, const std::string& value);

    static std::list<std::string> generateMutant(const std::string& filename, std::map<int, std::string>& mutableOperatorTemplates, const std::string& filePath);

    static int runCommand(const std::string& command);

    static int alert(const std::string& message, const char* const coulor, const int& msg_type = message_type::STD);

};

#endif
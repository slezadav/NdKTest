#ifndef STRCONV_H
#define STRCONV_H
#include <string>
using namespace std;
 string toCpp(JNIEnv* env,jstring javaString);
 jstring toJava(JNIEnv* env,string cppString);
 const char * toPtr(string cppString);
 const char * toPtr(JNIEnv* env,jstring javaString);
#endif

#include <jni.h>
#include <strConv.h>

string toCpp(JNIEnv* env,jstring javaString){
      const char *nativeString = env->GetStringUTFChars(javaString, 0);
      env->ReleaseStringUTFChars(javaString, nativeString);
      string result(nativeString);
      return result;
      }

jstring toJava(JNIEnv* env,string cppString){
      return env->NewStringUTF((const char* )cppString.c_str());
      }

const char * toPtr(string cppString){
      return cppString.c_str();
      }

const char * toPtr(JNIEnv* env,jstring javaString){
      const char *nativeString = env->GetStringUTFChars(javaString, 0);
      env->ReleaseStringUTFChars(javaString, nativeString);
      return nativeString;
      }

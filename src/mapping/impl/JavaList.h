#ifndef PHANTOM_JAVALIST_H
#define PHANTOM_JAVALIST_H

#include "../AbstractClass.h"

class JavaList : public AbstractClass
{
public:
	JavaList(Phantom *phantom, jobject list);
	
	jobject get(jint index);
	int size();
	jobjectArray toArray();
private:
	jmethodID mdGet;
	jmethodID mdSize;
	jmethodID mdToArray;

	jobject list;
};

#endif //PHANTOM_JAVALIST_H

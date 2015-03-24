#ifndef ARTIFACT_H
#define ARTIFACT_H

#include "Permanent.h"

class Artifact : public virtual Permanent
{
public:
	Artifact(int m, std::string t);
	Artifact();
	~Artifact();

	void print();

	std::string type;

private:
	


};
#endif;
/**
 * @author Azat Khuzhin
 *
 * Heat equation analyzer
 */

#ifndef _ANALYZER_H
#define	_ANALYZER_H

#include "../main.h"

class Analyzer {
	public:
		Analyzer();
		Analyzer(const Analyzer& orig);
		virtual ~Analyzer();
};

#endif /* _ANALYZER_H */
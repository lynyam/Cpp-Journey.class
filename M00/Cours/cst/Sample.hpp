#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample {
    public :
		int const port;
		char p;
        Sample(char p, int const port);
        ~Sample(void);
		void fct(void) const;
};

#endif

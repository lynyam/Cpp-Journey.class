#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample {
    public :
		int port;
        Sample(int port);
        ~Sample(void);
		void fct(void) const;
};

#endif

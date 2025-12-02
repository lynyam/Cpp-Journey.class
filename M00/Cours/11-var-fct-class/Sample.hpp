#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample {
    public :
        Sample(void);
        ~Sample(void);
		static int getNbrInst(void);

	private:
		static int _nbrInst;
		int _nbrInst;
};

#endif

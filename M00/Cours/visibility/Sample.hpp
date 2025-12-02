#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample {
    public :
		int port;
        Sample(void);
        ~Sample(void);
		void pub_fct(void) const;

	private:
		int _pwd;
		void _priv_creat(void) const;
};

#endif

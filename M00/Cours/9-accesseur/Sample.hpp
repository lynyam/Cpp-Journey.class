#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample {
    public :
        Sample(void);
        ~Sample(void);
		int getPwd(void) const;
		void setPwd(int pwd);

	private:
		int _pwd;
};

#endif

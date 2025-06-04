#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

//! There is a but all attributes are by default private if is not publicly writen.
struct Sample1 
{
	
	int foo;

	Sample1(void);
	~Sample1(void);

	void	bar(void) const;
};

#endif
#ifndef SAMPLE_STRUCTURE_H
# define SAMPLE_STRUCTURE_H


//! in a structure all attributes are all public by default.
struct Sample2
{
	
	int foo;

	Sample2(void);
	~Sample2(void);

	void	bar(void) const;
};

#endif

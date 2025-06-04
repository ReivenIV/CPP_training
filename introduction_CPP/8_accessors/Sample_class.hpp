#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:

		Sample(void);
		~Sample(void);

		void	handler_set_foo(int v);
		int		getFoo(void) const;
		
		private :
		int		_foo;
		bool	_setFoo(int v);

};

#endif
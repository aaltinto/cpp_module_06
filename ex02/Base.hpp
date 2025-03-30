#pragma once

class Base
{
	protected:

	public:
		virtual ~Base(void);

		Base *genereate(void);
		void idenitify(Base* p);
		void idenitify(Base& p);
};


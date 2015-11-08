#ifndef _BASE_H_
#define _BASE_H_


class Base {
	public:
		void pub_mem();
	protected:
		void prot_mem();
	private:
		char priv_mem();
};

class Pub_Derv : public Base{
};

class Prot_Derv : protected Base{
};

class Priv_Derv: private Base{

};

#endif

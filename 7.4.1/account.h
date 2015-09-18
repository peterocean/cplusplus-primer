#ifndef _ACCOUNT_H_ 
#define _ACCOUNT_H_


class Account{
	public:
		typedef int  Money;
		Money balance() const;
	private:
		Money bal;
	public:
};

#endif

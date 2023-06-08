
#ifndef __fsm_H
#define __fsm_H

#include <list>
#include "atomic.h"     // class Atomic

class fsm : public Atomic
{
public:
	fsm( const string &name = "fsm" );					//Default constructor

	virtual string className() const ;
protected:
	Model &initFunction();
	Model &externalFunction( const ExternalMessage & );
	Model &internalFunction( const InternalMessage & );
	Model &outputFunction( const InternalMessage & );
        static int lst,ax,errIn;
	//  static string slst;
private:
	const Port &in,&transin;
	Port &out, &errout,&acting;
	Time demoTime;

        double evId;
        int initSt,currentSt,tran,action;
        string time,cst,init,llst;
        string s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
        string a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
        int st0,st1,st2,st3,st4,st5,st6,st7,st8,st9,st10;
        int act0,act1,act2,act3,act4,act5,act6,act7,act8,act9,act10;
	// int errIn;
        bool a,b,c,d,e,f,g,h,i,j,k;
        bool l,m,n,o,p,q,r,s,t,u,v;

};	// class fsm

// ** inline ** //
inline
string fsm::className() const
{
	return "fsm" ;
}

#endif   //__fsm_H


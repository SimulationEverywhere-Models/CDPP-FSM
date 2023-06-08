/** include files **/
#include "fsm.h"      // class fsm
#include "message.h"
#include "mainsimu.h"

/** public functions **/

/*******************************************************************
* Function Name: fsm
********************************************************************/
fsm::fsm( const string &name )
: Atomic( name )
, in( addInputPort( "in" ) )
, transin( addInputPort( "transin" ) )
, out( addOutputPort( "out" ) )
, errout( addOutputPort( "errout" ) )
, acting( addOutputPort( "acting" ) )
  , demoTime( 0, 0,0,2 )
{

      if (MainSimulator::Instance().existsParameter( description(), "initState" ) )
	  {
	      init=MainSimulator::Instance().getParameter( description(), "initState" ) ;
	      if( init != "" )
                initSt = str2Int(init);
              else
                initSt=0;
       }
//get current state number
    string cst(MainSimulator::Instance().getParameter( description(), "stateNo" ));
      currentSt = str2Int(cst);


      if (MainSimulator::Instance().existsParameter( description(), "stateTime" ) )
    	 time=MainSimulator::Instance().getParameter( description(), "stateTime" ) ;
    	 if( time != "" )
           demoTime = time ;

//get the transition rules
      if (MainSimulator::Instance().existsParameter( description(), "state0" ) )
	{
    	     s0=MainSimulator::Instance().getParameter( description(), "state0" ) ;
             st0 = str2Int(s0);
	}
       else
	     s0="";

      if (MainSimulator::Instance().existsParameter( description(), "state1" ) )
    	{
              s1=MainSimulator::Instance().getParameter( description(), "state1" ) ;
              st1 = str2Int(s1)  ;
        }
        else
	      s1="";

      if (MainSimulator::Instance().existsParameter( description(), "state2" ) )
	  {
              s2=MainSimulator::Instance().getParameter( description(), "state2" ) ;
              st2 = str2Int(s2)  ;
	   }
       else
         s2="";

      if (MainSimulator::Instance().existsParameter( description(), "state3" ) )
	  {
    	      s3=MainSimulator::Instance().getParameter( description(), "state3" ) ;
              st3 = str2Int(s3)  ;
	   }
       else
	     s3="";

      if (MainSimulator::Instance().existsParameter( description(), "state4" ) )
	{
    	     s4=MainSimulator::Instance().getParameter( description(), "state4" ) ;
             st4 = str2Int(s4)  ;
	}
        else
	     s4="";

      if (MainSimulator::Instance().existsParameter( description(), "state5" ) )
	{
   	     s5=MainSimulator::Instance().getParameter( description(), "state5" ) ;
             st5 = str2Int(s5)  ;
	}
       else
	    s5="";

      if (MainSimulator::Instance().existsParameter( description(), "state6" ) )
	  {
    	 s6=MainSimulator::Instance().getParameter( description(), "state6" ) ;
         st6 = str2Int(s6)  ;
	   }
       else
         s6="";

      if (MainSimulator::Instance().existsParameter( description(), "state7" ) )
	  {
    	 s7=MainSimulator::Instance().getParameter( description(), "state7" ) ;
         st7 = str2Int(s7)  ;
	   }
       else
        s7="";

      if (MainSimulator::Instance().existsParameter( description(), "state8" ) )
	{
    	 s8=MainSimulator::Instance().getParameter( description(), "state8" ) ;
         st8 = str2Int(s8)  ;
	}
        else
	 s8="";

      if (MainSimulator::Instance().existsParameter( description(), "state9" ) )
	{
   	     s9=MainSimulator::Instance().getParameter( description(), "state9" ) ;
             st9 = str2Int(s9)  ;
	}
       else
	s9="";
      if (MainSimulator::Instance().existsParameter( description(), "state10" ) )
	{
   	     s10=MainSimulator::Instance().getParameter( description(), "state10" ) ;
             st10 = str2Int(s10)  ;
	}
       else
	s10="";




      if (MainSimulator::Instance().existsParameter( description(), "state0act" ) )
	{
    	     a0=MainSimulator::Instance().getParameter( description(), "state0act" ) ;
             act0 = str2Int(a0);
	}
       else
	     a0="";

      if (MainSimulator::Instance().existsParameter( description(), "state1act" ) )
    	{
              a1=MainSimulator::Instance().getParameter( description(), "state1act" ) ;
              act1 = str2Int(a1)  ;
        }
        else
	      a1="";

      if (MainSimulator::Instance().existsParameter( description(), "state2-act" ) )
	  {
              a2=MainSimulator::Instance().getParameter( description(), "state2-act" ) ;
              act2 = str2Int(a2)  ;
	   }
       else
         a2="";

      if (MainSimulator::Instance().existsParameter( description(), "state3act" ) )
	  {
    	      a3=MainSimulator::Instance().getParameter( description(), "state3act" ) ;
              act3 = str2Int(a3)  ;
	   }
       else
	     a3="";

      if (MainSimulator::Instance().existsParameter( description(), "state4act" ) )
	{
    	     a4=MainSimulator::Instance().getParameter( description(), "state4act" ) ;
             act4 = str2Int(a4)  ;
	}
        else
	     a4="";

      if (MainSimulator::Instance().existsParameter( description(), "state5act" ) )
	{
   	     a5=MainSimulator::Instance().getParameter( description(), "state5act" ) ;
             act5 = str2Int(a5)  ;
	}
       else
	    a5="";

      if (MainSimulator::Instance().existsParameter( description(), "state6act" ) )
	  {
    	 a6=MainSimulator::Instance().getParameter( description(), "state6act" ) ;
         act6 = str2Int(a6)  ;
	   }
       else
         a6="";

      if (MainSimulator::Instance().existsParameter( description(), "state7act" ) )
	  {
    	 a7=MainSimulator::Instance().getParameter( description(), "state7act" ) ;
         act7 = str2Int(a7)  ;
	   }
       else
        a7="";

      if (MainSimulator::Instance().existsParameter( description(), "state8act" ) )
	{
    	 a8=MainSimulator::Instance().getParameter( description(), "state8act" ) ;
         act8 = str2Int(a8)  ;
	}
        else
	 a8="";

      if (MainSimulator::Instance().existsParameter( description(), "state9act" ) )
	{
   	     a9=MainSimulator::Instance().getParameter( description(), "state9act" ) ;
             act9 = str2Int(a9)  ;
	}
       else
	a9="";
      if (MainSimulator::Instance().existsParameter( description(), "state10act" ) )
	{
   	     a10=MainSimulator::Instance().getParameter( description(), "state10act" ) ;
             act10 = str2Int(a10)  ;
	}
       else
	a10="";





}

/*******************************************************************
* Function Name: initFunction
********************************************************************/
Model &fsm::initFunction()
{
        errIn=0;
	return *this ;
}

//initialize static variables.
int fsm::lst=0;
int fsm::ax=0;
int fsm::errIn=0;

/*******************************************************************
* Function Name: externalFunction
********************************************************************/
Model &fsm::externalFunction( const ExternalMessage &msg )
{

	if (msg.port() == transin )
	  {
	     if (errIn==1)
	      {
	         tran=0; //invalid input, stop!
		
	      }
             else
	       tran=1;

                return *this;
	 }

	if( msg.port() == in)
	{
            evId=msg.value();
	 
	    if (initSt==1)
	    {
                tran=0;
                holdIn( active, demoTime);

		//  initSt=0;
	        return *this;
	    }
   

           if (tran==1)
	    {        	    
                   //active rules
	    
       	        a=s0!="" && lst==0 && st0==evId;
	        b=s1!="" && lst==1 && st1==evId;
	        c=s2!="" && lst==2 && st2==evId;
	        d=s3!="" && lst==3 && st3==evId;
	        e=s4!="" && lst==4 && st4==evId;
	        f=s5!="" && lst==5 && st5==evId;
       	        g=s6!="" && lst==6 && st6==evId; 
	        h=s7!="" && lst==7 && st7==evId;
	        i=s8!="" && lst==8 && st8==evId;
	        j=s9!="" && lst==9 && st9==evId;
	        k=s10!="" && lst==10 && st10==evId;
                
		// if (a||b||c||d||e||f||g||h||i||j||k)
		//  ax=1;              
 //action rules
  
       	        l=a0!="" && lst==0 && act0==evId;
	        m=a1!="" && lst==1 && act1==evId;
	        n=a2!="" && lst==2 && act2==evId;
	        o=a3!="" && lst==3 && act3==evId;
	        p=a4!="" && lst==4 && act4==evId;
	        q=a5!="" && lst==5 && act5==evId;
       	        r=a6!="" && lst==6 && act6==evId; 
	        s=a7!="" && lst==7 && act7==evId;
	        t=a8!="" && lst==8 && act8==evId;
	        u=a9!="" && lst==9 && act9==evId;
	        v=a10!="" && lst==10 && act10==evId;

            if (currentSt==0 && (a||b||c||d||e||f||g||h||i||j||k))
	      {
                    tran=0;
		    ax=1;
                    initSt=0;
		    //           sendOutput( msg.time(), errout, ax ) ;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;                
                        
                    this->holdIn( active, demoTime);
                    return *this;
	         }

           else if (currentSt==1 && (a||b||c||d||e||f||g||h||i||j||k))
	      {
                   tran=0; 
		    ax=1;    
		    //        sendOutput( msg.time(), errout, ax ) ;    
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                   this-> holdIn( active, demoTime);
                    return *this;
	       }


           else if (currentSt==2 && (a||b||c||d||e||f||g||h||i||j||k))
            {
		    tran=0;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                    this->holdIn( active, demoTime);

	       }

           else if (currentSt==3 && (a||b||c||d||e||f||g||h||i||j||k))
            {
	       	    tran=0 ;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                    holdIn( active, demoTime);
	       }

           else if (currentSt==4 && (a||b||c||d||e||f||g||h||i||j||k))
            {
		    tran=0;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;              
                    holdIn( active, demoTime);

	       }

          else if (currentSt==5 && (a||b||c||d||e||f||g||h||i||j||k))
            {
                	tran=0;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                    holdIn( active, demoTime);

	       }

           else if (currentSt==6 && (a||b||c||d||e||f||g||h||i||j||k))
            {
	       	    tran=0;
                    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                    holdIn( active, demoTime);
	       }

           else if (currentSt==7 && (a||b||c||d||e||f||g||h||i||j||k)) 
            {
		    tran=0;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                    holdIn( active, demoTime);

	       }

          else if (currentSt==8 && (a||b||c||d||e||f||g||h||i||j||k))
            {
        		tran=0;
                        ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;                  
                    holdIn( active, demoTime);

	       }

          else if (currentSt==9 && (a||b||c||d||e||f||g||h||i||j||k))
            {
                	tran=0;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                    holdIn( active, demoTime);

	       }

          else if (currentSt==10 && (a||b||c||d||e||f||g||h||i||j||k))
            {
        		tran=0;
		    ax=1;
                    if (l||m||n||o||p||q||r||s||t||u||v)
		      action=1;
                  
                    holdIn( active, demoTime);

	       }
	
	    /*   
     else if(! (a||b||c||d||e||f||g||h||i||j||k) &&currentSt==lst)
	       {
		//   sendOutput( msg.time(), errout, ax ) ;
			//errIn=1;
                        ax=0;
		        holdIn( active, demoTime);
	        }
	    */
	   }
        }
        return *this;
}

/*******************************************************************
* Function Name: internalFunction
********************************************************************/
Model &fsm::internalFunction( const InternalMessage & )
{
	passivate();
	return *this ;
}

/*******************************************************************
* Function Name: outputFunction
********************************************************************/
Model &fsm::outputFunction( const InternalMessage &msg )
{
      if (initSt==1 &&ax==0)
	{
	 initSt=0;
         sendOutput( msg.time(), out, evId );       
	}
      else if (ax==0) 
	{
            errIn=1;
            sendOutput( msg.time(), errout, evId ) ;
	}
      else 
	
        sendOutput( msg.time(), out, evId );
        ax=0;
 
	
   if (action==1)
    {
      sendOutput( msg.time(), acting, 1) ;
      action=0;
    } 
 
   lst=currentSt;

   return *this ;
}


















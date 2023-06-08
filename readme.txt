1. Unzip the zip the fsm.zip to CD++ fold, and override the register.cpp and makefile.

2. Run the makefile

3. Execute every example according to the xxx.bat.

4 .ma file building rules:  

a) assign a initial state using the parameter  "initState", usually the state 
zero should be a initial state.

b) Specify the state number using the parameter "stateNo",  according to 
the encoding result.

c) Specify the state transition rules for every state, using the parameter 
"state+i "event+j",  This combination mean if last  active state is state No 1,
 and present input events is event No j, then  
This  state will be active.  For example,  in a FSM,  the state be 
specified will be active if  the last active state is state No 1, under the 
No 2 input event, then the rule is: state1 : 2.  

d) Specify the action rule with the parameter "state+k+act" : n.  The 
state+k+act mean if the last active state is state No k when present is 
changed to active, then an action No n. 

e) The output result is state-event pair, the active state with the input 
event that make it active. 

f) Currently this library is support ten states at most, but extension is 
easily  implemented.

5 .ev file building rules:  

a) The time interval between events must larger than 2 ms. You can 
specify  another time using parameter "stateTime".

b) Input events must be valid according to the FSM events-route. 
Otherwise, the valid input will be ingnored or an error input message 
will be given and the FSM goes to initial state (state0).

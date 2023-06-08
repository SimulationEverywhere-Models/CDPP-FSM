[top]
components : even@fsm odd@fsm
out : evenSt  oddSt EerrInput OerrInput action
in : in
	
Link : in in@even
Link : in in@odd

Link : out@even transin@even
Link : out@even transin@odd

Link : out@odd transin@even
Link : out@odd transin@odd

link : out@even evenSt
Link : out@odd oddSt
link : errout@even EerrInput
Link : errout@odd  OerrInput
link : acting@even action
Link : acting@odd  action


[even]
initState : 1
stateNo : 0
state0 : 0
state1 : 1

[odd]
stateNo : 1
state0 : 1
state1 : 0

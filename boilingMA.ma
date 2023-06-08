[top]
components : cold@fsm heating@fsm boiling@fsm cooling@fsm
out : cold heating boiling cooling errIn action
in : in

Link : in in@cold
Link : in in@heating
Link : in in@boiling
Link : in in@cooling

Link : out@cold transin@heating
Link : out@heating transin@boiling
Link : out@heating transin@heating

Link : out@cooling transin@cooling
Link : out@cooling transin@heating
Link : out@boiling transin@cooling
Link : out@boiling transin@boiling

Link : out@heating transin@cooling
Link : out@cooling transin@cold

Link : out@heating heating
Link : errout@heating errIn
Link : 
Link : out@boiling boiling
Link : errout@boiling errIn
Link : acting@boiling action
Link : out@cooling cooling
Link : acting@cooling action
Link : errout@cooling errIn
Link : out@cold cold
Link : errout@cold errIn
Link : acting@cold action

[cold]
initState : 1
stateNo : 0
state3 : 3

[heating]
stateNo : 1
state0 : 0
state1 : 0

[boiling]
stateNo : 2
state1 : 2
state2 : 0

[cooling]
stateNo : 3
state1 : 1
state2 : 1
state3 : 1  
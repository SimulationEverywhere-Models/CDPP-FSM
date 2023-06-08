[top]
components : s0@fsm s1@fsm s2@fsm
out : s0 s1 s2 errIn
in : in

Link : in in@s0
Link : in in@s1
Link : in in@s2

Link : out@s0 transin@s0
Link : out@s0 transin@s1
Link : out@s1 transin@s0
Link : out@s1 transin@s2
Link : out@s2 transin@s2
Link : out@s2 transin@s0

Link : out@s0 s0
Link : errout@s0 errIn
Link : out@s1 s1
Link : errout@s1 errIn
Link : out@s2 s2
Link : errout@s2 errIn

[s0]
initState : 1
stateNo : 0
state0 : 0
state1 : 0
state2 : 0

[s1]
stateNo : 1
state0 : 1

[s2]
stateNo : 2
state1 : 1
state2 : 1
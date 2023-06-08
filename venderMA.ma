[top]
components : zero@fsm five@fsm ten@fsm fifteen@fsm twenty@fsm
out : zero five ten fifteen twenty errIn action
in : in



Link : in in@zero
Link : in in@five
Link : in in@ten
Link : in in@fifteen
Link : in in@twenty

Link : out@zero transin@five
Link : out@zero transin@ten

Link : out@five transin@ten
Link : out@five transin@fifteen

Link : out@ten transin@twenty

Link : out@fifteen transin@zero
Link : out@fifteen transin@twenty

Link : out@twenty transin@zero

Link : out@zero zero
Link : errout@zero errIn
Link : acting@zero action
Link : out@five five
Link : errout@five errIn
Link : acting@five action
Link : out@ten ten
Link : errout@ten errIn
Link : acting@ten action
Link : out@fifteen fifteen
Link : errout@fifteen errIn
Link : acting@fifteen action
Link : out@twenty twenty
Link : errout@twenty errIn
Link : acting@twenty action

[zero]
initState : 1
stateNo : 0
state3 : 2
state4 : 3
state3act : 2
state4act : 3

[five]
stateNo : 1
state0 : 0

[ten]
stateNo : 2
state0 : 1
state1 : 0

[fifteen]
stateNo : 3
state1 : 1

[twenty]
stateNo : 4
state2 : 1
event3 : 0
  
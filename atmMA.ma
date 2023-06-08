[top]
components : st0@fsm st1@fsm st2@fsm st3@fsm st4@fsmst5@fsmst6@fsm st7@fsmst8@fsmst8@fsm st9@fsm
out : idle checkin sel-transact sel-wd-ac in-amount confirm dispensing sel-depo-ac depo-ready depo-end errIn
in : in

Link : in in@st0
Link : in in@st1
Link : in in@st2
Link : in in@st3
Link : in in@st4
Link : in in@st5
Link : in in@st6
Link : in in@st7
Link : in in@st8
Link : in in@st9

Link : out@st0 transin@st1
Link : out@st1 transin@st0
Link : out@st1 transin@st2
Link : out@st2 transin@st3
Link : out@st2 transin@st7
Link : out@st3 transin@st4
Link : out@st4 transin@st5
Link : out@st5 transin@st4
Link : out@st5 transin@st6
Link : out@st6 transin@st0

Link : out@st7 transin@st8
Link : out@st8 transin@st9
Link : out@st9 transin@st0

Link : out@st0 idle
Link : errout@st0 errIn

Link : out@st1 checkin
Link : errout@st1 errIn

Link : out@st2 sel-transact 
Link : errout@st2 errIn

Link : out@st3 sel-wd-ac
Link : errout@st3 errIn

Link : out@st4 in-amount
Link : errout@st4 errIn

Link : out@st5 confirm
Link : errout@st5 errIn

Link : out@st6 dispensing
Link : errout@st6 errIn

Link : out@st7 sel-depo-ac
Link : errout@st7 errIn

Link : out@st8 depo-ready
Link : errout@st8 errIn

Link : out@st9 depo-end
Link : errout@st9 errIn


[st0]
initState : 1
stateNo : 0
state1 : 1
state6 : 8
state9 : 8

[st1]
stateNo : 1
state0 : 0

[st2]
stateNo : 2
state1 : 2

[st3]
stateNo : 3
state2 : 3

[st4]
stateNo : 4
state3 : 4 
state5 : 6

[st5]
stateNo : 5
state4 : 5 

[st6]
stateNo : 6
state5 : 7

[st7]
stateNo : 7
state2 : 9 

[st8]
stateNo : 8
state7 : 4 

[st9]
stateNo : 9
state8 : 10 
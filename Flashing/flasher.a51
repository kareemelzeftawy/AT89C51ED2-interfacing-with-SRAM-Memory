		ORG		0H	
		MOV		P1, #0FFH
HERE:	JB 		P1.0, HERE	
LOOP:	clr		P2.0
		ACALL	Delay_1_sec
		setb	P2.0
		ACALL	Delay_1_sec
		SJMP	HERE
Delay_1_sec: 	
		MOV R5, #14 
LOOP1: 	MOV R6, #255  
LOOP2: 	MOV R7, #255  
LOOP3:	DJNZ R7, LOOP3 ;inner loop 
		DJNZ R6, LOOP2 ;middle loop 
		DJNZ R5, LOOP1 ;outer loop				
		RET		
		END
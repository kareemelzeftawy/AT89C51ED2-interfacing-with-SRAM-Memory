

		ORG		0H			
		
		mov		DPTR, #0x700
		mov		A,	#2H
		movx	@DPTR, A
		
		clr		A
		movx	A, @DPTR 		
		mov		R1, A
		

		mov		DPTR, #0x701
		mov		A,	#3H
		movx	@DPTR, A
		
		clr		A
		movx	A, @DPTR 		
		mov		R2, A
		
		
		mov		DPTR, #0x702
		mov		A, R1
		add		A, R2
		movx	@DPTR, A
		
		mov		P1, A
		
		
		
		END
		
		
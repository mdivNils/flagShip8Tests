#include "inkey.ch"
//#include "llibG.ch"
#INCLUDE "box.CH"
//#INCLUDE "blob.CH"
#INCLUDE "dbstruct.CH"
//#INCLUDE "dbinfo.CH"


***********************************************************
FUNC Start( cNr )
***********************************************************
LOCAL cFileName 	:= SPACE( 50 )
LOCAL aFields		:= {}
LOCAL aCFields		:= {}
LOCAL nFAnz			:= 0
LOCAL i, cFeldO, cFeldC, xTemp
LOCAL nWahl := 0
PRIVAT cKrit := SPACE( 250 )
PRIVAT xKrit

IF cNr != NIL
	nWahl := VAL( cNr )
ENDIF


//REQUEST DBFMEMO
//MEMOSETSUPER("DBFNTX")

CLEAR
IF nWahl = 0
	@ 1,1 SAY "Welche Datei reorganisieren?"
	@ 2,1 SAY "     1. Abrechnungsfaelle"
	@ 3,1 SAY "     2. andere Datei"
	@ 4,1 GET nWahl
	READ
	IF nWahl = 0 .OR. LASTKEY() = 27
		QUIT
	ENDIF
ENDIF
IF nWahl != 1
	@ 1,1 SAY "Dateiname der Originaldatei: " GET cFileName PICT "@s20"
	@ 2,1 SAY "Anzahl der Blob-Felder:      " GET nFAnz PICT "99"
	@ 3,1 SAY "Kriterien: " GET cKrit PICT "@s60"
	READ
	IF LASTKEY() = K_ESC
		QUIT
	ENDIF
	aFields := ARRAY( nFAnz )
	AFILL( aFields, SPACE( 10 ) )

	FOR i := 1 TO nFAnz
		@ 10+i, 1 SAY "Feldname Nr. " + STR( i, 2, 0)
		@ 10+i, 20 GET aFields[ i ]
	NEXT
	READ
ELSE
	cFileName := "scheine"
	nFAnz := 3
	cKrit := "!deleted()"

	aFields := ARRAY( nFAnz )
	AFILL( aFields, SPACE( 10 ) )
	aFields[ 1 ] := "DPOINTER  "
	aFields[ 2 ] := "LPOINTER  "
	aFields[ 3 ] := "XPOINTER  "

ENDIF

USE (cFileName)
COPY STRUCTURE EXTENDED TO __temp
CREATE dbftemp FROM __temp NEW

USE __temp
DBGOTOP()
DO WHILE !EOF()
//	IF field_type != "M"
		AADD( aCFields, { field_name, "" } )
		IF ASCAN( aFields, {|cEle| UPPER( cEle ) == field_name }) > 0
			aCFields[ LEN( aCFields ), 2 ] := "BLOB"
		ENDIF
//	ENDIF
	DBSKIP()
ENDDO

IF EMPTY( cKrit )
	xKrit := {|| .T. }
ELSE
	xKrit := &("{|| " + cKrit + " }")
ENDIF

USE dbftemp 

DBSELECTAREA( cFileName )
DBGOTOP()
DO WHILE !EOF()

	@ 19,10 SAY RECNO()
	@ 19,20 SAY "/"
	@ 19,30 SAY LASTREC()

	IF !EVAL( xKrit )
		DBSKIP()
		LOOP
	ENDIF

	dbftemp->( DBAPPEND() )

	FOR i := 1 TO LEN( aCFields )
		cFeldO := TRIM( cFileName ) + "->" + aCFields[ i, 1 ]
		cFeldC := "dbftemp->" + aCFields[ i, 1 ]
		IF aCFields[ i, 2 ] == "BLOB"
			IF &cFeldO > 0
				nTemp := &cFeldO
				@ 20, 1 SAY cFeldO
				@ 21, 1 SAY nTemp
				@ 22, 1 SAY pat_name
				@ 23, 1 SAY RECNO()
				@ 24, 1 SAY "   "
				xTemp := nTemp//BLOBDIRECTGET( nTemp )
				IF UPPER( CHR( LASTKEY() ) ) = "D"	// Fehler Default
					xTemp := NIL
					KEYBOARD "1"
					INKEY()
				ENDIF
				@ 24, 1 SAY "..."
			ELSE
				xtemp := NIL
			ENDIF
		ELSE
			xTemp := &cFeldO
		ENDIF

		DBSELECTAREA( "dbftemp" )

		IF aCFields[ i, 2 ] == "BLOB"
			IF xtemp != NIL
				do case
					case upper(aCFields[i,1]) = "DPOINTER" .AND. valtype(xTemp) = "C"
						REPLACE &cFeldC WITH xTemp //BLOBDIRECTPUT( 0, xTemp )
					case upper(aCFields[i,1]) = "LPOINTER" .AND. valtype(xTemp) = "A"
						REPLACE &cFeldC WITH xTemp //BLOBDIRECTPUT( 0, xTemp )
					case upper(aCFields[i,1]) = "XPOINTER" .AND. valtype(xTemp) = "A"
						REPLACE &cFeldC WITH xTemp //BLOBDIRECTPUT( 0, xTemp )
					case upper(aCFields[i,1]) = "MEMODUMMY" .AND. valtype(xTemp) = "A"
						REPLACE &cFeldC WITH xTemp //BLOBDIRECTPUT( 0, xTemp )
				endcase
			ENDIF
		ELSE
			REPLACE &cFeldC WITH xTemp
		ENDIF

		DBSELECTAREA( cFileName )

	NEXT
	DBSELECTAREA( cFileName )
	DBSKIP()

ENDDO
DBCLOSEALL()

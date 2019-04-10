//#include "\clip53\include\std.ch"
#include "inkey.ch"
#INCLUDE "box.CH"
//#INCLUDE "blob.CH"
#INCLUDE "dbstruct.CH"
#include "dbfidx.fh"



***********************************************************
FUNC start( bNoDeleted )
***********************************************************
LOCAL aKartei := {}
LOCAL nHandle := 0
LOCAL cBuffer := ""
LOCAL aNeuKartei := {}
LOCAL crlf := CHR( 10 ) + CHR( 13 )
LOCAL i
CLEAR

//REQUEST DBFMEMO
//MEMOSETSUPER("DBFNTX")

IF bNoDeleted = NIL
	bNoDeleted := .F.
ELSE
	bNoDeleted := .T.
ENDIF

cKrit := SPACE(200)
CLEAR
@ 1,1 SAY "Kriterien: " GET cKrit
READ


@ 1,1 SAY "Sicherungsdatei für Karteikartei wird neu erzeugt ..."
DBCREATE( "kartneu", { 	;
									{ "pnr", "n", 10, 0 },;
									{ "datetime", "c", 15, 0 },;
									{ "gesperrt", "l", 1, 0 },;
									{ "elemente", "n", 6, 0 },;
									{ "pointer", "n", 10, 0 },;
									{ "memodummy", "m", 10, 0 };
								})
@ 1,1 SAY "Fehlerprotokoll in KARTEI.ERR!"
@ 3,1 SAY "Datenbank KARTNEU fuer Karteikartei wurde neu erzeugt, weiter mit <RETURN>"
INKEY( 0 )

IF bNoDeleted
	@ 5, 1 SAY "Geloeschte werden eleminiert!"
	INKEY( 0 )
ENDIF

nHandle := FCREATE( "kartei.err", 0 )

IF nHandle <= 0
	@ 10, 10 SAY "Fehler beim Anlegen der KARTEI.ERR " + STR( FERROR(), 2, 0)
	QUIT
ENDIF

USE kartneu NEW //VIA "DBFMEMO"

USE kartei NEW //VIA "DBFMEMO"
DBGOTOP()
CLEAR
@ 1, 1 SAY "Anzahl Saetze   " + STR( LASTREC())
@ 2, 1 SAY "akt. Datensatz "
DO WHILE !EOF()

	@ 2, 16 SAY RECNO()
	IF DELETED() .AND. bNoDeleted
		@ 2, 30 SAY RECNO()
		DBSKIP()
		LOOP
	ENDIF
	IF !EMPTY( cKrit )
		IF !&cKrit
			DBSKIP()
			LOOP
		ENDIF
	ENDIF
	kartneu->( DBAPPEND() )
	aKartei := kartei->pointer
	@ 3,1 SAY VALTYPE( aKartei )
	IF VALTYPE( aKartei ) $ "AC"
		@ 4,1 SAY LEN( aKartei )
	ENDIF

	IF UPPER( CHR( LASTKEY() ) ) = "D" .OR. ;		// Fehler Default
			!(VALTYPE( aKartei ) $ "A")

		KEYBOARD CHR( 1 )
		INKEY()

		cBuffer := 	STR( RECNO(), 5, 0 ) + " : " + ;
						STR( kartei->pnr, 10, 0) + " : " + ;
					  	STR( kartei->elemente, 5, 0 ) + " : " + ;
						kartei->datetime + " : " + ;
						VALTYPE( aKartei ) + " : " + ;
						IF( VALTYPE( aKartei ) = "A", STR( LEN( aKartei ), 5, 0), " - " )

		FWRITE( nHandle, cBuffer + crlf, LEN( cBuffer ) + 2)

		IF VALTYPE( aKartei ) = "A"
			aNeuKartei := {}
			FOR i := 1 TO LEN( aKartei )
				IF VALTYPE( aKartei[ i ] ) = "C" .AND. !EMPTY( aKartei[ i ] )
					AADD( aNeuKartei, aKartei[ i ] )
				ENDIF
			NEXT
			aKartei := aNeuKartei
			cBuffer := SPACE( 10 ) + " : " + SPACE( 5 ) + " : " + ;
							STR( LEN( aKartei ), 5, 0 )

			cBuffer := 	SPACE(  5 ) + " : " + ;
							SPACE( 10 ) + " : " + ;
					  		SPACE(  5 ) + " : " + ;
							kartei->datetime + " : " + ;
							VALTYPE( aKartei ) + " : " + ;
						IF( VALTYPE( aKartei ) = "A", STR( LEN( aKartei ), 5, 0), " - " )

			FWRITE( nHandle, cBuffer + crlf, LEN( cBuffer ) + 2 )
		ELSE
			aKartei := {}
		ENDIF


	ENDIF


	IF aKartei != NIL
		DBSELECTAREA("kartneu")
		IF VALTYPE( aKartei ) == "A" .AND. LEN( aKartei ) > 0
			kartneu->pointer 	:= aKartei
		ELSE
			kartneu->pointer 	:= 0
		ENDIF
		kartneu->pnr 		:= kartei->pnr
		kartneu->datetime := kartei->datetime
		kartneu->gesperrt := kartei->gesperrt
		kartneu->elemente	:= kartei->elemente
		DBSELECTAREA("kartei")
	ENDIF
	DBSKIP()

ENDDO
FCLOSE( nHandle )
DBCLOSEALL()

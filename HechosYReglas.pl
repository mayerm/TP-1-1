persona(juan).
persona(jesus).
persona(alicia).
persona(ezequiel).
persona(victoria).
persona(luis).
padre(juan,jesus).
padre(alicia,jesus).
padre(ezequiel,juan).


hermano(A,B) :-
	padre(A,P),
	padre(B,P),
	A \== B.
nieto(A,B) :-
	padre(A,P),
	padre(P,B).
sin_parentezco(A,B) :-
	A \== B,
	persona(A),
	persona(B),
	not(padre(A,B)),
	not(padre(B,A)),
	not(nieto(A,B)),
	not(hermano(A,B)).

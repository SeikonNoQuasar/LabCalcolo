#!/bin/bash
count=1
for arg 
do							#notare uso intelligente di arg
	echo "Argument $count is $arg"
	count=$((count+1))		
done
exit 0

#se io avvio questo programma con ./count.sh cavolo radice scena ottengo la scritta: argument 1 is cavolo, argument 2 is radice, argument 3 is scena
#se sostituisco ' al posto di " preservo il contenuto, ovvero mi verra` stampato il contenuto esattamente come e` scritto
#nel caso di apici al posto di virgolette l'output dello stesso avvio dell'esempio qui sopra sarebbe la ripetizione 3 volte di Argument $count is $arg

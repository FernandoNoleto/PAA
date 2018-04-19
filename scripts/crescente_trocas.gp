set title "Vetor ordenado em ordem crescente"

set xlabel "Tamanho do vetor"
set ylabel "Quantidade de trocas efetuadas"

plot 'data/crescente/trocas_bubble.dat' title "bubble" lc rgb "red" with lines,\
 'data/crescente/trocas_selection.dat' title "selection"lc rgb "green" with lines,\
 'data/crescente/trocas_insertion.dat' title "insertion" lc rgb "blue" with lines,\
 'data/crescente/trocas_merge.dat' title "merge" lc rgb "black" with lines,\
 'data/crescente/trocas_quick.dat' title "quick" lc rgb "yellow" with lines

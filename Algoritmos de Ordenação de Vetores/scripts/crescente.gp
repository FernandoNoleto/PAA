set title "Vetor ordenado em ordem crescente"

set xlabel "Tamanho do vetor"
set ylabel "Tempo em milisegundos (ms)"

plot 'data/crescente/bubble.dat' title "bubble" lc rgb "red" with lines,\
 'data/crescente/selection.dat' title "selection"lc rgb "green" with lines,\
 'data/crescente/insertion.dat' title "insertion" lc rgb "blue" with lines,\
 'data/crescente/merge.dat' title "merge" lc rgb "black" with lines,\
 'data/crescente/quick.dat' title "quick" lc rgb "yellow" with lines

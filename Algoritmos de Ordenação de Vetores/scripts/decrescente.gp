set title "Vetor ordenado em ordem decrescente"

set xlabel "Tamanho do vetor"
set ylabel "Tempo em milisegundos (ms)"

plot 'data/decrescente/bubble.dat' title "bubble" lc rgb "red" with lines,\
 'data/decrescente/selection.dat' title "selection"lc rgb "green" with lines,\
 'data/decrescente/insertion.dat' title "insertion" lc rgb "blue" with lines,\
 'data/decrescente/merge.dat' title "merge" lc rgb "black" with lines,\
 'data/decrescente/quick.dat' title "quick" lc rgb "yellow" with lines
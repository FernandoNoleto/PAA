set title "Vetor em ordem aleatoria"

set xlabel "Tamanho do vetor"
set ylabel "Tempo em milisegundos (ms)"

plot 'data/random/bubble.dat' title "bubble" lc rgb "red" with lines,\
 'data/random/selection.dat' title "selection"lc rgb "green" with lines,\
 'data/random/insertion.dat' title "insertion" lc rgb "blue" with lines,\
 'data/random/merge.dat' title "merge" lc rgb "black" with lines,\
 'data/random/quick.dat' title "quick" lc rgb "yellow" with lines

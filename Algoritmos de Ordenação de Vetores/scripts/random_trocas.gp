set title "Vetor em ordem aleatoria"

set xlabel "Tamanho do vetor"
set ylabel "Quantidade de trocas efetuadas"

plot 'data/random/trocas_bubble.dat' title "bubble" lc rgb "red" with lines,\
 'data/random/trocas_selection.dat' title "selection"lc rgb "green" with lines,\
 'data/random/trocas_insertion.dat' title "insertion" lc rgb "blue" with lines,\
 'data/random/trocas_merge.dat' title "merge" lc rgb "black" with lines,\
 'data/random/trocas_quick.dat' title "quick" lc rgb "yellow" with lines

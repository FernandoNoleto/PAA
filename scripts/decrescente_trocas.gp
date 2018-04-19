set title "Vetor ordenado em ordem decrescente"

set xlabel "Tamanho do vetor"
set ylabel "Quantidade de trocas efetuadas"

plot 'data/decrescente/trocas_bubble.dat' title "bubble" lc rgb "red" with lines,\
 'data/decrescente/trocas_selection.dat' title "selection" lc rgb "green" with lines,\
 'data/decrescente/trocas_insertion.dat' title "insertion" lc rgb "blue" with lines,\
 'data/decrescente/trocas_merge.dat' title "merge" lc rgb "black" with lines,\
 'data/decrescente/trocas_quick.dat' title "quick" lc rgb "yellow" with lines

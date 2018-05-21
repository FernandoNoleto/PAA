set title "Grafico"

#set xlabel "Tamanho do vetor"
#set ylabel "Tempo em milisegundos (ms)"

plot 'vetor_final.dat' title "vetor_final" lc rgb "red" with lines,\
 'a.dat' title "vetor_a" lc rgb "blue" with lines,\
 'b.dat' title "vetor_b" lc rgb "green" with lines
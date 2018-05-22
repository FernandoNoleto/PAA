set title "Grafico"

#set xlabel "Tamanho do vetor"
#set ylabel "Tempo em milisegundos (ms)"

plot 'vetor_final.dat' title "FFT Convolution" lc rgb "red" with lines,\
 'a.dat' title "Vetor a" lc rgb "blue" with lines,\
 'b.dat' title "Vetor b" lc rgb "green" with lines,\
 'naive.dat' title "Naive Convolution" lc rgb "black" with lines,\
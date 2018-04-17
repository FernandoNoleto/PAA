set title "Algoritmos em ordem aleatória" textcolor "red"

plot 'data/random/bubble.dat' with lines title columnheader(1),
'data/random/insertion.dat' with lines title columnheader(1),
'data/random/selection.dat' with lines title columnheader(1),
'data/random/merge.dat' with lines title columnheader(1),
'data/random/quick.dat' with lines title columnheader(1)

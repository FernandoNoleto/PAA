set title "Algoritmos em ordem crescente" textcolor "red"

plot 'data/crescente/bubble.dat' with lines title columnheader(1),
'data/crescente/insertion.dat' with lines title columnheader(1),
'data/crescente/selection.dat' with lines title columnheader(1),
'data/crescente/merge.dat' with lines title columnheader(1),
'data/crescente/quick.dat' with lines title columnheader(1)

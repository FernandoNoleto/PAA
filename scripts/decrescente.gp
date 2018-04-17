set title "Algoritmos em ordem decrescente" textcolor "red"

plot 'data/decrescente/bubble.dat' with lines title columnheader(1),
'data/decrescente/insertion.dat' with lines title columnheader(1),
'data/decrescente/selection.dat' with lines title columnheader(1),
'data/decrescente/merge.dat' with lines title columnheader(1),
'data/decrescente/quick.dat' with lines title columnheader(1)

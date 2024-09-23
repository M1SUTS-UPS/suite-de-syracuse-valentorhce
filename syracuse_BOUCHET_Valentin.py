# BOUCHET Valentin 22101550


import numpy as np
import astropy.table as tb
import matplotlib.pyplot as plt


fichier = 'Syracuse.txt'
data = tb.Table.read(fichier, format='ascii')

Altitude_max = max(data['col2'])
Temps_de_vol = max(data['col1'])

print("Altitude max = ", Altitude_max)
print("Temps_de_vol = ", Temps_de_vol)

plt.scatter(data['col1'],data['col2'])
plt.plot(data['col1'],data['col2'])
plt.grid()
plt.xlabel("Temps de vol [s]")
plt.ylabel("Attitude [m]")
plt.title("Suite de Syracuse")
plt.show()
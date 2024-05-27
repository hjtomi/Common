szamok = []
keresztnevek = []
vezeteknevek = []

with open('nevek.txt', 'r', encoding="utf-8") as file:
    lines = list(map(lambda x: x.strip(), file.readlines()))

for line in lines:
    elvalasztott = line.split()

    if len(elvalasztott) > 3:
        szamok.append(elvalasztott[0])
        keresztnevek.append(elvalasztott[2])
        keresztnevek.append(elvalasztott[3])
        vezeteknevek.append(elvalasztott[1])

    else:
        szamok.append(elvalasztott[0])
        keresztnevek.append(elvalasztott[2])
        vezeteknevek.append(elvalasztott[1])

print(keresztnevek)
print(vezeteknevek)

keresztnev_mennyisegek = {}
vezeteknev_mennyisegek = {}

for nev_fo in keresztnevek:

    if nev_fo not in keresztnev_mennyisegek.keys():
        keresztnev_mennyisegek[nev_fo] = 0

        for nev_al in keresztnevek:
            if nev_fo == nev_al:
                keresztnev_mennyisegek[nev_fo] += 1

for nev_fo in vezeteknevek:

    if nev_fo not in vezeteknev_mennyisegek.keys():
        vezeteknev_mennyisegek[nev_fo] = 0

        for nev_al in vezeteknevek:
            if nev_fo == nev_al:
                vezeteknev_mennyisegek[nev_fo] += 1

keresztnev_mennyisegek = dict(sorted(keresztnev_mennyisegek.items(), key=lambda x: x[1], reverse=True))
vezeteknev_mennyisegek = dict(sorted(vezeteknev_mennyisegek.items(), key=lambda x: x[1], reverse=True))

with open('keresztnev_mennyisegek.txt', 'w', encoding='utf-8') as file:
    string = ''
    for (nev, szam) in keresztnev_mennyisegek.items():
        string += f'{nev} {szam}\n'

    file.write(string)

with open('vezeteknev_mennyisegek.txt', 'w', encoding='utf-8') as file:
    string = ''
    for (nev, szam) in vezeteknev_mennyisegek.items():
        string += f'{nev} {szam}\n'

    file.write(string)

